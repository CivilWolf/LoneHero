
#if defined(__APPLE__)
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <SDL2_mixer/SDL_mixer.h>

#endif
#if defined(__linux__)
#include  "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_mixer.h"

#include <unistd.h>

#endif

#if defined(_WIN32) || (_WIN64)

#include <direct.h>
#include "SDL.h"
#include "SDL_image.h"
#include "SDL_mixer.h"
#define getcwd _getcwd

#endif




#include <stdio.h>
#include <iostream>


using namespace std;

int bSpeed;

SDL_Rect b1Pos,b2pos;


int main()
{
	cout << "Hello World!";
}
