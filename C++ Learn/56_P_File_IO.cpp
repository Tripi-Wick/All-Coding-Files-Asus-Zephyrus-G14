#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //// For Writing in a file

    // Connecting our program to file using stream
    ofstream s1("56_P_Sample_File_1.txt");

    // Creating and a string and filling it by user
    string str1;
    cout<<"Enter your name : ";
    cin>>str1;

    // Entering str1 into file 1 using stream s1
    s1<<"My Name is "+ str1;

    // closing the stream
    s1.close();

    //// For Reading a file

    // Connecting our program to file using stream
    ifstream s2("56_P_Sample_File_2.txt");

    // Creating and a string and importing content of file in it
    string str2;
    // s2>>str2;
    getline(s2, str2);

    // Displaying the imported content
    cout<<str2;

    // closing the stream
    s2.close();

    return 0;
}
