#include <iostream>
#include <list>
#include <vector>

using namespace std;
struct mmm {
	char aa, bb;
	mmm(char a, char b):aa(a),bb(b) {}
};
int check(string a, string b) {
	if (a.length() != b.length())return 0;
	vector <mmm> temp;
	int flag = 0;
	for (int i = 0; i < a.length(); i++) {
		flag = 0;
		for (int j = 0; j < temp.size(); j++) {
			if ((temp[j].aa == a[i] && temp[j].bb != b[i]) || (temp[j].aa != a[i] && temp[j].bb == b[i])) { return 0; }
			else if (temp[j].aa == a[i] && temp[j].bb == b[i])flag = 1;
	}
		if (flag == 0) { temp.push_back(mmm(a[i], b[i])); flag = 1; }
}
	return 1;
}
int main() {
	string a="abcdefghijkl";
	string b="fghij1234577";
	cout<<check(a, b);
}

