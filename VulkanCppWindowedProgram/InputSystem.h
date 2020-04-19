#pragma once

#include "SDL2\SDL_events.h"
#include "SDL2\SDL_timer.h"

class InputSystem
{
public:
	InputSystem() {}
	~InputSystem() {}

	bool EventPool();
};

