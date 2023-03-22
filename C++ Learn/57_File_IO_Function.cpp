#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream istream;
    istream.open("57_Sample_File_1.txt");

    string str1;

    while(istream.eof() == 0){
        getline(istream, str1);
        cout<<str1<<endl;
    }

    istream.close();


    ofstream ostream;
    ostream.open("57_Sample_File_2.txt");
    
    string str2;

    cout<<"Enter your Name : ";
    cin>>str2;

    ostream<<str2<<endl;
    ostream<<"I am Vengeance \n";
    ostream<<"I am Darkness\n";
    ostream<<"I am the Witcher";

    ostream.close();
    
    return 0;
}


// open() ------> Helps to open File
// eof() -------> Helps to check has file ended or not {eof = end of file}
// close() ----->Helps to close the stream