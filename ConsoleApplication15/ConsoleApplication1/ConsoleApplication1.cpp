#include <iostream>
using namespace std;
// Задача 1
int sum(int a, int b) { return a + b; }
// Задача 2
bool even(int a) { return a % 2 == 0; }
// Задача 3
double F(double c) { return (9.0 / 5) * c + 32; }
// Задача 4
int G(char word[10]) {
	int n = 0;
	for (int i = 0; i < 10 && word[i] != '\0'; i++)
	{
		if (word[i] == 'a' || 
			word[i] == 'e' || 
			word[i] == 'i' || 
			word[i] == 'o' || 
			word[i] == 'y' || 
			word[i] == 'u')
		{
			n++;
		}
	}
	return n;
}
// Задача 5
int Factorial(int a) {
	int f = 1;
	for (int i = 2; i <= a; i++){f *= i;}
	return f;
}
// Задача 6
int Fibbonachi(int n) {
	int prev = 0; if (n == 1) { return prev; }
	int curr = 1; 
	for (int i = 0; i < n - 2; i++)
	{
		int next = prev + curr;
		prev = curr;
		curr = next;
	}
	return curr;
}
// Задача 7
void mnozhnyky(int n) {
	for (int i = 2; i <= n; i++)
	{
		bool prime = true;
		for (int j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				prime = false;
				break;
			}
		}
		if (n%i == 0 && prime)
		{
			cout << i << ' ';
		}
	}
}
// Задача 8
int search(int arr[10], int a) {
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == a)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	
}
