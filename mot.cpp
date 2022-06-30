//Authors: 
//Drew Meade, cssc0828, 822332778
//Dylan James, cssc0821, 823281596
//
//Class: CS480, Summer 2022
//Assignment: Programming Assignment #3, Memory Allocation
//File Name: mot.cpp

using namespace std;
#include <stdio.h>      // C standard I/O library
#include <fstream>      // for I/O using a file
#include <iostream>     // for standard I/O streams
#include <unistd.h>     // for access()
#include <cstring>      // for strtok()
#include <typeinfo>
#include <errno.h> 
#include <sys/types.h>  



// Assume the following:
// Memory is 256 KB and is divided into units of 2 KB each.
// A process may request between 3 and 10 units of memory.

/*Your simulation consists of three components: 
    (1) Memory component that implements a specific allocation/deallocation technique; 
    (2) a request generation component that generates allocation/deallocation requests; and 
    (3) a statistics reporting component that prints out the relevant statistics. */

//The Memory component exports the following functions:
/* (1) allocates num_units units of memory to a process whose id is process_id. 
 If successful, it returns the number of nodes traversed in the linked list. Otherwise, it returns -1. */

int allocate_mem (int process_id, int num_units){
    malloc(num_units);
}

/* (2) deallocates the memory allocated to the process whose id is process_id. It returns 1, if successful, otherwise –1. */
int deallocate_mem (int process_id){

}

/* (3) returns the number of holes (fragments of sizes 1 or 2 units). */
int fragment_count( ){

} 

int main(){

}
