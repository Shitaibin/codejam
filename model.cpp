#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <map>
#include <algorithm>
#include <fstream>
#include <sstream>

using namespace std;

int imin(int a, int b) {
	return a < b ? a : b;
}

int imax(int a, int b) {
	return a <  b ? b : a;
}

int main()
{
	ifstream fin;
	ofstream fout;
	
	string inname, outname;
	cin >> inname;
	int iend = inname.rfind(".");
	outname = inname.substr(0, iend) + ".out";

	fin.open(inname);
	fout.open(outname);
	cin.rdbuf(fin.rdbuf());
	cout.rdbuf(fout.rdbuf());

	/////////////////////////////  main function  ////////////////////////////



	////////////////////////////  end of main function  //////////////////////
	

	return 0;
}
