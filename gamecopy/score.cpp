#include "game.h"
#include <iostream>
#include <fstream>

void score(std::string name,int result){
    std::ofstream out ("high_score.txt", std::ios::app);
    out << name <<" "<<result << std::endl;
}