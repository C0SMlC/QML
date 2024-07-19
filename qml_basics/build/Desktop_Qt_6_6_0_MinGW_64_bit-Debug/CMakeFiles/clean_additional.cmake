# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appqml_basics_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appqml_basics_autogen.dir\\ParseCache.txt"
  "appqml_basics_autogen"
  )
endif()
