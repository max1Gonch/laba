#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

struct River
{
	string name;
	string position;
	string lenght;
	string deep;
};

void Sinput(River *a, int n);

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	cout << "\t\t���������.����";
	cout << "\n������� ���-�� ���: ";
	cin >> n;
	River *source = new River[n];
	for (int i = 0; i < n; i++)
	{
		Sinput(source, i);
	}
	for (int i = 0; i < n; i++)
	{
		cout << source[i].name << endl;
	}


	system("PAUSE>>VOID");

	return 0;
}

void Sinput(River *a, int n) {
	system("cls");

	cout << "\n������� �������� ����: ";
	cin >> a[n].name;
	cout << "\n������� �����������������: ";
	cin >> a[n].position;
	cout << "\n������� ����� ����: ";
	cin >> a[n].lenght;
	cout << "\n������� ������� ����: ";
	cin >> a[n].deep;

}