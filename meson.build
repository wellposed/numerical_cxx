project('numerical_cxx', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'cpp_std=c++20'])

# These arguments are only used to build the shared library
# not the executables that use the library.
lib_args = ['-DBUILDING_NUMERICAL_CXX']

numerical_shlib = shared_library('numerical_cxx', 'numerical_cxx.cpp',
  install : true,
  cpp_args : lib_args,
  gnu_symbol_visibility : 'hidden',
)

gtest_dep =  dependency('gtest')

test_exe = executable('numerical_cxx_test', 'layout_test_main.cpp',
  link_with : numerical_shlib, dependencies : gtest_dep)
test('numerical_cxx', test_exe)

# Make this library usable as a Meson subproject.
numerical_cxx_dep = declare_dependency(
  include_directories: include_directories('.'),
  link_with : numerical_shlib)

# Make this library usable from the system's
# package manager.
# install_headers('numerical_cxx.hpp', subdir : 'numerical_cxx')

pkg_mod = import('pkgconfig')
pkg_mod.generate(
  name : 'numerical_cxx',
  filebase : 'numerical_cxx',
  description : 'Meson sample project.',
  subdirs : 'numerical_cxx',
  libraries : numerical_shlib,
  version : '0.1',
)
