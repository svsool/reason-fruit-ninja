open Reprocessing;

type fruit;

type mousePoint = {
  point: (int, int),
  alpha: float
}

type state = {
  position: float,
  mousePoints: list(mousePoint),
};

let setup = env => {
  Env.size(~width=610, ~height=813, env);
  {position: 10.0, mousePoints: []};
};

let fadeMouseTrail = points => {

};

let draw = (state, env) => {
  let sprites = Sprites.make(env);

  Draw.background(Utils.color(~r=0, ~g=0, ~b=0, ~a=255), env);
  Draw.image(sprites.sprites.background, ~width=610, ~height=813, ~pos=(0, 0), env);

  Draw.image(sprites.sprites.apple, ~pos=(0, 0), ~width=30, ~height=30, env);

  if (Env.mousePressed(env)) {

      //    Draw.fill(Utils.color(~r=255, ~g=0, ~b=0, ~a=255), env);
      //    let (mouseX, mouseY) = Env.mouse(env);
      //    Draw.ellipsef(
      //      ~center=(float_of_int(mouseX), float_of_int(mouseY)),
      //      ~radx=3.0,
      //      ~rady=3.0,
      //      env,
      //    );
  };

  {position: state.position +. 10.0};
};

run(~setup, ~draw, ());
