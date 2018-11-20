#pragma once
#include"HeapData.cpp"

class MinHeap{
    private:
        HeapData* data;
        int maxSize;
        int size;
    public:
        MinHeap(int maxSize);
        void Insert(HeapData);
        void FindMin();
        void DeleteMin();
};