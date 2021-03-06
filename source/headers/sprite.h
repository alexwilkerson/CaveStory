//
// Created by Danny Javier Sandi on 10/19/15.
//

#ifndef CAVESTORY_SPRITE_H
#define CAVESTORY_SPRITE_H

#include <SDL.h>
#include <string>

class Graphics;
/*
 * Handles data for individual sprites
 * */

class Sprite{
public:
    Sprite();
    Sprite(Graphics &graphics, const std::string &filePath, int sourceX, int sourceY, int width, int height,
           float posX, float posY);
    virtual ~Sprite();
    virtual void update();
    void draw(Graphics &graphics, int x, int y);

protected:
    SDL_Rect _sourceRect;
    SDL_Texture* _spriteSheet;
    float _x, _y;
};
#endif //CAVESTORY_SPRITE_H
