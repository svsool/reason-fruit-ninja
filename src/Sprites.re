open Reprocessing;

type sprites = {
    apple: imageT,
    appleHalf: imageT,
    appleHalfSmall: imageT,
    appleHalf2: imageT,
    appleHalf2Small: imageT,
    background: imageT,
    bananaHalf1: imageT,
    bananaHalf1Small: imageT,
    bananaHalf2: imageT,
    bananaHalf2Small: imageT,
    bananaSmall: imageT,
    bomb: imageT,
    bombSmall: imageT,
    coconut: imageT,
    coconutHalf1: imageT,
    coconutHalf1Small: imageT,
    coconutHalf2: imageT,
    coconutHalf2Small: imageT,
    coconutSmall: imageT,
    explosion: imageT,
    explosionSmall: imageT,
    orange: imageT,
    orangeHalf1: imageT,
    orangeHalf1Small: imageT,
    orangeHalf2: imageT,
    orangeHalf2Small: imageT,
    orangeSmall: imageT,
    pineapple: imageT,
    pineappleHalf1: imageT,
    pineappleHalf1Small: imageT,
    pineappleHalf2: imageT,
    pineappleHalf2Small: imageT,
    pineappleSmall: imageT,
    splashOrange: imageT,
    splashOrangeSmall: imageT,
    splashRed: imageT,
    splashRedSmall: imageT,
    splashTransparent: imageT,
    splashTransparentSmall: imageT,
    splashYellow: imageT,
    splashYellowSmall: imageT,
    watermelon: imageT,
    watermelonHalf1: imageT,
    watermelonHalf1Small: imageT,
    watermelonHalf2: imageT,
    watermelonHalf2Small: imageT,
    watermelonSmall: imageT
};

