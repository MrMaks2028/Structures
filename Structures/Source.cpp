#include <iostream>
#include <string>
using namespace std;

struct date {
	int day;
	int mounth;
	int year;

};

struct person {
	string name;
	string address;
	date birthday;
} Tom = { "Tom Smith", "Groove street, 5", {1, 1, 2000} };

void showPerson(person &P) {
	/*cout << &P << endl;*/
	cout << P.name << " from " << P.address << endl;
	cout << "Birthday - " << P.birthday.day << "." << P.birthday.mounth << "." << P.birthday.year << endl;

}

person inputObj() {
	person newP;
	cout << "Введите имя:\n";
	getline(cin, newP.name);
	cout << "Введите адрес:\n";
	getline(cin, newP.address);
	newP.birthday = {1,1,1900};
	return newP;
}

void fillObj(person& P) {    // Более целесообразный способ
	cout << "Введите имя:\n";
	getline(cin, P.name);
	cout << "Введите адрес:\n";
	getline(cin, P.address);
	P.birthday = { 1,1,1 };
}

int main() {
	setlocale(LC_ALL, "Russian");

	/*person Mike;
	fillObj(Mike);
	showPerson(Mike);

	person Jack = inputObj();
	showPerson(Jack);*/

	 

	/*cout << date1.day << "." << date1.mounth << "." << date1.year << " - " << date1.note << endl;

	birthday.day = 10;
	birthday.mounth = 5;
	birthday.year = 1990;
	birthday.note = "Мой День Рождения";
	cout << birthday.day << "." << birthday.mounth << "." << birthday.year << " - " << birthday.note << endl;

	date date2 = {23, 3, 2022, "Lesson 49-50"};
	cout << date2.day << "." << date2.mounth << "." << date2.year << " - " << date2.note << endl;
	
	struct coord {
		int X = 10; // значение по умолчанию
		int Y = 10; // значение по умолчанию
	} pointA = { 5, -5 };
	cout << "X = " << pointA.X << endl;
	cout << "Y = " << pointA.Y << endl;*/

	
	/*//Tom.name = "Tom Smith";
	//Tom.address = "Groove street, 5";
	/*Tom.birthday.day = 1;
	Tom.birthday.mounth = 1;
	Tom.birthday.year = 2000;*/
	//Tom.birthday = {1, 1, 2000};

	/*person* pTom = &Tom;

	cout << pTom->name << endl;
	pTom->address = "Homeless";*/
	
	//cout << &Tom << endl;
	/*showPerson(Tom);
	
	person Bob = { "Bob Thompson", "PSO street, 4", {5,5,2005} };
	showPerson(Bob);*/


	struct strkuct1 {
		int n1;
		int n2;
		long long n3;
		int arr[5];
	} X;
	cout << sizeof(X) << endl;



	return 0;
}