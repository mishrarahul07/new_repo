#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("File1.txt");
	char ch[10];
	//fin>>ch;
	while(!fin.eof())
	{
	   	fin>>ch;
	   	cout<<ch<<" ";
		
	}
	fin.close();
	return 0;
}
