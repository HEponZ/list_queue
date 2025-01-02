#include "Queue.h"
#include "Queue.cpp"

int main()
{
	setlocale(LC_ALL, "rus");
	Queue<int> queue;
	int choise, value;

	enum {
		EXIT = 0,
		ADD,
		DEL_LAST,
		PRINT,
		CLEAR,
		KOL_VO,
		IS_EMPTY
	};

	cout << "1 - ��������\n2 - ������� ���������\n3 - �����\n4 - ��������\n5 - ���-�� ���������\n6 - ���� �� ������\n";

	do
	{
		cin >> choise;

		switch (choise)
		{
		case ADD:
			cout << "������� �� ��� ������ ��������: ";
			cin >> value;
			queue.Add(value);
			break;
		case DEL_LAST:
			queue.Extract();
			break;
		case PRINT:
			queue.print();
			break;
		case CLEAR:
			queue.Clear();
			break;
		case KOL_VO:
			cout << "� ������ " << queue.GetCount() << " ���������" << "\n";
			break;
		case IS_EMPTY:
			if (queue.IsEmpty() == true)
			{
				cout << "������ ����\n";
			}
			else
			{
				cout << "������ �� ����\n";
			}
			break;
		}
	} while (choise != 0);

	return 0;
}