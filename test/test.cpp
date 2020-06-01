#include "node.h"

#include "gtest/gtest.h"

template<class> class TD;

using namespace std;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpragmas"
#pragma GCC diagnostic ignored "-Wweak-vtables"

class NodeTest: public testing::Test
{

};

#pragma GCC diagnostic pop


//=======================================================================================
TEST_F( NodeTest, sort )
{

}
//=======================================================================================


//=======================================================================================
int main( int argc, char *argv[] )
{
    ::testing::InitGoogleTest( &argc, argv );
    
    return RUN_ALL_TESTS();
}
//=======================================================================================
