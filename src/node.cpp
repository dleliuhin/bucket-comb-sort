#include "node.h"

#include "mpi.h"

//=======================================================================================
Node::Node()
{
    // Initialize the MPI environment
    MPI_Init( NULL, NULL );

    // Finalize the MPI environment.
    MPI_Finalize();
}
//=======================================================================================
