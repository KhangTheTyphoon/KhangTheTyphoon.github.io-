﻿//Tính tổng của mảng
//· Tính trung bình cộng của mảng
//· Tìm kiếm một phần tử x cho trước(x nhập từ bàn phím)
//· Xuất dãy đảo ngược của dãy ban đầu
#include "iostream"
using namespace std;
void nhapmang(int a[], int &n);
void xuatmang(int a[], int n);
int tong(int a[], int n);
float tbcong(int a[], int n);
int lookfor(int a[],int n,int x);
void reverse(int a[], int n);
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
	cin >>n;
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
int tong(int a[], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
		tong += a[i];
	return tong;
}
float tbcong(int a[], int n)
{
	float tbcong = 0;
	tbcong = (float)tong(a, n) / n;
	return tbcong;
}
int lookfor(int a[], int n, int x)
{
	int vt = a[0];
	for (int vt = 0; vt < n; vt++)
		if (a[vt] == x)
			return vt;
	return -1;
}
void reverse(int a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
		cout << a[i] << "\t";
}
void display()
{
	cout << "\nMoi cac ban chon chuc nang tu 1 den 5." << endl;
	cout << "\n1. Xuat mang ra mang hinh."<<endl;
	cout << "\n2. Tong cac so co trong mang." << endl;
	cout << "\n3. Trung binh cong cac so co trong mang." << endl;
	cout << "\n4. Tim vi tri x. " << endl;
	cout << "\n5. Dao nguoc day so ban dau." << endl;
	cout << "\n0. La ket thuc chuong trinh." << endl;
}
void menu(int a[], int n)
{
	int chon, x;
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
			cout << "\nTong cac so trong mang:" << tong(a, n);
			display();
			break;
		case 3:
			system("cls");
			cout << "\nTrung binh cong cua cac so trng mang:" << tbcong(a, n);
			display();
			break;
		case 4:
			system("cls");
			cout << "\nNhap so ban can tim vao:";
			cin >> x;
			if (lookfor(a, n, x) != x)
				cout << "\nVi tri can tim la:" << lookfor(a, n, x);
			else cout << "\nKhong co.";
			xuatmang(a, n);
			display();
			break;
		case 5:
			system("cls");
				cout << "\nDao nguoc day so ban dau.";
				reverse(a, n);
				display();
				break;
		default:
			break;
		}
	} while (chon != 0);
}