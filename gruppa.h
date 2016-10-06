#pragma once
#include "iostream" 
#include "cstdio"
#include "conio.h"
#include "stdlib.h"
#include "cstring"
using namespace std;

struct stud{
	char name[10];
	char surname[10];
	int day;
	int month;
	int year;
	char tel[12];
	
};
typedef struct stud student;

class gruppa {
protected:
	student *mas;
	int size;
	
public:
	gruppa& redact_stud(int num, char _name[], char _surname[], int _day, int _month, int _year, char _tel[]);
	void print_gruppa();
	gruppa& remove_stud(int i);
	gruppa& operator=(gruppa &a);
	gruppa(gruppa &a);
	gruppa& add_stud(char _name[], char _surname[], int _day, int _month, int _year, char _tel[]);
	void search_surname(char _surname[]);
	void print_stud(int num);
	gruppa& sort();
	gruppa();
	~gruppa();
};

