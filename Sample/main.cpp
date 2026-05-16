#include<iostream>

using namespace std;

int main() {
	
	/*
	* --------配列----------
	int ages[] = {
		11,
		32,
		11,
		48
	};
	//ポインターで配列の中身を表示(pに配列の中身を入れる）
	for (auto& p:ages) {
		std::cout << p << std::endl;
	}
	*------------------------
	*/

	/*
	* --------多次元配列----------
    int array[3][2] = {
		{1,1},
		{1,1},
		{1,1},
	};
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 2; x++) {
			array[y][x] = 1;
			}
	}
	* ----------------------------
	*/

	/*
	* ---------文字列-------------
	char s = 'a';
	std::cout << s << std::endl;
	//配列で文字数宣言
	//char str[10] = "abcdefgh\0";
	char str[10];
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	//\0: null文字で終点とする
    //null文字がないと勝手に追加される
	str[3] = '\0';
	std::cout << str << std::endl;
	//-------番号で文字入力-------
	char str[10];
	str[0] = 97;
	str[1] = 65;
	str[2] = 0;
	
	printf("%s\n", str);
	//----日本語は2バイトでchar型2つ---
	char str[10] = "あいう";
	cout << str << endl;
	* ----------------------------
	*/

	


	/*
	* ---------配列とメモリ--------
	* バグ
	int count[4];
	int hp = 100;

	for (int i = 0; i <= 4; i++) {
		count[i] = 0;
	}

	if (hp == 0) {

	}
	* -----------------------------
	*/


	return 0;
}