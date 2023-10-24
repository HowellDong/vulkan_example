#include <iostream>
#include <vulkan/vulkan.h>


using namespace std;

int main()
{
	VkApplicationInfo app_info{};
	app_info.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
	app_info.pNext = NULL;
	app_info.pApplicationName = "create_instance";
	app_info.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
	app_info.pEngineName = "vulkan_example";
	app_info.engineVersion = VK_MAKE_VERSION(1, 0, 0);
	app_info.apiVersion = VK_API_VERSION_1_3;			//设置api version

	VkInstanceCreateInfo instance_create_info{};
	instance_create_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
	instance_create_info.pNext = NULL;
	instance_create_info.flags = 0;
	instance_create_info.pApplicationInfo = &app_info;
	instance_create_info.enabledLayerCount = 0;
	instance_create_info.ppEnabledExtensionNames = NULL;
	instance_create_info.enabledExtensionCount = 0;
	instance_create_info.ppEnabledExtensionNames = NULL;

	VkInstance vk_instance = VK_NULL_HANDLE;
	VkResult vk_res = vkCreateInstance(&instance_create_info, NULL, &vk_instance);
	if (vk_res != VK_SUCCESS)
	{
		std::wcerr << u8"failed to create vulkan instance " << std::endl;
	}

	return EXIT_SUCCESS;
}
