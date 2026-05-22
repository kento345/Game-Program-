#pragma once
#include<iostream>
using namespace std;

void A(int a) {
	cout << a <<",";
}

void Task3() {
	int a[3][4] = {};
	int i = 0;
	for(auto& p : a) {
		p[i] = i;
		for (auto& x : p) {
			x = i + 1;
			i++;
			A(x);
		}
		cout << endl;
	}

	/*for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			a[y][x] = x, y;
			A(a[y][x]);
		}
		cout << endl;
	}*/
}



