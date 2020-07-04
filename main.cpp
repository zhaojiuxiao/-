#pragma comment(linker, "/STACK:102400000,102400000")
#include<iostream>
#include"xibao.h"
#include"ditu.h"
#include<ctime>


using namespace std;

void Delay(int time)//time*1000为秒数 
{
	clock_t   now = clock();

	while (clock() - now < time);
}




int main()
{
	xibao a[102][102];
	ditu b;
	int n;
	cout << "请输入循环次数：";
	cin >> n;
	
	
	for (int i = 1; i <= 101; i++) {
		for (int j = 1; j <= 100; j++) {
			a[i][j].fzzb(i, j);
		}
	}

	a[20][20].fzzt(1);
	a[20][21].fzzt(1);
	a[21][20].fzzt(1);
	a[21][21].fzzt(1);
	a[25][21].fzzt(1);
	a[26][20].fzzt(1);
	a[26][22].fzzt(1);
	a[27][19].fzzt(1);
	a[27][23].fzzt(1);
	a[28][20].fzzt(1);
	a[28][21].fzzt(1);
	a[28][22].fzzt(1);
	a[29][19].fzzt(1);
	a[29][18].fzzt(1);
	a[29][23].fzzt(1);
	a[29][24].fzzt(1);
	a[40][20].fzzt(1);
	a[40][21].fzzt(1);
	a[41][20].fzzt(1);
	a[41][21].fzzt(1);

	b.shengcheng();

	for (int x = 1; x <= n; x++) {

		for (int i = 1; i <= 100; i++) {
			for (int j = 1; j <= 100; j++) {
				a[i][j].put();
				b.tianchong(i, j);
				a[i][j].ljzt(a, i, j);
			}
		}

		for (int i = 1; i <= 101; i++) {
			for (int j = 1; j <= 100; j++) {
				a[i][j].gbzt();
			}
		}
		
		Delay(0.1 * 1000);   //延时5秒 
	}

	return 0;

}