#include "game.h"
#include <iostream>
int main(){
    int value,lvl,result;
    std::cout << "Welcome to guess the number game!\n1. New game\n2. High score\n" ;
    std::cin>>value;
    if (value==1){
        std::cin>>lvl;
        result = game();
    }
    
    return 0;
}