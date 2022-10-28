#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	
	int a,b;
	
	cout<<"Nhap gia tri a: ";
	cin>>a;
	cout<<"Nhap gia tri b: ";
	cin>>b;
	
	int tong=0;
	tong= a+b;
	cout<<"Tong la : "<<tong<<endl;
	
	int hieu=0;
	tong= a-b;
	cout<<"Hieu la : "<<hieu<<endl;
	
	int tich=0;
	tong= a*b;
	cout<<"Tich la : "<<tich<<endl;
asd
	
	int thuong=0;
	tong= a/b;
	cout<<"Thuong la : "<<thuong<<endl;
	
	
	

	system("pause");
	return 0;
}