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
#include <bits/stdc++.h>

//global counter for block #'s
int g = 0;

struct firstFitFreeBlock {
    int blockId;
    int blockSize; // in units of memory, between 3 and 10; a unit of memory is 2KB
    struct firstFitFreeBlock* next;
}* FFFBHead = NULL, *FFFBPreviousBlock = NULL;

void createFFFBlock(int size){
    struct firstFitFreeBlock* block = (struct firstFitFreeBlock*)malloc(sizeof(struct firstFitFreeBlock));
    block -> blockSize = size;
    block -> blockId = g++;
    block->next = NULL;
    if (FFFBHead == NULL){
        FFFBHead = block;
    }
    else{
        FFFBPreviousBlock->next = block;
    }
    FFFBPreviousBlock = block;
}
void printFirstFitFreeBlockList(){
    struct firstFitFreeBlock* block = FFFBHead;
    cout << "Free Block List:";
    while(block != NULL){
        cout << "Block " << block->blockId << ": " << (block->blockSize * 2) << " KB." << endl;
    }
}

struct firstFitAllocatedBlock {
    int blockId;
    int pid;
    int size;
    struct firstFitAllocatedBlock* next;
}* FFABHead = NULL, *FFABPreviousBlock = NULL;


int allocate_mem (int process_id, int num_units){
   //malloc(num_units);
}

/* (2) deallocates the memory allocated to the process whose id is process_id. It returns 1, if successful, otherwise –1. */
int deallocate_mem (int process_id){

}

/* (3) returns the number of holes (fragments of sizes 1 or 2 units). */
int fragment_count( ){

} 

int main(){

}
