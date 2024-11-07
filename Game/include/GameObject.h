#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <SDL2/SDL_image.h>

class GameObject
{
    public:
        GameObject(const char* textureSheet, SDL_Renderer* ren);
        virtual ~GameObject();

        void Update();
        void Render();



    protected:

    private:
        int xpos;
        int ypos;

        SDL_Texture* objTexture;
        SDL_Rect srcRect, destRect;
        SDL_Renderer* renderer;
};

#endif // GAMEOBJECT_H
