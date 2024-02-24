cmake_minimum_required(VERSION 3.5)
project(OpenGLTempl)
cmake_policy(SET CMP0072 NEW)

find_package(OpenGL REQUIRED)

# Including GLFW
add_subdirectory(lib/glfw)
include_directories(lib/glfw/include)

# Including GLAD and GLM
include_directories(include)

set(SOURCE_FILES src/main.cpp src/glad.c)


add_executable(${CMAKE_PROJECT_NAME} ${SOURCE_FILES})

# Linking GLFW and OGL
target_compile_features(${CMAKE_PROJECT_NAME} PRIVATE cxx_std_20) # set your version of C++
target_link_libraries(${CMAKE_PROJECT_NAME} glfw ${GLFW_LIBRARIES} ${OPENGL_LIBRARY})
