#include <iostream>
#include <string>

using namespace std;

int main(){

	string s,bangso = "0123456789";

	getline(cin,s);

	for (int i = 0;i <= bangso.size();i++){
		if (s[0] == bangso[i]){
			cout << 0 << " " << s.size() << "\n";
			return 0;
		}
	}
	cout << 1 << " " << s.size() << "\n";
	return 0;
}
