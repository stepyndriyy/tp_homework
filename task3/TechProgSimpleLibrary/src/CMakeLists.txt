add_library(buffer SHARED buffer.cpp)
install(TARGETS BUFFER DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)
