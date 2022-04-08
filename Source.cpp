#include <iostream>
#include <fstream>   //библиотека, позволяющая работать с файловой системой содержит классы ofstream, ifstream
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

	/*string path = "file.txt"; //строка, содержащая путь к файлу
	ofstream out;  //объект класса  ofstream, который позволяет записывать данные
	out.open(path, ios::app);// открываем файл, чтобы добавлять записи

	if (out.is_open()) { // проверка, удалось ли открыть файл
		cout << "Файл открыт для записи.\n";
		string input;
		for (int i = 0; i < 3; i++) { //1
			cout << "Введите строку: \n";
			getline(cin, input);
			out << input << "\n";   // запись данных в файл
		}
	}
	else
		cout << "Ошибка открытия файла\n";

	out.close(); // закрыти файла (обнуление объекта out)
	cout << endl;

	ifstream in; // объект класса  ifstream, который позволяет читать из файла
	in.open(path); // открываем файл для чтения

	if (in.is_open()) {
		cout << "Файл открыт для чтения.\n";
		string str;
		// Считывание из файла посимвольно
		/*char sym;  //  символьная переменная, хранящая символы из файла
		while (in.get(sym))  // метод get считывает из файла и помещает его в sym. возвращает false, если считывание не удальсь
			str += sym;
		cout << str;*/
		//Считывание из файла пословно
		//string tmp;
		/*while (!in.eof()) {
			tmp = "";
			in >> tmp;
			cout << tmp << endl;
			str += tmp + "\n";
		}*/

		// построчное считывание из файла
		
	/*	while (!in.eof()) {
			getline(in, tmp);
			
			
			cout << tmp << endl;
			str += tmp + "\n";
		}

	}
	else
		cout << "Ошибка открытия файла\n";

	in.close();

	if (remove("file.txt")) // 0 - удаление прошло успешно. любое другое число - удаление не выполнено
		cout << "Ошибка удаления файла\n";
	else
		cout << "Файл удалён \n";*/


	//задача 1
	cout << "Введите слово: ";
	string word;
	cin >> word;

	if(statistic(word))
		cout << "Слово записано \n";
	else 
		cout << "ошибка записи\n";

	cout << "Введите слово: ";

	string word1;
	cin >> word1;

	if (statistic(word))
		cout << "Слово записано \n";
	else
		cout << "ошибка записи\n\n";


	cin.ignore();


	return 0;
}
