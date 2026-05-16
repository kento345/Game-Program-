#pragma once
#include<iostream>

using namespace std;

int ages[4] = {
		15,
		32,
		11,
		48,
};
void arge(int value) {
	cout << value << endl;
}

void entry() {
	for (auto& p : ages) {
		arge(p);
	}
};


