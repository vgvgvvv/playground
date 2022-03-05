cmake_minimum_required(VERSION 3.17)


message(STATUS "fetch re-make library")
include(FetchContent)
FetchContent_Declare(
  re-cmake
  GIT_REPOSITORY https://github.com/vgvgvvv/re-cmake
  GIT_TAG        "test-1.2"
)
FetchContent_MakeAvailable(re-cmake)

message(STATUS "re-cmake_SOURCE_DIR ${re-cmake_SOURCE_DIR}")
list(APPEND CMAKE_MODULE_PATH "${re-cmake_SOURCE_DIR}")
include(Init)

message(STATUS "project init git submodules")
ReMake_InitGit()
ReMake_UpdateSubModule(${CMAKE_CURRENT_SOURCE_DIR})

ReMake_SetToolChainFile("${CMAKE_CURRENT_SOURCE_DIR}/external/vendor/vcpkg/scripts/buildsystems/vcpkg.cmake")

project(playground)

ReMake_InitProject()

ReMake_AddSubDirsRec(external)
ReMake_AddSubDirsRec(src)

