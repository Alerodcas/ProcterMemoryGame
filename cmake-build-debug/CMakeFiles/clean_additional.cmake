# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ProcterMemoryGame_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ProcterMemoryGame_autogen.dir\\ParseCache.txt"
  "ProcterMemoryGame_autogen"
  )
endif()
