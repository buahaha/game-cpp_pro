new_local_repository(
    name = "vulkan-repo",
    path = "/usr/local/include/vulkan",
    build_file = "third_party/vulkan.BUILD",
)
new_local_repository(
    name = "molten-vk-dylib",
    path = "/usr/local/lib/",
    build_file = "third_party/molten-vk-dylib.BUILD",
)

new_local_repository(
  name = "molten-vk-include",
  path = "/usr/local/include/MoltenVK",
  build_file = "third_party/molten-vk-include.BUILD",
)

new_local_repository(
    name = "glfw-include",
    path = "/usr/local/include/GLFW/",
    build_file = "third_party/glfw-include.BUILD",
)

new_local_repository(
    name = "local-include",
    path = "/usr/local/include/",
    build_file = "third_party/include.BUILD",
)

new_local_repository(
    name = "local-lib",
    path = "/usr/local/lib/",
    build_file = "third_party/lib.BUILD",
)

new_local_repository(
    name = "glfw-lib",
    path = "/usr/local/lib/",
    build_file = "third_party/glfw-lib.BUILD",
)

new_local_repository(
  name = "python-h",
  path = "/usr/local/anaconda3//include/python3.8/",
  build_file = "third_party/python3.BUILD"
)

new_local_repository(
  name = "node-include",
  path = "/usr/local/Cellar/node/16.6.2/include/node/",
  build_file = "third_party/nodeJS.BUILD"
)

new_local_repository(
  name = "dev-usr-lib",
  path = "/Library/Developer/CommandLineTools/SDKs/MacOSX11.3.sdk/usr/lib/",
  build_file = "third_party/dev-lib.BUILD",
)

new_local_repository(
  name = "dev-usr-include",
  path = "/Library/Developer/CommandLineTools/SDKs/MacOSX11.3.sdk/usr/include/",
  build_file = "third_party/dev-include.BUILD",
)

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
  name = "com_google_googletest",
  urls = ["https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip"],
  strip_prefix = "googletest-609281088cfefc76f9d0ce82e1ff6c30cc3591e5",
)

http_archive(
  name = "rules_cc",
  urls = ["https://github.com/bazelbuild/rules_cc/archive/40548a2974f1aea06215272d9c2b47a14a24e556.zip"],
  strip_prefix = "rules_cc-40548a2974f1aea06215272d9c2b47a14a24e556",
)

# load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")
# git_repository(
#     name = "com_google_googletest",
#     remote = "https://github.com/google/googletest/",
#     branch = "master",
#     visibility = ["//visibility:public"],
# )


# load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
# http_archive(
#   name = "rules_cc",
#   urls = ["https://github.com/bazelbuild/rules_cc/archive/40548a2974f1aea06215272d9c2b47a14a24e556.zip"],
#   strip_prefix = "rules_cc-40548a2974f1aea06215272d9c2b47a14a24e556",
# )

# load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")


# http_archive(
#     name = "build_bazel_rules_apple",
#     sha256 = "0052d452af7742c8f3a4e0929763388a66403de363775db7e90adecb2ba4944b",
#     url = "https://github.com/bazelbuild/rules_apple/releases/download/0.31.3/rules_apple.0.31.3.tar.gz",
# )

# load(
#     "@build_bazel_rules_apple//apple:repositories.bzl",
#     "apple_rules_dependencies",
# )

# apple_rules_dependencies()

# load(
#     "@build_bazel_rules_swift//swift:repositories.bzl",
#     "swift_rules_dependencies",
# )

# swift_rules_dependencies()

# load(
#     "@build_bazel_rules_swift//swift:extras.bzl",
#     "swift_rules_extra_dependencies",
# )

# swift_rules_extra_dependencies()

# load(
#     "@build_bazel_apple_support//lib:repositories.bzl",
#     "apple_support_dependencies",
# )

# apple_support_dependencies()

# glfw, glm, png, zlib, ogg, vorbis, portaudio, freetype, bzip
# mat4 :: glm [1][1] = vlukan -1