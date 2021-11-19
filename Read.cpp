#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string line;
    ifstream myfile("example.txt");
    if(!myfile)
        return -1;
    while(getline(myfile,line))
    {
        cout<<line<<'\n';
    }
    myfile.close();
    return 0;
}