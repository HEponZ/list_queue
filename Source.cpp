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

	cout << "1 - Добавить\n2 - Удалить последний\n3 - Вывод\n4 - Очистить\n5 - Кол-во элементов\n6 - Пуст ли список\n";

	do
	{
		cin >> choise;

		switch (choise)
		{
		case ADD:
			cout << "Введите то что хотите добавить: ";
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
			cout << "В списке " << queue.GetCount() << " элементов" << "\n";
			break;
		case IS_EMPTY:
			if (queue.IsEmpty() == true)
			{
				cout << "Список пуст\n";
			}
			else
			{
				cout << "Список не пуст\n";
			}
			break;
		}
	} while (choise != 0);

	return 0;
}