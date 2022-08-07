#pragma once

#include "GenerateDeque.h"
#include <iostream>
#include <fstream>
#include <deque>
#include <string>

//std::vector<int> GenerateVector::idS_;

std::string getNamesDq() noexcept {

	std::deque<std::string> dataName;

	std::fstream fs;
	fs.open("names.txt", std::ios::in);

	if (fs.is_open()) {
		while (!fs.eof()) {
			std::string str;
			getline(fs, str);
			dataName.emplace_back(str);
		}
	}
	else
		std::cout << "Error openning file";

	fs.close();

	int getRandomName = rand() % 10;
	return dataName[getRandomName];

}

std::string getSurNamesDq() noexcept {
	std::deque<std::string> dataSurName;

	std::fstream fs;
	fs.open("surNames.txt", std::ios::in);

	if (fs.is_open()) {
		while (!fs.eof()) {
			std::string str;
			getline(fs, str);
			dataSurName.emplace_back(str);
		}
	}
	else
		std::cout << "Error openning file";

	fs.close();

	int getRandomSurName = rand() % 10;
	return dataSurName[getRandomSurName];

}

void showMyDeque(std::deque<dqCompetitor>& compet)
{
	std::cout << "\n => Deque realization <=";

	for (int i = 0; i < 1; i++)
		std::cout << "\n Id:\t" << "Result:\t" << " Name:\t" << "Surname:\n";
	for (auto& el : compet) {

		if (el.id_ == 0 || el.result_ == 0.00) {
			continue;
		}

		std::cout << " " << el.id_ << "";
		std::cout << " " << el.result_ << " ";
		std::cout << " " << el.name_ << " ";
		std::cout << " " << el.surName_ << " ";
		std::cout << std::endl;
	}
}

void fillMyDeque(std::deque<dqCompetitor>& compet, int& dqQuantity)
{

	for (auto& el : compet) {
		compet.emplace_back(getUniqueIdDq(), resultsOfRaceDq(), getNamesDq(), getSurNamesDq());
	}
}

int getUniqueIdDq() noexcept {
	int myNum = rand() % (99999 - 10000 + 1) + 10000;
	return myNum;
}

double resultsOfRaceDq() noexcept {
	double myResult = 7.0 + (double)rand() / RAND_MAX * (20.0 - 7.0);
	return myResult;
}

dqCompetitor::dqCompetitor()
{
}
