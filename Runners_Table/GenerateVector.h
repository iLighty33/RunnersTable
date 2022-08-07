#pragma once
#include <vector>
#include <string>

struct Competitor {
    std::string name_ = "";
    std::string surName_ = "";
    double result_ = 0;
    int id_ = 0;
    Competitor();
    Competitor(int id_, double result_, std::string name_, std::string surName_) : id_(id_), result_(result_), name_(name_), surName_ (surName_) {}
};

int getUniqueId() noexcept;
double resultsOfRace() noexcept;
std::string getNames() noexcept;
std::string getSurNames() noexcept;

void showMyVector(std::vector<Competitor>& compet);
void fillMyVector(std::vector <Competitor>& compet, int& VectQuantity);
