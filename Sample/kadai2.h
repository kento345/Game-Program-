#pragma once
#include<iostream>
using namespace std;



void Max() {

	int a[5] = {
	10,
	15,
	25,
	30,
	20,
	};
	int x = 0;
	//for•¶‚Åa‚Ì’†g‚ğp‚Éˆê‚Â‚¸‚Â“n‚·
	//‚˜‚æ‚è‘å‚«‚¢ê‡‚˜‚É‘ã“ü
	for (auto& p : a) {
		if (x < p) {
			x = p;
		}
	}
	cout << x << endl;
}
