cmake_minimum_required(VERSION 3.0)

project(Algorithm)


if(MSVC)
  set(variables CMAKE_CXX_FLAGS_DEBUG 
                CMAKE_CXX_FLAGS_RELEASE
                CMAKE_CXX_FLAGS_RELWITHDEBINFO 
                CMAKE_CXX_FLAGS_MINSIZEREL)
  foreach(variable ${variables})
    if(${variable} MATCHES "/MD")
      string(REGEX REPLACE "/MD" "/MT" ${variable} "${${variable}}")
    endif()
  endforeach()
endif()

add_subdirectory(./Algorithm)

set(IncludeDir ${SortIncludeDir})


# test
add_subdirectory(./)
enable_testing()
add_subdirectory()

