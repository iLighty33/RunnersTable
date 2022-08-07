#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include "GenerateVector.h"
#include "GenerateDeque.h"


int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    system("chcp 65001");

    // 01. Vector realization

    int vectQuantity = 15;
    std::vector <Competitor> Competitors;
    Competitors.reserve(vectQuantity);
    Competitors.resize(vectQuantity);
    fillMyVector(Competitors, vectQuantity);
    showMyVector(Competitors);
    Competitors.shrink_to_fit();

    // 02. Deque realization

    int dequeQunatity = 15;
    std::deque <dqCompetitor> dqCompetitors;
    dqCompetitors.resize(dequeQunatity);
    fillMyDeque(dqCompetitors, dequeQunatity);
    showMyDeque(dqCompetitors);
    dqCompetitors.shrink_to_fit();

    return 0;
}
