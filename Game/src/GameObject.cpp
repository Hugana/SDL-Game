#include "GameObject.h"
#include "TextureManager.h"

GameObject::GameObject(const char* textureSheet, SDL_Renderer* ren) {
    renderer = ren;
    objTexture = TextureManager::LoadTexture(textureSheet, ren);  // Call the static method directly
}

GameObject::~GameObject() {
    // Destructor logic
}

void GameObject::Update() {

    xpos = 0;
    ypos = 0;

    srcRect.x = 0;
    srcRect.y = 0;
    srcRect.w = 16;
    srcRect.h = 16;

    destRect.x = xpos;
    destRect.y = ypos;
    destRect.w = srcRect.w * 2;
    destRect.h = srcRect.h * 2;
}

void GameObject::Render() {
    SDL_RenderCopy(renderer, objTexture, &srcRect, &destRect);  // Render the texture
}
