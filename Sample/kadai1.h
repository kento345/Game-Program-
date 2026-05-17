#pragma once
#include<iostream>

using namespace std;

/*
* auto: 自動で型を推論する
* &: 参照を表す
*/

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
	//for文でagesの中身をpに一つずつ渡す
	for (auto& p : ages) {
		arge(p);
	}
};


