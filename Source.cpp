#include <iostream>
#include <fstream>   //����������, ����������� �������� � �������� �������� �������� ������ ofstream, ifstream
#include <string>

using namespace std;

bool statistic(string str) {
	ofstream out;
	out.open("stat.txt", ios::app);
	if (out.is_open()) {
		out << str << " " << str.size() << "\n";
		out.close();
		return true;
	}
	out.close();
	return false;
}


int main()
{
	setlocale(LC_ALL, "Russian");

	/*string path = "file.txt"; //������, ���������� ���� � �����
	ofstream out;  //������ ������  ofstream, ������� ��������� ���������� ������
	out.open(path, ios::app);// ��������� ����, ����� ��������� ������

	if (out.is_open()) { // ��������, ������� �� ������� ����
		cout << "���� ������ ��� ������.\n";
		string input;
		for (int i = 0; i < 3; i++) { //1
			cout << "������� ������: \n";
			getline(cin, input);
			out << input << "\n";   // ������ ������ � ����
		}
	}
	else
		cout << "������ �������� �����\n";

	out.close(); // ������� ����� (��������� ������� out)
	cout << endl;

	ifstream in; // ������ ������  ifstream, ������� ��������� ������ �� �����
	in.open(path); // ��������� ���� ��� ������

	if (in.is_open()) {
		cout << "���� ������ ��� ������.\n";
		string str;
		// ���������� �� ����� �����������
		/*char sym;  //  ���������� ����������, �������� ������� �� �����
		while (in.get(sym))  // ����� get ��������� �� ����� � �������� ��� � sym. ���������� false, ���� ���������� �� �������
			str += sym;
		cout << str;*/
		//���������� �� ����� ��������
		//string tmp;
		/*while (!in.eof()) {
			tmp = "";
			in >> tmp;
			cout << tmp << endl;
			str += tmp + "\n";
		}*/

		// ���������� ���������� �� �����
		
	/*	while (!in.eof()) {
			getline(in, tmp);
			
			
			cout << tmp << endl;
			str += tmp + "\n";
		}

	}
	else
		cout << "������ �������� �����\n";

	in.close();

	if (remove("file.txt")) // 0 - �������� ������ �������. ����� ������ ����� - �������� �� ���������
		cout << "������ �������� �����\n";
	else
		cout << "���� ����� \n";*/


	//������ 1
	cout << "������� �����: ";
	string word;
	cin >> word;

	if(statistic(word))
		cout << "����� �������� \n";
	else 
		cout << "������ ������\n";

	cout << "������� �����: ";

	string word1;
	cin >> word1;

	if (statistic(word))
		cout << "����� �������� \n";
	else
		cout << "������ ������\n\n";


	cin.ignore();


	return 0;
}
