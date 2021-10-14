#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("File1.txt");
	string c;
	while(!fin.eof())
	{
		getline(fin,c);
		cout<<c<<endl;
	}
	fin.close();
	return 0;
}
