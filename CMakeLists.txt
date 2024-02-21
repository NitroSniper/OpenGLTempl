cmake_minimum_required(VERSION 3.3)
project(LearnOpenGL-CLion)

find_package(OpenGL REQUIRED)

# Including GLFW
add_subdirectory(lib/glfw)
include_directories(lib/glfw/include)

# Including GLAD
include_directories(lib/glad/include)

set(SOURCE_FILES src/main.cpp lib/glad/src/glad.c)


add_executable(${CMAKE_PROJECT_NAME} ${SOURCE_FILES})

# Linking GLFW and OGL
target_link_libraries(${CMAKE_PROJECT_NAME} glfw ${GLFW_LIBRARIES} ${OPENGL_LIBRARY})
