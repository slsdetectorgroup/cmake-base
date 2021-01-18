target_sources(tests PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/Adder.test.cpp
)

#can we avoid this? 
target_include_directories(tests PUBLIC "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../src>")