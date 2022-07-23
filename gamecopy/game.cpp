#include "game.h"
#include <iostream>

int gam(int a){
    std::string name;
    int number, i=1;
    std::cout<<"What is your name?"<<std::endl;
    std::cin>> name;
    std::cout<<"Enter your guess:"<<std::endl;
    std::cin >>number;
    std::srand(std::time(nullptr));
    int random_value = std::rand()%a;
    while (random_value != number){
        if (random_value < number){
            std::cout<<"less than "<<number<<std::endl;
        }
        else if (random_value > number){
            std::cout<<"more than "<<number<<std::endl;
        }
        std::cout<<"Enter your guess:"<<std::endl;
        std::cin >> number;
        i++;
    } 
    std::cout<<"Good! Result: "<< i <<std::endl;
    return i;
}