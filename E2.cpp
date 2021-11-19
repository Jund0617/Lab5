#include<iostream>
#include<fstream>
#include<string.h>
#include <vector>
using namespace std;

int main()
{
    vector<string> txt;
    string line;
    int size;
    ifstream myfile("example.txt");
    while(getline(myfile,line))
    {
        size=line.length();
        char *str=new char[size];
        strcpy(str, line.c_str());
        char *token=strtok(str," ");
        while (token!=NULL)
        {
            txt.push_back(token);
            token=strtok(NULL," ");
        }
        
    }
    myfile.close();
    for (auto i=txt.begin(); i!=txt.end();++i)
    cout<<*i<<endl;
    return 0;
}