#pragma once
#include "HeapData.h"

std::string HeapData::getFirstName(){
    return firstName;
}

std::string HeapData::getLastName(){
    return lastName;
}

int HeapData::getIDNumber(){
    return IDNumber;
}

HeapData::HeapData(std::string fName,std::string lName,int ID){
    firstName = fName;
    lastName = lName;
    IDNumber = ID;
}

HeapData::HeapData(){
    firstName = "";
    lastName = "";
    IDNumber = NULL;
}