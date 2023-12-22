#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "task2.h"

void Task2()
{
	std::ifstream fin("task2.txt", std::ios::in);
	try {
		if (!fin.is_open()) {
			std::exception error("File didn't open");
			throw error;
		}
		if (fin.peek() == EOF) {
			std::exception empty("File is empty");
			throw empty;
		}
		std::ostringstream vopr;
		std::ostringstream voskl;
		std::string s;
		bool is_sentence = false;
		while (!fin.eof())
		{
			std::string c;
			fin >> c;
			if (s == "" && ((static_cast<int>(c[0]) >= 65 && static_cast<int>(c[0]) <= 90) || (static_cast<int>(c[0]) >= -64 && static_cast<int>(c[0]) <= -33)))
			{
				is_sentence = true;
			}
			s += c + ' ';
			if (*(c.end() - 1) == '!')
			{
				if (is_sentence == true)
					voskl << s << std::endl;
				is_sentence = false;
				s = "";
			}
			else if (*(c.end() - 1) == '?')
			{
				if (is_sentence == true)
					vopr << s << std::endl;
				is_sentence = false;
				s = "";
			}
			else if (*(c.end() - 1) == '.')
			{
				s = "";
				is_sentence = false;
			}
		}
		std::cout <<vopr.str()<<voskl.str();
	}
	catch (std::exception& error)
	{
		std::cout << error.what() << std::endl;
		fin.close();
	}
	system("pause");
}