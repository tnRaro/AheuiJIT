
SET(ASMJIT_STATIC ON CACHE BOOL "" FORCE)
add_subdirectory(asmjit EXCLUDE_FROM_ALL)
add_subdirectory(fmt EXCLUDE_FROM_ALL)

option(CAPSTONE_BUILD_SHARED "Build shared library" OFF)
option(CAPSTONE_BUILD_TESTS "Build tests" OFF)
option(CAPSTONE_BUILD_CSTOOL "Build cstool" OFF)
option(CAPSTONE_ARCHITECTURE_DEFAULT "Whether architectures are enabled by default" OFF)
option(CAPSTONE_X86_SUPPORT "x86 support" ON)
add_subdirectory(capstone EXCLUDE_FROM_ALL)
set(capstone_INCLUDE_DIRS "${CMAKE_CURRENT_SOURCE_DIR}/capstone/include" PARENT_SCOPE)