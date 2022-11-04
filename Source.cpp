#include <iostream>

using namespace std;
int USCLN(int a, int b){
	a = abs(a);
	b = abs(b);
	while(a!=b)
	if (a>b)
	a=a-b
	else
	b=b-a;
	return 0;
}

void Hello()
{
	cout << "Hello";
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	
	int a,b;
	
	cout<<"Nhap gia tri a: ";
	cin>>a;
	cout<<"Nhap gia tri b: ";
	cin>>b;
	
	cout << "USCLN: " << USCLN(a, b);

	Hello();

	system("pause");
	return 0;
}