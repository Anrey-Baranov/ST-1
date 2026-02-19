include_directories(${${PROJECT_NAME}_SOURCE_DIR}/include)
set(header ${${PROJECT_NAME}_SOURCE_DIR}/include)
set(src ${${PROJECT_NAME}_SOURCE_DIR}/src/alg.cpp)

message(PROJECT_SOURCE_DIR="${src}")

add_library(${PROJECT_NAME} STATIC ${src})

target_include_directories(${PROJECT_NAME} PRIVATE ${header})

add_executable(${PROJECT_NAME}.info main.cpp)
target_link_libraries(${PROJECT_NAME}.info ${PROJECT_NAME})

if(WIN32)
    set_target_properties(${PROJECT_NAME} PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/src"
        LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/src"
        ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/src"
    )
    set_target_properties(${PROJECT_NAME}.info PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/src"
    )
endif()