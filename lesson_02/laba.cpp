/*
	В результате выполнения данной работы слушатель получает много мелких но необходимых
	для дальнейшей работы навыков, поэтому задание построено как последовательность 
	закомментированных блоков, которые требуется последовательно раскомментировать, 
	отвечая  при этом на поставленные вопросы.

	Примерная последовательность действий при отладке проекта:
	1. наберите (исправьте, раскомментируйте нужный фрагмент) исходный текст программы;
	2. откомпилируйте (Build/Compile  ***.cpp или Ctrl+F7)
		Замечание: этот этап явно вызывать необязательно, но полезно для начинающего 
			программиста, т.к. позволяет увидеть ошибки (errors) и предупреждения
			(warnings), возникающие при компиляции данного конкретного файла;
	3. скомпонуйте проект(Build/Build ***.exe или F7)
		Замечание 1: этот этап тоже необязателен, но настоятельно рекомендуем, т.к. 
			позволяет перекомпилировать только измененные файлы и в случае отсутствия
			ошибок всегда полезно посмотреть на выдаваемые компилятором замечания;
		Замечание 2: перед тем, как строить проект, неплохо убедиться  в том, что 
			исполняемый код будет содержать информацию для отладчика - 
				(Build/Configuration Manager.../Configuration - Debug - тип сборки проекта);
	4. поставьте на интересующих Вас строках исходного кода остановы(breakpoints) - F9 или 
		просто кликните левой кнопкой на левой серой полосе окна редактирования; 
	5. запустите программу в режиме отладки 
		(Debug/Start... или  F5);

  Замечание: для перечисленных выше действий приведены комбинации клавиш и соответствующие 
		пункты меню, однако во многих случаях гораздо быстрее то же самое можно сделать с 
		помощью кнопок на Tool Bar, в чем слушатель может преуспеть самостоятельно.

*/

#include  <iostream>		
#define stop do{ } while(0)	

int main()
{


// ********************************************************
	//Задание 9. Циклы.
	//Задание 9.1 Напишите фрагмент кода, который реализует с помощью for
	//следующую логику: найти сумму заданного диапазона целых чисел.
	//Введите границы с помощью потока ввода или с помощью средств отладки.
	//Предусмотрите защиту от ввода нижней границы больше, чем верхней.
	{
		int low, high, sum=0;
		std::cout << "Enter low and high bound" << std::endl;
		std::cout<< "Low:\t";
		std::cin >> low;
		std::cout<< "High:\t";
		std::cin >> high;     //сформироыать границы диапазона


		if(low <= high)      //проверить корректность значений
		{
			for(int i = low; i <= high; i++){         // вычислить сумму
				sum += i;
				std::cout<<"sum = "<<sum<<std::endl;
			}	
			stop;
		}		
		// проверить в отладчике значение
		stop;
	}

	
	//Задание 9.2 Напишите фрагмент кода, который реализует с помощью do-while
	//следующую логику: на каждой итерации цикла ввести с консоли целое значение
	// и покинуть цикл, если значение удовлетворяет условию: 
	// значение больше или равно 10 и четное.
	//Замечание: проверка на четность с использованием операции остатка от деления
	//нацело генерирует очень неэффективный код. Попробуйте реализовать альтернативный
	//вариант.	
	{
		int x;

		do
		{
			std::cout << "Enter digit >= 10 && even for exit:\t";
			std::cin >> x;

		} while(x < 10 || x%2==1);

		std::cout<<"x = "<<x<<std::endl;
	} 

	//Задание 9.3 Напишите фрагмент кода, который реализует с помощью while
	//следующую логику: исходно int x = 0; 
	//на каждой итерации x=x+1, sum=sum+1/x
	//найти значение x, при котором sum>1.7

	{
		double sum = 0, x=0;

		while (sum<=1.7){
			x = x+1;
			sum = sum+(1/x);
		}
		std::cout<<"(sum>1.7) at x = "<<x<<std::endl;
	}

	return 0; //код завершения приложения
}	// Конец функции main()
