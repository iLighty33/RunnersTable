#pragma once
#include <iostream>
#include <GenerateVector.h>

class CompetitorVector : public GenerateVector {
public:
    CompetitorVector();

    std::string getName() const {
        return name_;
    }

    std::string getSurName() const {
        return surName_;
    }

    double getResult() const {
        return result_;
    }

    int getId() const {
        return id_;
    }
private:
    std::string name_;
    std::string surName_;
    double result_;
    int id_;
};