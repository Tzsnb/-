#include <iostream>
#include <cmath>
#include <windows.h>
#define KEYGET(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0) //获取按键按下用法 KEYGET('键盘上大写字母或者特殊按键')

using namespace std;
struct Speed { 
	int valueLEFT = 3; //每帧数移动的像素
	int valueRIGHT = 3; //每帧数移动的像素
	int valueUP = 3; //每帧数移动的像素
	int valueUPDist = 3; //指的是一共向上移动多少像素每帧
	int valueDown = 3; //每帧数移动的像素
	int valueDownDist = 3; //指的是一共向下移动多少像素每帧

};
struct Gameobjd {
	string OBJname = "none";
	char OBJ_2d[35] = { " player " };

};
void MoveS(Gameobjd a, Speed b){
	int x = 0, y = 0;
	while (1) {
		
		
		if (KEYGET('D')) {
			x = x + 1 * b.valueRIGHT;
			for (int i = 0; i <= x; i++) {
				for (int j = 0; j <= b.valueRIGHT;j++) {
					cout << " ";
				}
			}
			cout<<a.OBJ_2d;
		}else if(KEYGET('A')) {
			x = x - 1 * b.valueLEFT;
			for (int i = 0; i <= x; i++) {
				for (int j = 0; j <= b.valueRIGHT; j++) {
					cout << " ";
				}
			}
			cout << a.OBJ_2d;
		}
		else {
			for (int i = 0; i <= x; i++) {
				for (int j = 0; j <= b.valueRIGHT; j++) {
					cout << " ";
				}
			}
			cout << a.OBJ_2d;
		}
		Sleep(15);//控制帧 防闪
		system("cls");
	}


}
int main() {
	Gameobjd a;
	Speed b;
	MoveS(a, b);
}