#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <map>
#include <algorithm>
#include <fstream>
#include <sstream>

using namespace std;


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
	int N;
	cin >> N;
	//cin.get(); // ignore the new line char
	cin.ignore(1, '\n');
	for (int x=1; x<=N; ++x) {
		string line;
		getline(cin, line);
		vector<string> list;
		string word;
		stringstream ss(line);
		while (ss >> word) {
			list.push_back(word);
		}
		
		cout << "Case #" << x << ":";
		for (auto it = list.rbegin(); it != list.rend(); ++it) {
			cout << " " << *it;
		}
		cout << endl;
	}


	////////////////////////////  end of main function  //////////////////////
	

	return 0;
}
