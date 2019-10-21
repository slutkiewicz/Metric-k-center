#pragma once
#include <vector>
#include <chrono>
#include "problem.hpp"


class chaseSequence{
public:
    std::vector<int> anwsers_;
    std::vector<int> work_;
    solution_t problem_;

    int j_,r_,n_,s_,t_;

    chaseSequence(solution_t problem);
    chaseSequence();

    void init();
    void gimmeSolution();
    auto mesureTime();
private:
    void checkAnwsers();
    int findAnwsers();


    void moveRightOne();
    void moveRightTwo();

    void moveLeftOne();
    void moveLeftTwo();
};