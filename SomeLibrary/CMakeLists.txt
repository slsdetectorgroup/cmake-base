set(SOURCES
    src/Adder.cpp

)

set(PUBLICHEADERS
    include/psi/Adder.h
)



add_library(SomeLibrary SHARED ${SOURCES})

target_include_directories(SomeLibrary PUBLIC
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
    "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>"
)

if (PSI_USE_TESTS)
    add_subdirectory(tests)
endif(PSI_USE_TESTS)


set_target_properties(SomeLibrary PROPERTIES
    ARCHIVE_OUTPUT_NAME SomeLibrary
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
    PUBLIC_HEADER "${PUBLICHEADERS}"
)