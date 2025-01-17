#pragma once

#include "stdafx.h"

// Enable the WSI extensions
#if defined(__ANDROID__)
#define VK_USE_PLATFORM_ANDROID_KHR
#elif defined(__linux__)
#define VK_USE_PLATFORM_XLIB_KHR
#elif defined(_WIN32)
#define VK_USE_PLATFORM_WIN32_KHR
#endif

#include <SDL2/SDL_vulkan.h>
#include <vulkan/vulkan.hpp>

#include "InputSystem.h"

class VulkanRenderer
{
public:
	int CreateContext();
};

