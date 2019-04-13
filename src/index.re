open Reprocessing;

type fruit;

type state = {
    fruit
};

let setup = (env) => Env.size(~width=600, ~height=600, env);

let draw = (_state, env) => {
let apple = Draw.loadImage(~filename="assets/apple.png", ~isPixel=true, env);
let appleHalf = Draw.loadImage(~filename="assets/apple_half_1.png", ~isPixel=true, env);
let appleHalfSmall = Draw.loadImage(~filename="assets/apple_half_1_small.png", ~isPixel=true, env);
let appleHalf2 = Draw.loadImage(~filename="assets/apple_half_2.png", ~isPixel=true, env);
let appleHalf2Small = Draw.loadImage(~filename="assets/apple_half_2_small.png", ~isPixel=true, env);
//  Draw.background(Utils.color(~r=255, ~g=217, ~b=229, ~a=255), env);
//  Draw.fill(Utils.color(~r=41, ~g=166, ~b=244, ~a=255), env);
//  Draw.rect(~pos=(100, 150), ~width=300, ~height=300, env)
Draw.imagef(
      apple,
      ~pos=(0.0, 0.0),
      ~width=551.0,
      ~height=600.0,
      env
    );
};

run(~setup, ~draw, ());
