#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream myfile;
    myfile.open("example.txt");
    if(!myfile)
    cout<<"file not exsit";
    myfile<<"Writing this to a file blabla.\n";
    myfile.close();
    return 0;
}