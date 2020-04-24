# Meson Build Example, with DocTest and wxWidgets

C++ project example to test modern, high-performance build techniques, utilizing the [Meson](https://mesonbuild.com/) build engine and the [Ninja](https://ninja-build.org/) build system under the hood.

This demo includes compilation with external library dependencies ([wxWidgets](https://www.wxwidgets.org/)) and unit testing.

The provided application is a basic C++/wxWidgets GUI Hello World example, loosely based on the [official wxWidgets Hello World Example](https://docs.wxwidgets.org/stable/overview_helloworld.html) with an external greeting generator.

The unit tests utilize [DocTest](https://github.com/onqtam/doctest) (a speed-oriented test framework originally based on [Catch](https://github.com/catchorg/Catch2)) to test the greeting generator in both standard and BDD style.


## Requires

* [Meson](https://mesonbuild.com/)
* [Ninja](https://ninja-build.org/)
* [Python3](https://www.python.org/)
* [DocTest](https://github.com/onqtam/doctest)
* [GCC](https://gcc.gnu.org/) / [Clang](https://clang.llvm.org/)
* [wxWidgets](https://www.wxwidgets.org/)


## Build And Run

From the project directory:
```
$ meson build
$ cd build
$ ninja
$ ninja test
$ src/helloworld
```

## License

MIT License - Copyright (c) 2020 Michael Spencer