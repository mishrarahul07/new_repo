#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin("File1.txt");
	char ch;
	fin.get(ch);
	while(!fin.eof())
	{
		cout<<ch;
		fin.get(ch);
		
	}
	fin.close();
	return 0;
}
