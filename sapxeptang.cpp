#include "iostream"
using namespace std;
void nhapmang(int a[], int &n);
void xuatmang(int a[], int n);
void sapxeptang(int a[], int n);
void main()
{
	int a[100], n;
	nhapmang(a, n);
	xuatmang(a, n);
	sapxeptang(a, n);
	//xuatmang(a, n);


}
void nhapmang(int a[], int &n)
{
	cout << "\nNhap so luong phan tu mang:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu thu a[" << i << "] :";
		cin >> a[i];
	}

}
void xuatmang(int a[], int n)
{
	cout << "\nCac phan tu cau mang la:" << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
}
void sapxeptang(int a[], int n)
{
	int t, i, j;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j<n; j++)
			if (a[i] > a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
	cout << "\nDay tang dan la: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
}
