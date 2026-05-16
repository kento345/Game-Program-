#pragma once
#include<iostream>
using namespace std;

void Task5() {
	char a[27];
	for (int i = 0; i < 26;i++) {
		a[i] = 97 + i;
	}
	a[26] = '\0';
	cout << a << endl;
}