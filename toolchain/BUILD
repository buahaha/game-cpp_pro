package(default_visibility = ["//visibility:public"])

cc_toolchain_suite(
    name = "clang_suite",
    toolchains = {
        "empty": ":darwin_x86_64_toolchain",
        "darwin_x86_64": ":darwin_x86_64_toolchain",
        "darwin": ":darwin_x86_64_toolchain",
        # "k8": ":darwin_x86_64_toolchain",
        # "k8": ":k8_toolchain",
    },
)

cc_toolchain(
    name = "darwin_x86_64_toolchain",
    toolchain_identifier = "darwin_x86_64-toolchain",
    toolchain_config = ":darwin_x86_64_toolchain_config",
    all_files = ":empty",
    compiler_files = ":empty",
    dwp_files = ":empty",
    linker_files = ":empty",
    objcopy_files = ":empty",
    strip_files = ":empty",
    supports_param_files = 0,
)

load(":cc_toolchain_config.bzl", "cc_toolchain_config")

cc_toolchain_config(name = "darwin_x86_64_toolchain_config")