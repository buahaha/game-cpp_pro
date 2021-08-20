# installed from brew anaconda
cc_library(
   name = "python",
   hdrs = glob(["*"]),
   includes = [
      "."
   ],
  #  include_prefix = "cpython",
  #  strip_include_prefix = "cpython",
   visibility = ["//visibility:public"],
)

cc_library(
  name = "cpython",
  hdrs = [
    "pymem.h",
    "object.h",
    "objimpl.h",
    "unicodeobject.h",
  ],
  include_prefix = "cpython",
  visibility = ["//visibility:public"],
)