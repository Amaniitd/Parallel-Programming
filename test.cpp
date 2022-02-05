#include <bits/stdc++.h>
using namespace std;


int main(){
	string s;
	cin >> s;
	int l = s.length();
	bool Flag = true;
	for (int i = 0; i < l/2; i++){
		if (s[i] != s[l - 1 - i]){
			Flag = false;
			break;
		}
	}
	if (Flag){
		cout << "String is palendrome" << endl;
	}else{
		cout <<"String is not a palendrome" << endl;
	}
}