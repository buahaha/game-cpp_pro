

load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
  name = "hello_test",
  size = "small",
  srcs = [
    "hello_test_me.cc",
    "phoenix_test.cc", 
  ],
  deps = [
    "@com_google_googletest//:gtest_main", 
    ":MyOtherLibrary"
  ],
  copts = [
    "-std=c++17",
  ],
)

  # --test_output (summary, errors, all or streamed; default: "summary")
  # --test_summary (short, terse, detailed, none or testcase; default: "short")



cc_test(
  name = "vulkan_test",
  srcs = [
    "vulkan_test.cc",
  ],
  deps = [
    "@com_google_googletest//:gtest_main",
    ":MyOtherLibrary",
    "@vulkan-repo//:vulkan",
    "@molten-vk-dylib//:molten-vk",
    "@molten-vk-include//:molten-vk-include",
    "@glfw-include//:glfw-include",
    "@glfw-lib//:glfw-lib",
    # "@molten-vk-xcframework//:molten-vk-xcframework",
    # "@macos-lib//:macos-lib",
    ],
  copts = [
    "-std=c++17",
    # "-I",
    # "-Iexternal",
  ],
)

cc_test(
  name = "python_test",
  srcs = [
    "python_test.cc",
  ],
  deps = [
    "@com_google_googletest//:gtest_main",
    "@python-h//:python",
    "@python-h//:cpython",
    "@dev-usr-lib//:libcpp_tbd",
  ],
)

cc_test(
  name = "node_test",
  srcs = [
    "node_test.cc",
  ],
  deps = [
    "@com_google_googletest//:gtest_main",
    "@node-include//:node",
    "@local-include//:uv",
    "@local-lib//:libuv",
    "@dev-usr-lib//:libcpp_tbd",
    "@dev-usr-include//:assert",
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
    # "UIKit", iOS
    "IOSurface",
  ],
)

apple_static_library(
  name = "MyOther",
  platform_type = "macos",
  sdk_frameworks = [
    "Metal",
    "Foundation",
    "QuartzCore",
    "IOKit",
    # "UIKit",
    "IOSurface",
  ],
)

# load(
#     "@build_bazel_rules_apple//apple:apple.bzl",
#     "apple_static_framework_import",
# )

# apple_static_framework_import(
#   name = "frameworks",
#   sdk_frameworks = [
#     "Metal",
#     "Foundation",
#     "QuartzCore",
#     "IOKit",
#     "UIKit",
#     "IOSurface",
#   ],
#   framework_imports = [],
# )