#include "gruppa.h"
#include "locale.h"


int _tmain(int argc, _TCHAR* argv[])

{	setlocale(LC_ALL, "Rus");
	gruppa A;//�������� ������ ������ �� 2-� ���������
	//���������� ������
	A.redact_stud(0, "���������", "������", 16, 11, 1997, "27333");
	A.redact_stud(1, "��������", "��������", 7, 11, 1997, "27345");
	//����������  ������ � ������ ������
	A.add_stud("����", "��������", 4, 11, 1997, "27879");
	A.add_stud("����", "�������", 13, 10, 1998, "24638");
	A.add_stud("���", "�������", 10, 10, 1997, "28890");
	A.add_stud("���������", "�������", 1, 1, 1998, "24580");
	A.add_stud("�������", "������", 11, 12, 1998, "25879");
	A.print_gruppa();
	//�������� 4-�� ��������
	A.remove_stud(4);
	A.sort();
	A.search_surname("�������");
	A.add_stud("��������", "�������", 30, 12, 1996, "84580");
	A.search_surname("�������");
	A.sort();
	A.print_gruppa();

	_getch();
	return 0;
}

