#include<iostream>
#include<fstream>
#include<string>
#include <vector>
using namespace std;

int main()
{
    vector<string> txt;
    string line;
    ifstream myfile("example.txt");
    while(getline(myfile,line))
    {
        txt.push_back(line);
    }
    myfile.close();
    for (auto i=txt.begin(); i!=txt.end();++i)
    cout<<*i<<endl;
    return 0;
}