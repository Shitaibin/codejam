#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <fstream>

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

	int N, C, l;
	cin >> N;
	for (int x = 1; x <= N; ++x){
		cin >> C >> l;
		vector<int> ivec;
		map<int, int> imap;
		int p;
		for (int i = 0; i < l; ++i) {
			cin >> p;
			ivec.push_back(p);
			//imap[p] = i+1;
		}
		
		vector<int> jvec(ivec);

		// sort
		sort(ivec.begin(), ivec.end());

		// bs
		int k1, k2;
		for (int i=0, j=l-1; i<j; ) {
			int sum = ivec[i] + ivec[j];
			if (sum  < C) {
				++i;
			} else if (sum == C) {
				k1 = ivec[i];
				k2 = ivec[j];
				break;
			} else {
				--j;
			}
		}
 
		// indexs
		int p1, p2;
		for (int i=0; i<l; ++i) {
			if(jvec[i] == k1) {
				p1 =  i+1;
				break;
			}
		}
		for (int i=l-1; i >=0; --i) {
			if(jvec[i] == k2) {
				p2 =  i+1;
				break;
			}
		}
		
		cout << "Case #" << x << ":";
		cout << " " << imin(p1, p2) << " " << imax(p1, p2) << endl;
	}
				
	return 0;
}
