#include <iostream>
#include <SDL2/SDL.h>

using namespace std;
int main(int argc, char* args[])
{
    int width = 800;
    int height = 600;

    SDL_Window* window = NULL;
    SDL_Surface* screenSurface = NULL;
    if(SDL_Init(SDL_INIT_VIDEO) < 0);
    {
        cout << "error" << SDL_GetError();
    }
    
    return 0;
}