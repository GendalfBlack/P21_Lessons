#include <iostream>
using namespace std;

// заповнити масив 10х10 числами у формі спіалі

void fillSpirale(int** arr, int a, int i, int j, int d, int ws, int hs, int wf, int hf, int b);
void fillSpirale(int** arr, int w, int h, int a);

void fillSpirale(int** arr, int w, int h, int a) {
	int b = a + w * h - 1;
	fillSpirale(arr, a, 0,0, 0, -1,-1,w, h, b);
}

void fillSpirale(int** arr, int a, int i, int j, int d, int ws, int hs, int wf, int hf,int b) {
	
	if (j == wf) { d = 1; j--; i++; hs++; }
	if (i == hf) { d = 2; i--; j--; wf--; }
	if (j == ws) { d = 3; j++; i--; hf--; }
	if (i == hs) { d = 0; i++; j++; ws++; }

	arr[i][j] = a; a++;
	switch (d)
	{
	case 0:	j++; break;
	case 1:	i++; break;
	case 2:	j--; break;
	case 3:	i--; break;
	default: break;
	}
	if (a <=b){ fillSpirale(arr, a, i, j, d, ws,hs,wf,hf, b); }
}
int main()
{
	int w = 30;
	int h = 30;

    int** arr = new int*[h];
	for (int i = 0; i < h; i++) {arr[i] = new int[w]; for (int j = 0; j < w; j++){arr[i][j] = 0;}}

    fillSpirale(arr, w,h, 1);
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		cout << '\n';
	}
}