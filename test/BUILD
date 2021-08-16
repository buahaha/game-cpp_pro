load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
  name = "hello_test",
  size = "small",
  srcs = [
    "hello_test_me.cc",
    "phoenix_test.cc",
     ":MyOtherLibrary", 
  ],
  deps = ["@com_google_googletest//:gtest_main"],
)



cc_test(
  name = "vulkan_test",
  srcs = [
    "vulkan_test.cc",
  ],
  deps = [
    "@com_google_googletest//:gtest_main",
    "@molten-vk-dylib//:molten-vk",
    # "@vulkan-repo//:vulkan",
    # "@macos-lib//:macos-lib",
    "@molten-vk-include//:molten-vk-include",
    # "@molten-vk-xcframework//:molten-vk-xcframework",
    "@glfw-include//:glfw-include",
    "@glfw-lib//:glfw-lib",
    ":MyOtherLibrary",
    ],
)

objc_library(
  name = "MyOtherLibrary",
  srcs = [],
  sdk_frameworks = [
    "Metal",
    "Foundation",
    "QuartzCore",
    "IOKit",
    "UIKit",
    "IOSurface",
  ],
)

