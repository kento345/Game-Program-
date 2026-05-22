#pragma once
#include<iostream>
using namespace std;

void Task5() {
	char a[27];
	int i = 0;
	for (auto& p : a) {
		p = 97 + i;
		i++;
		if(i == 27) {
			p = '\0';
		}
		cout << p;
	}

	//for (int i = 0; i < 26;i++) {
	//	a[i] = 97 + i;
	//}
	//a[26] = '\0';
	//cout << a << endl;
}