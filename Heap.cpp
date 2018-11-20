#pragma once
#include "Heap.h"

MinHeap::MinHeap(int myMaxSize){
    maxSize = myMaxSize;
    size = 0;
    data = new HeapData[maxSize];
}

void MinHeap::FindMin(){
    std::cout << "FirstName: " << data[0].getFirstName() << std::endl;
    std::cout << "LastName: " << data[0].getLastName() << std::endl;
    std::cout << "ID: " << data[0].getIDNumber() << std::endl;     
}

void MinHeap::Insert(HeapData myData){

}

void MinHeap::DeleteMin(){

}