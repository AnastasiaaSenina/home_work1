#include "gruppa.h"


gruppa::gruppa()
{
	size = 2;
	mas = new student[size];
}
/////////////////////////////////////////////////////////конструктор копирования/////////////////////////////////////////////////
gruppa::gruppa(gruppa &a){
	size = a.size;
	mas = new student[a.size];
	for (int i = 0; i < a.size; i++){
		mas[i].day = a.mas[i].day;
		mas[i].month = a.mas[i].month;
		mas[i].year = a.mas[i].year;
		int j = 0;
		while (a.mas[i].surname[j] != 0){
			mas[i].surname[j] = a.mas[i].surname[j];
			j++;
		}
		mas[i].surname[j] = a.mas[i].surname[j];
		j = 0;
		while (a.mas[i].name[j] != 0){
			mas[i].name[j] = a.mas[i].name[j];
			j++;
		}
		mas[i].name[j] = a.mas[i].name[j];
		j = 0;
		while (a.mas[i].tel[j] != 0){
			mas[i].tel[j] = a.mas[i].tel[j];
			j++;
		}
		mas[i].tel[j] = a.mas[i].tel[j];
	}
}
///////////////////////////////////////////////изменение записи/////////////////////////////////////////////////////////
gruppa& gruppa::redact_stud(int num, char  _name[], char _surname[], int _day, int _month, int _year, char _tel[]){
	mas[num].day = _day;
	mas[num].month = _month;
	mas[num].year = _year;
	int i = 0;
	while (_name[i] != 0){
		mas[num].name[i] = _name[i];
		i++;
			}
	mas[num].name[i] = 0;
	i = 0;
	while (_surname[i]!= 0){
		mas[num].surname[i] = _surname[i];
		i++;
			}
	mas[num].surname[i] = 0;
	i = 0;
	while (_tel[i] != 0){
		mas[num].tel[i] = _tel[i];
		i++;
}
	mas[num].tel[i] = _tel[i];
	return *this;
}
void gruppa::print_gruppa(){
	for (int i = 0; i < size; i++){
		cout << mas[i].surname << "  " << mas[i].name << "  ";
		cout << mas[i].day << "." << mas[i].month << "." << mas[i].year<<"  ";
		cout << mas[i].tel << "\n";
	}
}
void gruppa::print_stud(int num){
	cout << mas[num].surname << "  " << mas[num].name << "  ";
	cout << mas[num].day << "." << mas[num].month << "." << mas[num].year << "  ";
	cout << mas[num].tel << "\n";
}
////////////////////////////////////////////////////удаление записи//////////////////////////////////////////////////////
gruppa& gruppa::remove_stud(int num_stud){
	gruppa a;
	a = *this;
	delete[] mas;
	size = size - 1;
	mas = new student[size];
	for (int i = 0; i < num_stud; i++){
		mas[i].day = a.mas[i].day;
		mas[i].month = a.mas[i].month;
		mas[i].year = a.mas[i].year;
		
		int j = 0;
		while (a.mas[i].surname[j] != 0){
			mas[i].surname[j] = a.mas[i].surname[j];
			j++;
		}
		mas[i].surname[j] = a.mas[i].surname[j];
		j = 0;
		while (a.mas[i].name[j] != 0){
			mas[i].name[j] = a.mas[i].name[j];
			j++;
		}
		mas[i].name[j] = a.mas[i].name[j];
		j = 0;
		while (a.mas[i].tel[j] != 0){
			mas[i].tel[j] = a.mas[i].tel[j];
			j++;
		}
		mas[i].tel[j] = a.mas[i].tel[j];
	
	}
	for (int i = num_stud; i < size; i++){
		mas[i].day = a.mas[i+1].day;
		mas[i].month = a.mas[i+1].month;
		mas[i].year = a.mas[i+1].year;

		int j = 0;
		while (a.mas[i+1].surname[j] != 0){
			mas[i].surname[j] = a.mas[i+1].surname[j];
			j++;
		}
		mas[i].surname[j] = a.mas[i+1].surname[j];
		j = 0;
		while (a.mas[i+1].name[j] != 0){
			mas[i].name[j] = a.mas[i+1].name[j];
			j++;
		}
		mas[i].name[j] = a.mas[i+1].name[j];
		j = 0;
		while (a.mas[i+1].tel[j] != 0){
			mas[i].tel[j] = a.mas[i+1].tel[j];
			j++;
		}
		mas[i].tel[j] = a.mas[i+1].tel[j];
			}
	return *this;
}
//////////////////////////////////////////////////////перегрузка операции присвания////////////////////////////////////////////
gruppa& gruppa::operator=(gruppa &a){
	if (size != a.size){
		delete[] mas;
		size = a.size;
		mas = new student[size];
	}
	for (int i = 0; i < a.size; i++){
		mas[i].day = a.mas[i].day;
		mas[i].month = a.mas[i].month;
		mas[i].year = a.mas[i].year;
		int j = 0;
		while (a.mas[i].surname[j] != 0){
			mas[i].surname[j] = a.mas[i].surname[j];
			j++;
		}
		mas[i].surname[j] = a.mas[i].surname[j];
		j = 0;
		while (a.mas[i].name[j] != 0){
			mas[i].name[j] = a.mas[i].name[j];
			j++;
		}
		mas[i].name[j] = a.mas[i].name[j];
		j = 0;
		while (a.mas[i].tel[j] != 0){
			mas[i].tel[j] = a.mas[i].tel[j];
			j++;
		}
		mas[i].tel[j] = a.mas[i].tel[j];
	}
	return *this;

}
/////////////////////////////////////////////добаление записи/////////////////////////////////////////////////
gruppa& gruppa::add_stud(char _name[], char _surname[], int _day, int _month, int _year, char _tel[]){
	gruppa a;
	a = *this;
	size=size + 1;
	delete[] mas;
	mas = new student[size];
	for (int i = 0; i < a.size; i++){
		mas[i].day = a.mas[i].day;
		mas[i].month = a.mas[i].month;
		mas[i].year = a.mas[i].year;
		int j = 0;
		while (a.mas[i].surname[j] != 0){
			mas[i].surname[j] = a.mas[i].surname[j];
			j++;
		}
		mas[i].surname[j] = a.mas[i].surname[j];
		j = 0;
		while (a.mas[i].name[j] != 0){
			mas[i].name[j] = a.mas[i].name[j];
			j++;
		}
		mas[i].name[j] = a.mas[i].name[j];
		j = 0;
		while (a.mas[i].tel[j] != 0){
			mas[i].tel[j] = a.mas[i].tel[j];
			j++;
		}
		mas[i].tel[j] = a.mas[i].tel[j];
	}	//(*this).redact_stud(size - 1, _name, _surname, _day, _month, _year, _tel);
	mas[size - 1].day = _day;
	mas[size - 1].month = _month;
	mas[size - 1].year = _month;
	strcpy(mas[size -1].surname,_surname);
	strcpy(mas[size-1].name,_name);
	strcpy(mas[size-1].tel,_tel);	
	return *this;
}


