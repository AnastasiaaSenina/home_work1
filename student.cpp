#include "gruppa.h"
#include "locale.h"


int _tmain(int argc, _TCHAR* argv[])

{	setlocale(LC_ALL, "Rus");
	gruppa A;//создание списка группы из 2-х студентов
	//заполнение списка
	A.redact_stud(0, "Анастасия", "Сенина", 16, 11, 1997, "27333");
	A.redact_stud(1, "Владимир", "Зиновьев", 7, 11, 1997, "27345");
	//добавление  записи в список группы
	A.add_stud("Юлия", "Камелина", 4, 11, 1997, "27879");
	A.add_stud("Иван", "Ермаков", 13, 10, 1998, "24638");
	A.add_stud("Яна", "Петрова", 10, 10, 1997, "28890");
	A.add_stud("Александр", "Яковлев", 1, 1, 1998, "24580");
	A.add_stud("Алексей", "Зайцев", 11, 12, 1998, "25879");
	A.print_gruppa();
	//удаление 4-го студента
	A.remove_stud(4);
	A.sort();
	A.search_surname("Сидоров");
	A.add_stud("Анатолий", "Сидоров", 30, 12, 1996, "84580");
	A.search_surname("Сидоров");
	A.sort();
	A.print_gruppa();

	_getch();
	return 0;
}

