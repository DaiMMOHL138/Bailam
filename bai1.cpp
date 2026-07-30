#include <iostream>
#include <string>

using namespace std;

int main(){

	string s,bangso = "0123456789";

	getline(cin,s);

	for (int i = 0;i <= bangso.size();i++){
		if (s[0] == bangso[i]){
			cout << 1 << "\n" << s.size() << "\n";
			return 0;
		}
	}
	cout << 0 << "\n" << s.size() << "\n";
	return 0;
}
