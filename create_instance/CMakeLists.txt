add_executable(create_instance "create_instance.cpp" )

target_link_libraries(create_instance PRIVATE Vulkan::Vulkan)
