#include<iostream>
#include<vector>
#include "ufo.hpp"

int main(){
    great();
    std::string codeword="codecademy";
    std::string answer="__________";
    int misses=0;
    std::vector<char> incorrect{};
    bool guess= false;

    char letter;
    while(answer!=codeword && misses<7){
        
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