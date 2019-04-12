#include <iostream>
#include "Stack.h"
#include <ctime>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Rus");
	int c = 0, s = 0;
	int l;
	srand(time(NULL));
	int size = 5 + rand() % 6;//%(диапазон между границами+1)+левая граница, т.е. от 5 до 10

	Stack s_1(size,1), s_2(size,1);
	
	Stack s_3(size);
	do
	{
		system("cls");
		cout << "Здравствуйте!" << "\n" << "Пожалуйста, выберете действие:" << "\n\n" << "  1.  Показать стеки;" << "\n" << "  2.  Вычесть из элементов первого стека элементы второго;" << "\n"  << "\n" << "  4.  Вычесть число из элементов стека;" << "\n" << "  5.  Разделить стеки на произвольное число; " << "\n" << "  6.  Стек 1 = Стек 2;" << "\n" << "  7.  Проверить на наличие одинаковых элементов в стеках;" << "\n" << "  8.  Найти элемент первого стека, который больше соответствующего ему элемента второго стека;" << "\n" << "  9.  Найти элемент первого стека, который меньше соответствующего ему элемента второго стека;" << "\n" << "  10. Умножить элементы стека на -1;"<< "\n"<<"  11. Изменить стек;" << "\n\n" << "  0. Выход из программы." << endl;
		cin >> c;
		switch (c)
		{
		case 1:
			system("cls");
			
			cout << "1 стек"<<endl;
			cout << s_1;
			cout << endl << endl;
			cout << "2 стек" << endl;
			cout << s_2;
			cout << endl << endl;
		
			system("pause>null");
			break;
		case 2:
			system("cls");
			cout << "1 стек(исходный)" << endl;
			cout << s_1;
			cout << endl << endl;
			cout << "2 стек" << endl;
			cout << s_2;
			cout << endl << endl;
			s_1 -= s_2;
			cout << "1 стек" << endl;
			cout << s_1;
			cout << endl << endl;
			
			system("pause>null");
			break;
		case 3:
		
		
		
			system("pause>null");
			break;
		
		case 4:
			system("cls");

			cout << "Введите число: " << endl;
			cin >> l;
			cout << "C каким стеком вы хотите работать? \n 1 - Первый; 2 - Второй" << endl;
			cin >> s;
			cout << endl << endl;
			switch (s)
			{
			case 1:

				s_1 - l;
				cout << "Результат: " << s_1;
				break;
			case 2:

				s_2 - l;
				cout << "Результат: " << s_2;
				break;
			}



			system("pause>null");
			break;

		case 5:
			system("cls");
		
			cout << "1 стек" << endl;
			cout << s_1;
			cout << endl << endl;
			cout << "2 стек" << endl;
			cout << s_2;
			cout << endl << endl;
			cout<<"Введите число: " << endl;
			cin >> l;
			cout << "Какой стек вы хотите изменить? \n 1 - Первый; 2 - Второй" << endl;
			cin >> s;
			system("cls");
			switch (s)
			{
			case 1:
				cout << s_1 << endl;
				s_1 / l;
				cout << s_1;
				break;
			case 2:
				cout << s_2 << endl;
				 s_2 / l;
				 cout << s_2;
				break;
			}
			

			system("pause>null");
			break;
		case 6:
			system("cls");
			cout << "1 стек(исходный)" << endl;
			cout << s_1;
			cout << endl << endl;
			cout << "2 стек(исходный)" << endl;
			cout << s_2;
			cout << endl << endl;
			s_1 = s_2;
			cout << "1 стек" << endl;
			cout << s_1;
			cout << endl << endl;
			cout << "2 стек" << endl;
			cout << s_2;
			system("pause>null");
			break;
		case 7:
			system("cls");
			cout << "1 стек" << endl;
			cout << s_1;
			cout << endl << endl;
			cout << "2 стек" << endl;
			cout << s_2;
			cout << endl << endl;
			s_1 == s_2;
			system("pause>null");
			break;
		case 8:
			system("cls");
			cout << "1 стек" << endl;
			cout << s_1;
			cout << endl << endl;
			cout << "2 стек" << endl;
			cout << s_2;
			cout << endl << endl;

			s_1 > s_2;
			system("pause>null");
			break;
		case 9:
			system("cls");
			cout << "1 стек" << endl;
			cout << s_1;
			cout << endl << endl;
			cout << "2 стек" << endl;
			cout << s_2;
			cout << endl << endl;

			s_1 < s_2;
			system("pause>null");
			break;
			system("pause>null");
			break;
		case 10:
			system("cls");
			cout << "Какой стек вы хотите изменить? \n 1 - Первый; 2 - Второй; 3 - Оба;" << endl;
			cin >> s;
			system("cls");
			switch (s)
			{
			case 1:
				cout << "1 стек(исходный)" << endl;
				cout << s_1;
				cout << endl << endl;
				!s_1;
				cout << "1 стек" << endl;
				cout << s_1;
				cout << endl << endl;
				break;
			case 2:
				cout << "2 стек(исходный)" << endl;
				cout << s_2;
				cout << endl << endl;
				!s_2;
				cout << "2 стек" << endl;
				cout << s_2;
				cout << endl << endl;
				break;
			case 3:
				cout << s_1;
				cout << endl << endl;
				!s_1;
				cout << "1 стек" << endl;
				cout << s_1;
				cout << endl << endl;
				cout << "2 стек(исходный)" << endl;
				cout << s_2;
				cout << endl << endl;
				!s_2;
				cout << "2 стек" << endl;
				cout << s_2;
				cout << endl << endl;
				break;
			}
			system("pause>null");
			break;
		case 11:
			system("cls");
			cout << "Какой стек вы хотите изменить? \n 1 - Первый; 2 - Второй" << endl;
			cin >> s;
			system("cls");
			switch (s)
			{
			case 1:
				cin >> s_1;
				break;
			case 2:
				cin >> s_2;
				break;
			}
			system("pause>null");
			break;
		}

	} while (c);
}