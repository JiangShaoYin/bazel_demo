load("@rules_cc//cc:defs.bzl", "cc_binary")


cc_library(
    name = "concate",
    srcs = [
        "pass_name.h",
        "private.h"
    ],
    hdrs = ["pass_name.h"], # 暴露给外部的 头文件
    include_prefix = "test/", # 外部库调用 concate 时，想加上 test/ 前缀去访问其头文件，配置这个选项

    deps = [
        "//stage2/main:hello-greet",
    ],
)

cc_binary(
    name = "shone_demo",
    srcs = ["jiang.cc"],
    deps = [
        ":concate"
    ],
)
