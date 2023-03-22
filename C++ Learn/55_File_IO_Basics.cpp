#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string s1;
    string s2 = "This is the Demo of file input and output";

    // Opening files using constructor and reading it 
    ifstream in("55_Sample_File_1.txt");
    in>>s1;
    // cout<<s1;           //----------->THis just gives the first word of sentence
    getline(in, s1);       //----------->By using this we content of file line by line
    // getline(in, s1);         
    cout<<s1;
    in.close();            //----------->Used to close stream created between file and program
    
    // // Opening files using constructor and writing it 
    ofstream out("55_Sample_File_2.txt");
    out<<s2;
    out.close();
    
    return 0;
}


/*
These are some useful classes for working with files in C++

fstreambase
ifstream --> derived from fstreambase       ---->  It Helps in reading the file
ofstream --> derived from fstreambase       ---->  It Helps in writing the file

To open files in c++ there are two ways :
Using the constructor
Using the member function open() and eof() of the class

*/