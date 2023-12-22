option(USE_MYMATH "Use custom math implementation" ON)

add_library(PRMath mathfunc.cpp)

if (USE_MYMATH)
    target_compile_definitions(PRMath PRIVATE "USE_MYMATH")
endif()