#========================================================================================

cmake_minimum_required( VERSION 3.2 )

project( test_bucket-comb-sort )

#========================================================================================

if ( NOT  GTEST_INCLUDED )

    set ( GTEST_INCLUDED TRUE )

    message( "=== About to find gtest library... ===" )

    find_library( GTEST_LIBRARY NAMES libgtest.a PATHS ${EXT_LIBS_PATH} )
    unset( GTEST_LIBRARY )

    message( "=== gtest library added ===" )

endif() #GTEST_INCLUDED

add_executable( ${PROJECT_NAME} "test.cpp" )

target_link_libraries( ${PROJECT_NAME} -lgtest )

#========================================================================================
