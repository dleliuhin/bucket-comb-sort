#========================================================================================

project( bucket-comb-sort )

#========================================================================================

cmake_minimum_required( VERSION 3.2 )

SET (CMAKE_LIBRARY_OUTPUT_DIRECTORY
        ${PROJECT_BINARY_DIR}/bin
        CACHE PATH
        "Single Directory for all"
    )

SET (CMAKE_RUNTIME_OUTPUT_DIRECTORY
        ${PROJECT_BINARY_DIR}/bin
        CACHE PATH
        "Single Directory for all"
    )

SET (CMAKE_ARCHIVE_OUTPUT_DIRECTORY
        ${PROJECT_BINARY_DIR}/lib
        CACHE PATH
        "Single Directory for all"
    )

#========================================================================================

set( CMAKE_BUILD_TYPE "Debug" )

set( CMAKE_CXX_STANDARD 11 )
set( CMAKE_CXX_COMPILER "/usr/bin/g++-8" )
#set( CMAKE_CXX_EXTENSIONS OFF )
set( CMAKE_CXX_STANDARD_REQUIRED ON )
#set( CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS}" )
#set( CMAKE_CXX_FLAGS "-pthread -fPIC" )

#========================================================================================

find_package( OpenMP )
if ( OPENMP_FOUND )
    set ( CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}" )
    set ( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}" )
    set ( CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${OpenMP_EXE_LINKER_FLAGS}" )
endif()

find_package( MPI REQUIRED )
set( CMAKE_CXX_COMPILE_FLAGS ${CMAKE_CXX_COMPILE_FLAGS} ${MPI_COMPILE_FLAGS} )
set( CMAKE_CXX_LINK_FLAGS ${CMAKE_CXX_LINK_FLAGS} ${MPI_LINK_FLAGS} )
include_directories( ${MPI_INCLUDE_PATH} )

#========================================================================================

include_directories( ${CMAKE_SOURCE_DIR} )

include( ${CMAKE_CURRENT_SOURCE_DIR}/src/src.cmake )

add_executable(
    ${PROJECT_NAME}
    ${SRC}
    "main.cpp" )

target_link_libraries( ${PROJECT_NAME} ${MPI_LIBRARIES} )

#========================================================================================

unset ( QT_QMAKE_EXECUTABLE )

#========================================================================================
