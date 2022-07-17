#pragma once
#include <vector>
#include <fstream>
#include <string>

class GenerateVector {
public:
    GenerateVector();
    ~GenerateVector();

    std::string getNames() const {
        return names_[rand() % names_.size()];
    }

    std::string getSurNames() const {
        return surNames_[rand() & surNames_.size()];
    }

private:
    std::vector<std::string> names_;
    std::vector<std::string> surNames_;
    std::vector<int> idS_;

};