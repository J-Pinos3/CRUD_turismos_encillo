# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\TouristManager_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TouristManager_autogen.dir\\ParseCache.txt"
  "TouristManager_autogen"
  )
endif()
