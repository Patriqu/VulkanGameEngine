#include "InputSystem.h"
#include <SDL2\SDL_events.h>
#include <SDL2\SDL_timer.h>

bool InputSystem::EventPool()
{
    SDL_Event event;
    while (SDL_PollEvent(&event)) {

        switch (event.type) {

            case SDL_QUIT:
                return false;

            default:
                // Do nothing.
                break;
        }
    }
}
