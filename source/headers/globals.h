//
// Created by Danny Javier Sandi on 10/19/15.
//

#ifndef CAVESTORY_GLOBALS_H
#define CAVESTORY_GLOBALS_H

namespace globals {
    const int SCREEN_WIDTH = 640;
    const int SCREEN_HEIGHT = 480;

    const int SPRITE_SCALE = 2;
}

struct Vector2 {
    int x, y;
    Vector2() :
            x(0), y(0)
    {}
    Vector2(int x, int y) :
            x(x), y(y)
    {}
    Vector2 zero(){
        return Vector2(0,0);
    }
};

#endif //CAVESTORY_GLOBALS_H
