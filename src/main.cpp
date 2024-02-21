// Copyright 2024 <Mahie Miah>

#include <glad/glad.h>

#include <GLFW/glfw3.h>

#include <iostream>

#include <glm/glm.hpp>

int main(int, char **) {
  GLFWwindow *window;
  if (!glfwInit()) {
    return -1;
  }
  window = glfwCreateWindow(960, 540, "I am a Window", NULL, NULL);
  glfwMakeContextCurrent(window);

  // Check if glad is loaded
  if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
    std::cout << "Couldn't load OpenGL" << std::endl;
    glfwTerminate();
    return 0;
  }

  // used to resize window
  auto resizing = [](GLFWwindow *window, int width, int height) {
    glViewport(0, 0, width, height);
  };
  glfwSetFramebufferSizeCallback(window, resizing);

  while (!glfwWindowShouldClose(window)) {

    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.316, 0.198, 0.640, 1);

    glfwPollEvents();
    glfwSwapBuffers(window);
  }
  glfwTerminate();
  return 0;
}
