# installed from https://vulkan.lunarg.com/sdk/home#mac version 1.2.182.0
cc_library(
   name = "vulkan",
   hdrs = glob(["*/**"]),
   visibility = ["//visibility:public"],
   copts = [
      # "-I",
      # "-Iexternal/usr/local/include/vulkan",
   ],
   includes = [
      "vulkan",
      ".",
   ],
   include_prefix = "vulkan",
   # strip_include_prefix = "vulkan",
)