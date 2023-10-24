﻿// vulkan_example.cpp : Defines the entry point for the application.
//

#include "vulkan_example.h"
#include <glm/glm.hpp>
#include <glm/gtc/type_aligned.hpp>
#include <vulkan/vulkan.h>


using namespace std;

int main()
{
	VkApplicationInfo appInfo{};
	appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
	appInfo.pApplicationName = "Hello Triangle";
	appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
	appInfo.pEngineName = "No Engine";
	appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
	appInfo.apiVersion = VK_API_VERSION_1_0;

	VkInstanceCreateInfo createInfo{};
	createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
	createInfo.pApplicationInfo = &appInfo;

	VkInstance instance;

	VkResult result = vkCreateInstance(&createInfo, nullptr, &instance);

	glm::aligned_vec4 a(1.0f);
	glm::aligned_mat4 b(1.0f);

	a = b * a;

	return 0;
}
