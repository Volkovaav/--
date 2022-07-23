#include "game.h"
#include <fstream>
#include <iostream>

void res(){
    const int MAXLEN_STR = 256; 
    const int ROW_COUNT = 100;
    char S[ROW_COUNT][MAXLEN_STR];
    int str_num = 0; 
    std::ifstream in("high_score.txt");
        while (!in.eof()){
          in.getline(S[str_num++], MAXLEN_STR);
        }
    in.close();
    for (int i=0; i<str_num; i++){
        std::cout << S[i] << std::endl;
    }
}