let make = env => {
        let apple = Draw.loadImage(~filename="assets/apple.png", ~isPixel=true, env);
        let appleHalf = Draw.loadImage(~filename="assets/apple_half_1.png", ~isPixel=true, env);
        let appleHalfSmall = Draw.loadImage(~filename="assets/apple_half_1_small.png", ~isPixel=true, env);
        let appleHalf2 = Draw.loadImage(~filename="assets/apple_half_2.png", ~isPixel=true, env);
        let appleHalf2Small = Draw.loadImage(~filename="assets/apple_half_2_small.png", ~isPixel=true, env);
        let background = Draw.loadImage(~filename="assets/background.png", ~isPixel=true, env);
        let bananaHalf1 = Draw.loadImage(~filename="assets/banana_half_1.png.png", ~isPixel=true, env);
        let bananaHalf1Small = Draw.loadImage(~filename="assets/banana_half_1_small.png.png", ~isPixel=true, env);
        let bananaHalf2 = Draw.loadImage(~filename="assets/banana_half_2.png.png", ~isPixel=true, env);
        let bananaHalf2Small = Draw.loadImage(~filename="assets/banana_half_2_small.png.png", ~isPixel=true, env);
        let bananaSmall = Draw.loadImage(~filename="assets/banana_small.png.png", ~isPixel=true, env);
        let bomb = Draw.loadImage(~filename="assets/bomb.png.png", ~isPixel=true, env);
        let bombSmall = Draw.loadImage(~filename="assets/bomb_small.png.png", ~isPixel=true, env);
        let coconut = Draw.loadImage(~filename="assets/coconut.png.png", ~isPixel=true, env);
        let coconutHalf1 = Draw.loadImage(~filename="assets/coconut_half_1.png.png", ~isPixel=true, env);
        let coconutHalf1Small = Draw.loadImage(~filename="assets/coconut_half_1_small.png.png", ~isPixel=true, env);
        let coconutHalf2 = Draw.loadImage(~filename="assets/coconut_half_2.png.png", ~isPixel=true, env);
        let coconutHalf2Small = Draw.loadImage(~filename="assets/coconut_half_2_small.png.png", ~isPixel=true, env);
        let coconutSmall = Draw.loadImage(~filename="assets/coconut_small.png.png", ~isPixel=true, env);
        let explosion = Draw.loadImage(~filename="assets/explosion.png.png", ~isPixel=true, env);
        let explosionSmall = Draw.loadImage(~filename="assets/explosion_small.png.png", ~isPixel=true, env);
        let orange = Draw.loadImage(~filename="assets/orange.png.png", ~isPixel=true, env);
        let orangeHalf1 = Draw.loadImage(~filename="assets/orange_half_1.png.png", ~isPixel=true, env);
        let orangeHalf1Small = Draw.loadImage(~filename="assets/orange_half_1_small.png.png", ~isPixel=true, env);
        let orangeHalf2 = Draw.loadImage(~filename="assets/orange_half_2.png.png", ~isPixel=true, env);
        let orangeHalf2Small = Draw.loadImage(~filename="assets/orange_half_2_small.png.png", ~isPixel=true, env);
        let orangeSmall = Draw.loadImage(~filename="assets/orange_small.png.png", ~isPixel=true, env);
        let pineapple = Draw.loadImage(~filename="assets/pineapple.png.png", ~isPixel=true, env);
        let pineappleHalf1 = Draw.loadImage(~filename="assets/pineapple_half_1.png.png", ~isPixel=true, env);
        let pineappleHalf1Small = Draw.loadImage(~filename="assets/pineapple_half_1_small.png.png", ~isPixel=true, env);
        let pineappleHalf2 = Draw.loadImage(~filename="assets/pineapple_half_2.png.png", ~isPixel=true, env);
        let pineappleHalf2Small = Draw.loadImage(~filename="assets/pineapple_half_2_small.png.png", ~isPixel=true, env);
        let pineappleSmall = Draw.loadImage(~filename="assets/pineapple_small.png.png", ~isPixel=true, env);
        let splashOrange = Draw.loadImage(~filename="assets/splash_orange.png.png", ~isPixel=true, env);
        let splashOrangeSmall = Draw.loadImage(~filename="assets/splash_orange_small.png.png", ~isPixel=true, env);
        let splashRed = Draw.loadImage(~filename="assets/splash_red.png.png", ~isPixel=true, env);
        let splashRedSmall = Draw.loadImage(~filename="assets/splash_red_small.png.png", ~isPixel=true, env);
        let splashTransparent = Draw.loadImage(~filename="assets/splash_transparent.png.png", ~isPixel=true, env);
        let splashTransparentSmall = Draw.loadImage(~filename="assets/splash_transparent_small.png.png", ~isPixel=true, env);
        let splashYellow = Draw.loadImage(~filename="assets/splash_yellow.png.png", ~isPixel=true, env);
        let splashYellowSmall = Draw.loadImage(~filename="assets/splash_yellow_small.png.png", ~isPixel=true, env);
        let watermelon = Draw.loadImage(~filename="assets/watermelon.png.png", ~isPixel=true, env);
        let watermelonHalf1 = Draw.loadImage(~filename="assets/watermelon_half_1.png.png", ~isPixel=true, env);
        let watermelonHalf1Small = Draw.loadImage(~filename="assets/watermelon_half_1_small.png.png", ~isPixel=true, env);
        let watermelonHalf2 = Draw.loadImage(~filename="assets/watermelon_half_2.png.png", ~isPixel=true, env);
        let watermelonHalf2Small = Draw.loadImage(~filename="assets/watermelon_half_2_small.png.png", ~isPixel=true, env);
        let watermelonSmall = Draw.loadImage(~filename="assets/watermelon_small.png.png", ~isPixel=true, env);

        {
            apple,
            appleHalf,
            appleHalfSmall,
            appleHalf2,
            appleHalf2Small,
            background,
            bananaHalf1,
            bananaHalf1Small,
            bananaHalf2,
            bananaHalf2Small,
            bananaSmall,
            bomb,
            bombSmall,
            coconut,
            coconutHalf1,
            coconutHalf1Small,
            coconutHalf2,
            coconutHalf2Small,
            coconutSmall,
            explosion,
            explosionSmall,
            orange,
            orangeHalf1,
            orangeHalf1Small,
            orangeHalf2,
            orangeHalf2Small,
            orangeSmall,
            pineapple,
            pineappleHalf1,
            pineappleHalf1Small,
            pineappleHalf2,
            pineappleHalf2Small,
            pineappleSmall,
            splashOrange,
            splashOrangeSmall,
            splashRed,
            splashRedSmall,
            splashTransparent,
            splashTransparentSmall,
            splashYellow,
            splashYellowSmall,
            watermelon,
            watermelonHalf1,
            watermelonHalf1Small,
            watermelonHalf2,
            watermelonHalf2Small,
            watermelonSmall
        };
};
