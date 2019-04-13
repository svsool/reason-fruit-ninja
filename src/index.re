open Reprocessing;

type fruit =
  | Banana;

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
  Env.size(~width=610, ~height=813, env);
  let sprites = Sprites.make(env);

  {position: 10.0, mousePoints: [], sprites, fruits: []};
};

let fadeMouseTrail = points => {};

let draw = (state, env) => {
  let sprites = Sprites.make(env);

  Draw.background(Utils.color(~r=0, ~g=0, ~b=0, ~a=255), env);
  Draw.image(
    sprites.background,
    ~width=610,
    ~height=813,
    ~pos=(0, 0),
    env,
  );

  Draw.image(sprites.apple, ~pos=(0, 0), ~width=30, ~height=30, env);


  {...state, position: state.position +. 10.0};
};

run(~setup, ~draw, ());
