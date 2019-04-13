open Reprocessing;

type fruit;

type state = {
    fruit
};

let setup = (env) => Env.size(~width=600, ~height=600, env);

let draw = (_state, env) => {

    let sprites = Sprites.make(env);
      Draw.background(Utils.color(~r=255, ~g=217, ~b=229, ~a=255), env);
    //  Draw.fill(Utils.color(~r=41, ~g=166, ~b=244, ~a=255), env);
    //  Draw.rect(~pos=(100, 150), ~width=300, ~height=300, env)
    Draw.image(
          sprites.apple,
          ~pos=(0, 0),
          ~width=30,
          ~height=30,
          env
        );
};

run(~setup, ~draw, ());
