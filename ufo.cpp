#include<iostream>
#include<vector>
#include<stdlib.h>
#include<time.h>
#include "ufo.hpp"

int main(){
    great();
    std::vector<std::string> codewords {"Khan","Mubasshir","Hello","World"};
    std::string codeword;
    std::string answer;
    int misses=0;
    std::vector<char> incorrect{};
    srand(time(NULL));
    int rn=rand()%codewords.size();
    codeword=codewords[rn];
    for (int I=0;I<codeword.size();I++){
        answer+="_";
    }
    

    char letter;
    while(answer!=codeword && misses<7){
        bool guess= false;
        display_misses(misses);
        std::cout << "Misses: "<< misses << "\n";
        std::cout << "Please Enter Your Guess: ";
        std::cin >> letter;
        for (int i=0;i<codeword.size();i++){
            if(letter==codeword[i]){
                answer[i]=letter;
                guess=true;
            }
        }
        if (guess)
        {
            std::cout << "\nCorrect!";
        }
        else{
            std::cout << "\nIncorrect! The tractor veam pulls the person in further.\n";
            incorrect.push_back(letter);
            misses++;
        }
        
        display_status(incorrect,answer);
        

    }
    end_game(answer,codeword);

    
    
}