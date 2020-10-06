cmake_minimum_required(VERSION 3.17)

project(Shape)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(source)
include_directories(source)

add_subdirectory(include)
include_directories(include)

set(CMAKE_CXX_FLAGS "-g -Wall")
 
enable_testing()
add_subdirectory(tests)

include(GoogleTest)
find_package(GTest REQUIRED)

# add_library(libgtest IMPORTED STATIC GLOBAL)
# add_dependencies(libgtest gtest)

# add_library(libgmock IMPORTED STATIC GLOBAL)
# add_dependencies(libgmock gtest)

# include_directories(${GTEST_INCLUDE_DIRS})

# set_target_properties(libgmock PROPERTIES
#     "IMPORTED_LOCATION" "${binary_dir}/googlemock/libgmock.a"
#     "IMPORTED_LINK_INTERFACE_LIBRARIES" "${CMAKE_THREAD_LIBS_INIT}"
# )

# include_directories("${source_dir}/googletest/include"
#                     "${source_dir}/googlemock/include")
