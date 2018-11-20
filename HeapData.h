#pragma once
#include<iostream>
#include <string>

class HeapData{
    private:
        std::string firstName = "";
        std::string lastName = "";
        int IDNumber = NULL;
    public:
        HeapData(std::string,std::string,int);
        HeapData();
        std::string getFirstName();
        std::string getLastName();
        int getIDNumber();
};