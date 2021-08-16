new_local_repository(
    name = "vulkan-repo",
    path = "/usr/local/include/vulkan",
    build_file = "third_party/vulkan.BUILD",
    # visibility = ["//visibility:public"],
)
new_local_repository(
    name = "molten-vk-dylib",
    path = "/usr/local/lib/",
    build_file = "third_party/molten-vk-dylib.BUILD",
    # visibility = ["//visibility:public"],
)

new_local_repository(
  name = "molten-vk-include",
  path = "/usr/local/include/MoltenVK",
  build_file = "third_party/molten-vk-include.BUILD",
)

new_local_repository(
  name = "molten-vk-xcframework",
  path = "/usr/local/lib/",
  build_file = "third_party/molten-vk-xcframework.BUILD",
)

new_local_repository(
    name = "glfw-include",
    path = "/usr/local/include/GLFW/",
    build_file = "third_party/glfw-include.BUILD",
    # visibility = ["//visibility:public"],
)

new_local_repository(
    name = "glfw-lib",
    path = "/usr/local/lib/",
    build_file = "third_party/glfw-lib.BUILD",
    # visibility = ["//visibility:public"],
)

load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")
git_repository(
    name = "com_google_googletest",
    remote = "https://github.com/google/googletest/",
    branch = "master",
    visibility = ["//visibility:public"],
)


load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
http_archive(
  name = "rules_cc",
  urls = ["https://github.com/bazelbuild/rules_cc/archive/40548a2974f1aea06215272d9c2b47a14a24e556.zip"],
  strip_prefix = "rules_cc-40548a2974f1aea06215272d9c2b47a14a24e556",
)

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "build_bazel_rules_apple",
    sha256 = "0052d452af7742c8f3a4e0929763388a66403de363775db7e90adecb2ba4944b",
    url = "https://github.com/bazelbuild/rules_apple/releases/download/0.31.3/rules_apple.0.31.3.tar.gz",
)

