# CMakeList.txt : CMake project for vulkan_example, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (vulkan_example "vulkan_example.cpp" "vulkan_example.h")

target_link_libraries(vulkan_example PUBLIC glm::glm Vulkan::Vulkan)

add_compile_definitions(GLM_FORCE_AVX2 GLM_FORCE_ALIGNED_GENTYPES)

if (CMAKE_VERSION VERSION_GREATER 3.26)
  set_property(TARGET vulkan_example PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.