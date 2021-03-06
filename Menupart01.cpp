﻿//Khởi tạo mảng ngẫu nhiên
// Xuất mảng đó ra màn hình
//Tìm phần tử lớn nhất, nhỏ nhất của mảng
//Tìm và in ra phần tử âm  tận cùng bằng 6
#include "iostream"
using namespace std;
void nhapmang(int a[], int &n);
void xuatmang(int a[], int n);
int lookformax(int a[], int n);
int lookformin(int a[], int n);
void ptam(int a[], int n);
void display();
void menu(int a[], int n);
void main()
{
	int a[100], m;
	nhapmang(a, m);
	display();
	menu(a, m);

}
void nhapmang(int a[], int &n)
{
	cout << "\nNhap so luong phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nPhan tu thu a[" << i << "] :";
		cin >> a[i];
	}

}
void xuatmang(int a[], int n)
{
	cout << "\nCac phan tu cua mang: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
}
int lookformax(int a[], int n)
{
	int max = a[0];
	for (int i = 0; i < n; i++)
		if (max < a[i])
			max = a[i];
	return max;
}
int lookformin(int a[], int n)
{
	int min = a[0];
	for (int i = 0; i < n; i++)
		if (min > a[i])
			min = a[i];
	return min;
}
void ptam(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] < 0 && a[i] % 10 == -6)
			cout << a[i] << "\t";
	cout << endl;
}
void display()
{
	cout << "\nMoi cac ban chon chuc nang tu 1 den 5." << endl;
	cout << "\n1. Xuat mang ra mang hinh." << endl;
	cout << "\n2. Tim so lon nhat trong mang." << endl;
	cout << "\n3. Tim so nhat nhat trong mang." << endl;
	cout << "\n4. Tim va in ra phan tu am tan cung bang 6. " << endl;
	cout << "\n0. La ket thuc chuong trinh." << endl;
}
void menu(int a[], int n)
{
	int chon;
	do {
		cout << "\nChon chuc nang";
		cin >> chon;
		switch (chon)
		{
		case 1:
			system("cls");
			xuatmang(a, n);
			display();
			break;
		case 2:
			system("cls");
			cout << "\nSo lon nhat trong mang: " << lookformax(a, n);
			display();
			break;
		case 3:
			system("cls");
			cout << "\nSo nho nhat trong mang: " << lookformin(a, n);
			display();
			break;
		case 4:
			system("cls");
			cout << "\nPhan tu am co tan cung la 6:";
			ptam(a, n);
			display();
			break;
		default:
			break;
		}
	} while (chon != 0);
}
