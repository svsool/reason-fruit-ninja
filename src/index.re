open Reprocessing;

type fruit;

type state = {fruit};

let setup = env => Env.size(~width=610, ~height=813, env);

let draw = (_state, env) => {
  let sprites = Sprites.make(env);

  Draw.background(Utils.color(~r=0, ~g=0, ~b=0, ~a=255), env);
  Draw.image(sprites.sprites.background, ~width=610, ~height=813, ~pos=(0, 0), env);

  Draw.image(sprites.sprites.apple, ~pos=(0, 0), ~width=30, ~height=30, env);
};

run(~setup, ~draw, ());
