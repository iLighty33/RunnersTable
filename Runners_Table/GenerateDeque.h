#pragma once
#include <deque>
#include <string>

struct dqCompetitor {
    std::string name_ = "";
    std::string surName_ = "";
    double result_ = 0;
    int id_ = 0;
    dqCompetitor();
    dqCompetitor(int id_, double result_, std::string name_, std::string surName_) : id_(id_), result_(result_), name_(name_), surName_(surName_) {}
};

int getUniqueIdDq() noexcept;
double resultsOfRaceDq() noexcept;
std::string getNamesDq() noexcept;
std::string getSurNamesDq() noexcept;

void showMyDeque(std::deque<dqCompetitor>& compet);
void fillMyDeque(std::deque <dqCompetitor>& compet, int& dqQuantity);
