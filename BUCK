# A list of available rules and their signatures can be found here: https://buck2.build/docs/api/rules/

genrule(
    name = "hello_world",
    out = "out.txt",
    cmd = "echo BUILT BY BUCK2> $OUT",
)


# buildifier: disable=no-effect
# cxx_library(
#     name = "print",
#     srcs = glob(["**/*.cpp"]),
#     exported_headers = glob(["**/*.hpp"]),
#     visibility = ["PUBLIC"],
# ) if not host_info().os.is_windows else None
