#include <string>
#include <iostream>
#include <vector>     // vector
#include <algorithm>
using namespace std;


struct listing
{
	string name;
	string City;
	string Address;
	string NumberGroup;
	int mark;
};



int main()
{
	const int size = 4;
	setlocale(LC_ALL, "rus");
	


	listing students[size];
	students[0] = {  "Lorin Ivan Nagievich", "Vladivastoc","Комсомольская 4", "21Д" ,5};
	students[1] = { "Nochevny Maksin Yurievich", "Minsc", "Библиотечная 5   ", "21Д", 15 };
	students[2] = {  "Lazarev Nikita Sergeevich", "Minsc","Краснополянская 4","21Д" ,17};
	students[3] = {  "Voron Nikita Gordeevich", "Moscow", "Комсомольская 8", "21Д", 8 };
	
	
	

	listing* temp = new listing[1];

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (students[i].name[0] < students[j].name[0])
			{
				temp[0] = students[i];
				students[i] = students[j];

				students[j] = temp[0];
			}

		}
	}

	
	for (int i = 0; i < size; i++)
	{

		if (students[i].mark > 8.5 && students[i].City == "Minsc")
		{

	      cout<< "ФИО: " << students[i].name<< "\tНомер группы: " << students[i].NumberGroup<< "\tАдрес: "<< students[i].Address << "\tГород: "<< students[i].City<< "\tБалл: "<< students[i].mark << endl;
		}



	}

      
	










}