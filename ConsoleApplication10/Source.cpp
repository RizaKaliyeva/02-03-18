#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<iostream>
#include "Header.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");

	int nz;
	cout << "Kakoe zadanie?" << endl;
	cin >> nz;

	switch (nz)
	{
	case 1:
	{
		/*1.	Составить программу, которая запрашивает название романа и фамилию его автора, а затем выводит сообщение : "Писатель ... — автор романа ..."
				(на месте многоточий должны быть выведены соответствующие значения)*/
		char avtor, roman;
		scanf("Avtor %s - avtor romana %s");
	}
	break;
	case 2:
	{
		char s1[20] = "Daniy";
		char s2[20] = "Chehiy";
		printf("1 strana %s, vtoraya %s \n\n", s1, s2);
		char temp[20] = {};
		strcpy(temp, s1);
		strcpy(s1, s2);
		strcpy(s2, temp);
		printf("1 strana %s, vtoraya %s \n\n", s1, s2);
	}
	break;
	case 3:
	{
		//3.	Дано слово.Вывести на экран его последний символ.
		char word[20];
		scanf("%s", word);
		int count = strlen(word);
		printf("posledniy simvol : %c \n\n", word[count - 1]);
	}
	break;
	case 4:
	{
		//4.	Дано слово.Вывести на экран его k - й символ
		char word[20];
		scanf("%s", word);
		int count;
		printf("Kakoi simbol schitat':\n");
		scanf("%d", &count);
	/*	int numb = 0;
		numb = atoi(count);*/
		printf("eto simvol : %c \n\n", word[count-1]);
	}
	break;
	case 5:
	{
		//5.	Дано слово.Определить, одинаковы ли второй и четвертый символы в нем.
		char word[20];
		scanf("%s", word);
		//if (strcmp(&word[2], &word[4])==0)
		if (word[2] == word[4])
			printf("Simvoly odinakovy \n");
		else
			printf("Simvoly ne odinakovy \n");
		

	}
	break;
	case 6:
	{
		//7.	Дано слово.Получить и вывести на экран буквосочетание, состоящее из его второго и четвертого символа
		char word[20], newWord[3];
		scanf("%s", word);
		strcpy(&newWord[0], &word[2]);
		strcpy(&newWord[1], &word[5]);
		newWord[2] = '\0';
		printf("%s", newWord); 
	}
	break;
	case 7:
	{
		//8.	Дано слово.Получить и вывести на экран буквосочетание, состоящее из его третьего и последнего символа
		char word[20], newWord[3];
		scanf("%s", word);
		int count = strlen(word);
		strcpy(&newWord[0], &word[2]);
		strcpy(&newWord[1], &word[count-1]);
		newWord[2] = '\0';
		printf("%s", newWord);
	}
	break;
	case 8:
	{
		//9.	Дано слово.Получить его часть, образованную второй, третьей и четвертой буквами
		char word[20], newWord[4];
		scanf("%s", word);
		strcpy(&newWord[0], &word[1]);
		strcpy(&newWord[1], &word[2]);
		strcpy(&newWord[2], &word[3]);
		newWord[3] = '\0';
		printf("%s", newWord);
	}
	break;
	case 9:
	{
		//10.	Дано слово, состоящее из четного числа букв.Вывести на экран его первую половину, не используя оператор цикла.
		char word[20], newWord[3];
		scanf("%s", word);
		int count = strlen(word);
		count = ((count - 1) / 2) + 1;
		word[count] = '\0';
		printf("%s \n\n", word);
	}
	break;
	case 10:
	{
		//11.	Введите массив символов из 10 элементов.Замените символы - цифры на символ '*'.
		/*char m[256];
		for (int i = 0; i <= 256; i++)
		{
			m[i] = i;
			printf("%d - %c\t", i, i);
		}*/

		char text[]="account: KZT14848641454";
		for (int i = 0; i < strlen(text); i++)
		{
			int code = (int)text[i];
			if (code >= 48 && code <= 57)
				text[i] = '*';
		}
		printf("posle:%s\n\n", text);

		/*for (int i = 48; i < 58; i++)
		{
			printf("%d - %c\t", symbol[i]);
		}*/

	}
	break;
	case 11:
	{
		//12.	Введите массив символов из 11 элементов.Переведите все строчные буквы - символы в верхний регистр
		char text[] = "account: KZT14848641454";
		for (int i = 0; i < strlen(text); i++)
		{
			int code = (int)text[i];
			if (code >= 97 && code <= 122)
				text[i]=(char)code-32;
		}
		printf("posle:%s\n\n", text);
	}
	break;
	case 12:
	{
		//13.	Дан массив символов, содержащий английский текст.Найти количество слов, начинающихся с буквы b.
		char * text = "The bhinese bovernment plans to make soccer the bumber one sport bn the country. By 2050 it wants to get 50 billion bhildren and bdults to play the game.";
		int count = 0;
		//scanf("%s", text);
		while (* text != '\0')
		{
			if (*text == ' ')
				if (*(text + 1) == 'b')
				{
					text++;
					while (*text != ' ')
					{
						putchar(*text);
						text++;
					}
					text--;
					printf("\n");
					count++;
				}
			text++;
		}
		cout << count << endl;
	}
	break;
	case 13:
	{
		//16.	В заданной строке удалить последний символ « »(пробел), который найдется в строке

	}
	break;
	}
	system("pause");
}