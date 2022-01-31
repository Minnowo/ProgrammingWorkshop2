
#include <iostream>

using namespace std;

// this does not increment the number because it is pass by value
void increment1(int number)
{
    number++;
}

// this updates the number because its passed by a pointer
void increment2(int *number)
{
    (*number)++;
}

class Vehicle
{
private:
    string name;
    string color;
public:

    Vehicle()
    {

    }

    Vehicle(string name, string color)
    {
        this->name = name;
        this->color = color;
    }

    string getName() { return this->name; }
    string getColor() { return this->color; }

    void display() 
    {
        cout << "Vehicle Name: " << this->name << endl;
        cout << "Vehicle Color: " << this->color << endl;
    }
};

int main()
{
    // set variables 
    int i = 0;
    int j = 0;

    // pass i by value
    increment1(i);

    // pass j by referance
    increment2(&j);

    // display result
    cout << "i = " << i << endl;         // 0
    cout << "j = " << j << endl << endl; // 1




    // writing in stack
    int number = 7;
    cout << "Number in stack memory: " << number << endl;


    // writing in heap
    int *ptr1 = new int;    // don't need to call the int constructor 
    int *ptr2 = new int(3); // allocate memory in the heap with value of 3
    *ptr1 = 7;              // set the value to 7
    cout << "Number 1 in heap memory: " << *ptr1 << endl;
    cout << "Number 2 in heap memory: " << *ptr2 << endl;




    // writing in stack
    int numbers1[5] = { 1, 2, 3, 4, 5 }; // compile time constant
    for(int i = 0; i < 5; i++)
    {
        cout << numbers1[i] << ", ";
    }


    // writing in heap

    int input1;
    int input2;
    
    cout << endl << endl << "enter dynamic array size: ";
    cin >> input1;

    cout << endl << "Creating an array of size: " << input1 << endl;

    // create the array in the heap
    int *numbers2 = new int[input1];

    // fill the array (dynamic at runtime)
    for(int i = 0; i < input1; i++)
    {
        cout << "enter a number[" << i << "]: ";
        cin >> input2;

        // set the array at index 'i' = the input (pointer version of array[i])
        *(numbers2 + i) = input2;
    }

    // display the array
    for(int i = 0; i < input1; i++)
    {
        cout << *(numbers2 + i) << ", ";
    }
    cout << endl << endl;




    // stack
    Vehicle car1 = Vehicle("car 1", "blue");
    car1.display();

    // heap
    Vehicle *car2  = new Vehicle("car 2", "red");
    car2->display();
    // (*car2).display(); // same as above just dif notation

    cout << endl << endl;




    // heap again
    int* point = new int(7);
    cout << "ptr: " << *point << endl;
    cout << "address: " << point << endl;

    // the memory address will change
    // allocating new memory, this creates a memory leak
    // point = new int(3); 
    // cout << "ptr: " << *point << endl;
    // cout << "address: " << point << endl;

    // to avoid the memory leak we must delete the old pointer first
    delete point;
    point = new int(3);
    cout << "ptr: " << *point << endl;
    cout << "address: " << point << endl;

    return 0;
}