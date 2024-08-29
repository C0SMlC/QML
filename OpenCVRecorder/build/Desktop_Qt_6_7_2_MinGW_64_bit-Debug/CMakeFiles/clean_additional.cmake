# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\OpenCVRecorder_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\OpenCVRecorder_autogen.dir\\ParseCache.txt"
  "OpenCVRecorder_autogen"
  )
endif()
