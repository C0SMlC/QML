# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appFormComponent_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appFormComponent_autogen.dir\\ParseCache.txt"
  "appFormComponent_autogen"
  )
endif()
