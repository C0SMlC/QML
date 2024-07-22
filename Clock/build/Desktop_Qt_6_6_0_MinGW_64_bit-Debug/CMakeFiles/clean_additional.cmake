# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appClock_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appClock_autogen.dir\\ParseCache.txt"
  "appClock_autogen"
  )
endif()
