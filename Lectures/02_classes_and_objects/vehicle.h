
#pragma once

#include "iostream"

class Vehicle
{
    std::string name;
    std::string type;
    int kms;

public:
    Vehicle()
    {
        this->name = "";
        this->type = "";
        this->kms = NULL;
    }

    Vehicle(std::string name, std::string type, int kms)
    {
        this->name = name;
        this->type = type;
        this->kms = kms;
    }

    void carDetails()
    {
        std::cout << "Name: " << this->name << std::endl;
        std::cout << "Type: " << this->type << std::endl;
        std::cout << "KMS:  " << this->kms << std::endl;
    }

    void drive()
    {
        std::cout << "vrrrrrrrrrrrrrrrrrrrr" << std::endl;
    }

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
