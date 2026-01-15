option(ZSTD_BUILD_PROGRAMS "BUILD PROGRAMS" OFF)
option(ZSTD_BUILD_SHARED "BUILD SHARED LIBRARIES" OFF)
option(ZSTD_BUILD_STATIC "BUILD STATIC LIBRARIES" ON)
option(ZSTD_BUILD_TESTS "BUILD TESTS" OFF)

add_subdirectory(zstd/build/cmake EXCLUDE_FROM_ALL) #typo fixed
add_library(3rdparty_zstd INTERFACE)
target_link_libraries(3rdparty_zstd INTERFACE libzstd_static)
