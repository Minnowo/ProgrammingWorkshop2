
// You are required to write a C++ program that would serve as a Bit Stuffing which is a mechanism of 
// inserting one or more non-information bits into a message to be transmitted, to break up the message 
// sequence, for synchronization purpose in computer networking.
// You are provided a text file (bits.txt) with this lab which contains the Packet number and sequence of 
// bits for each packet. Ask User to provide a sequence of 0’s and 1’s, e.g., 1100 and search for it in the 

// file. You are required to perform the following tasks:
// - Read the text file line by line
// - Create a Bits class with at least followings:
//   - Private data members:
//     - string sequence
//     - string packet
// 
//   - Corresponding Getters and Setters along with a Default Constructor
//   - A void toString() method that would simply cout sequence : packet
//   - A bool isEmpty() method that checks to see if any value of sequence or packet is empty 
//     and returns true if any of them is empty else returns false. This is an optional method 
//     and you are free to ignore it but can be helpful in not displaying the null values.  
// 
// - Create a Bits getBitsObject(string word, string user_sequence) method that creates a Bits object for 
//   the above class by searching whether a word read from a file contains the user entered bit 
//   sequence or not. If it does, it should set the sequence and packet for that particular object 
//   using setter methods and returns the object.
// 
// - Every time a sequence entered by the user is found in the read file, you are required to create 
//   an array of Bits object in the heap. It means that you are constantly increasing the size of the 
//   array in the heap on each found of the sequence. For this purpose, use a method that can 
//   resize the array in the heap that would return a Bits object pointer by taking in as a parameter, 
//   a Bits object pointer and address of size variable from the main method. The definition of this 
//   function should be Bits* resize(Bits* arr, int* size). Make sure to delete any space occupied 
//   programmatically when it’s not required. You are free to google for “C++ resize dynamic 
//   array”. 
// 
// - Finally create a void display(Bits *arr, int size)  function to display the report shown below in the 
//   expected output.
// 
// - You can only use #include<iostream>, #include<fstream>, #include<string> libraries.