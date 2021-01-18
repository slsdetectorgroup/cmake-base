
pybind11_add_module(_somepkg 
src/main.cpp 
)

target_link_libraries(_somepkg PUBLIC 
                  SomeLibrary
)  



set_target_properties(_somepkg PROPERTIES
                    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
                )

#Copy Python code 
set( PYTHON_FILES
__init__.py
add.py
)

foreach(FILE ${PYTHON_FILES})
configure_file( somepkg/${FILE}  
${CMAKE_BINARY_DIR}/bin/somepkg/${FILE}  )

endforeach(FILE ${PYTHON_FILES})


# configure_file( scripts/basic.py  
# ${CMAKE_BINARY_DIR}/basic.py 
# )
# configure_file( scripts/test_virtual.py  
# ${CMAKE_BINARY_DIR}/test_virtual.py 
# )