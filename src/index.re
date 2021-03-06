open Reprocessing;

module Fruit = {
  type t =
    | Banana;
};

type fruit = {
  position: (int, int),
  split: bool,
  type_: Fruit.t,
};

type mousePoint = {
  point: (int, int),
  alpha: float,
};

type state = {
  position: float,
  mousePoints: list(mousePoint),
  sprites: Sprites.sprites,
  fruits: list(fruit),
};

let setup = env => {
  Env.size(~width=400, ~height=600, env);
  let sprites = Sprites.make(env);
  {
    position: 10.0,
    mousePoints: [{point: (100, 100), alpha: 1.0}],
    sprites,
    fruits: [{position: (200, 200), type_: Banana, split: false}],
  };
};

let pointsToLines = _points => ();

let fadeMouseTrail = points => {
  points |> List.map(point => {...point, alpha: point.alpha -. 0.1});
};

let pruneMousePoints = points => {
  points |> List.filter(point => point.alpha > 0.0);
};

let addMousePointIfMouseDown = (env, points) =>
  if (Env.mousePressed(env)) {
    [{point: Env.mouse(env), alpha: 1.0}, ...points];
  } else {
    points;
  };

let draw = (state, env) => {
  Draw.background(Utils.color(~r=0, ~g=0, ~b=0, ~a=255), env);
  Draw.image(
    state.sprites.background,
    ~width=610,
    ~height=813,
    ~pos=(0, 0),
    env,
  );

  state.fruits
  |> List.map(fruit =>
       switch (fruit.type_) {
       | Fruit.Banana =>
         let sprite =
           if (fruit.split) {
             state.sprites.bananaHalf1;
           } else {
             state.sprites.banana;
           };
         Draw.image(sprite, ~pos=fruit.position, ~width=60, ~height=60, env);
       }
     );

  state.mousePoints
  |> List.iteri((index, point) =>
       if (index != 0) {
         let previousPoint = state.mousePoints->List.nth(index - 1);
         let alpha = (point.alpha +. previousPoint.alpha) /. 2.0;

         Draw.stroke(
           Utils.color(~r=255, ~g=0, ~b=0, ~a=int_of_float(alpha *. 255.0)),
           env,
         );
         Draw.strokeWeight(8, env);
         Draw.strokeCap(Round, env);
         Draw.line(~p1=point.point, ~p2=previousPoint.point, env);
       }
     );

  {
    ...state,
    position: state.position +. 10.0,
    mousePoints:
      state.mousePoints
      |> fadeMouseTrail
      |> addMousePointIfMouseDown(env)
      |> pruneMousePoints,
  };
};

run(~setup, ~draw, ());
