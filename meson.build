# meson.build
#
# Created: 2020.04.23
# Author: Michael Spencer
# License: MIT


project('helloworld', ['cpp'],
  version : '1.0',
  default_options : [
    'warnlevel=3',
    'cpp_std=c++14'
  ]
)

dep = dependency('WxWidgets')

subdir('include')
subdir('src')
subdir('test')
