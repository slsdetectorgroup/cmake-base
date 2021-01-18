include_directories(
    ${PROJECT_SOURCE_DIR}/libs/catch
    include
)

set(PSI_TEST_SOURCES 
    tests.cpp
)


add_executable(tests ${PSI_TEST_SOURCES})
target_link_libraries(tests PRIVATE SomeLibrary)
# target_link_libraries(tests 
#     slsProjectOptions
#     slsProjectWarnings
#     slsSupportShared
#     pthread
#     rt
# )  

# if (SLS_USE_TEXTCLIENT)
#     target_link_libraries(tests
#         slsDetectorShared
#     )
# endif (SLS_USE_TEXTCLIENT)

# if (SLS_USE_RECEIVER)
#     target_link_libraries(tests
#         slsReceiverShared
#     )
# endif (SLS_USE_RECEIVER)


set_target_properties(tests PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
    )

include(CTest)
include(Catch)
catch_discover_tests(tests)
