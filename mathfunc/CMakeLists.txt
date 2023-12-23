option(USE_MYMATH "Use custom math implementation" ON)

add_library(PRMath mathfunc.cpp)

if (USE_MYMATH)
    target_compile_definitions(PRMath PRIVATE "USE_MYMATH")
endif()

target_include_directories(PRMath INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(PRMath PUBLIC tutorial_compiler_flags)