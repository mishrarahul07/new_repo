#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
	ofstream fout;
	string str;
	fout.open("File1.txt",ios::app);
	cout<<"Enter text to add in file"<<endl;
	getline(cin,str);
	fout<<str;
	fout.close();
	
	return 0;
	
	
}