////////////////////////////////////////////////////поиск по фамилии///////////////////////////////////////////////////////
void gruppa::search_surname(char _surname[]){
	bool res=false;
	for (int i = 0; i < size; i++){
		if (strcmp(mas[i].surname, _surname) == 0){
			res = true;
			cout << "Ваш студент найден" << " : ";
			print_stud(i);
			cout << "\n";
		}

	}
	if (res == false){
		cout << "Такого студента нет в этой группе((";
		cout << "\n";
	}
}
gruppa& gruppa::sort(){
	stud a;
	for (int i = 0; i < size - 1; i++){
		int num_min = i;
		for (int j = i+1; j < size; j++){
			if (strcmp(mas[num_min].surname, mas[j].surname)>0)
				num_min = j;
		}
		a.day = mas[i].day;
		a.month = mas[i].month;
		a.year = mas[i].year;
		strcpy(a.surname, mas[i].surname);
		strcpy(a.name, mas[i].name);
		strcpy(a.tel, mas[i].tel);

		mas[i].day = mas[num_min].day;
		mas[i].month = mas[num_min].day;
		mas[i].year = mas[num_min].year;
		strcpy(mas[i].surname, mas[num_min].surname);
		strcpy(mas[i].name, mas[num_min].name);
		strcpy(mas[i].tel, mas[num_min].tel);

		mas[num_min].day = a.day;
		mas[num_min].year = a.year;
		mas[num_min].month = a.month;
		strcpy(mas[num_min].surname,a.surname);
		strcpy(mas[num_min].name,a.name);
		strcpy(mas[num_min].tel,a.tel);


	}
	return *this;
}


gruppa::~gruppa()
{	delete[] mas;
	size = 0;
}
