

## What is this
Some somewhat unique ideas/opinions about how array apis for applied math 
should be done so you can focus on your math, now in C++

# 

# where is this from?
this is a port of ideas I first modeled out in my "numerical haskell" project


# why this build system?
... have you seen any good options for C++ build systems?

## how do i build it
install meson the build tool (and make sure the required deps are visible to 
your environments pkg-config tool)
```shell
> mkdir builds
> meson setup builds 
> cd builds 
> meson compile
> meson test
# optional meson install 
```


# who wrote this
Carter Schonwald!