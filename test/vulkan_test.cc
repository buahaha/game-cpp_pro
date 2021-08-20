#include <gtest/gtest.h>
#include <GLFW/glfw3.h>
#include <MoltenVK/mvk_vulkan.h>

TEST(VulkanTest, IfWorks) {
  if (!glfwInit()) {
    EXPECT_TRUE(false);
  }
  EXPECT_EQ(GLFW_TRUE, glfwVulkanSupported());


  glfwTerminate();
}