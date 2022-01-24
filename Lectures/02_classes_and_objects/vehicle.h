
#pragma once

#include "iostream"

class Vehicle
{
    std::string name; // just using std:: cause i don't wanna import all of std just for a .h file
    std::string type;
    int kms;

public:

    // basic constructor to set private variables 
    Vehicle(std::string name, std::string type, int kms)
    {
        // this-> to ensure the compiler can tell variables appart
        this->name = name;
        this->type = type;
        this->kms = kms;
    }

    // sample function
    void carDetails()
    {
        std::cout << "Name: " << this->name << std::endl;
        std::cout << "Type: " << this->type << std::endl;
        std::cout << "KMS:  " << this->kms << std::endl;
    }

    // sample function
    void drive()
    {
        std::cout << "vrrrrrrrrrrrrrrrrrrrr" << std::endl;
    }

    // get / set functions 
    
    std::string getName()
    {
        return this->name;
    }

    void setName(std::string newName)
    {
        this->name = newName;
    }

    std::string getType()
    {
        return this->type;
    }

    void setType(std::string newType)
    {
        this->type = newType;
    }

    int getKMS()
    {
        return this->kms;
    }

    void setKMS(int newKMS)
    {
        this->kms = newKMS;
    }
};
