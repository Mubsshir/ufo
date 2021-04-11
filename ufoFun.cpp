#include <iostream>
#include <vector>
#include<unistd.h>

// Define functions
void banner(){
  std::system("clear");
  std::cout << R"(
      .--.   |V|
     /    \ _| /
     q .. p \ /
      \--/  //             The
jgs  __||__//
    /.    _/
   // \  /
  //   ||
  \\  /  \                          UFO
   )\|    |
  / || || |
  |/\| || |
     | || |
     \ || /                   Game
   __/ || \__
  \____/\____/        Programed By -  M u b a s s h i r    K h a n    
)" << '\n';
  sleep(1);

}
void great(){
    sleep(2);
    std::system("clear");
    std::cout << "=============\n";
    std::cout << "UFO: The Game\n";
    std::cout << "=============\n";
    std::cout << "Instructions: save your friend\nfrom alien abduction by guessing \nthe letters in the codeword.\n";

}
void end_game(std::string answer,std::string codeword){
  if (answer==codeword)
    {
        std::cout << "\nHooray! You saved the person and earned a medal of honor!\n";

    }
    else{std::cout << "\nOh no! The UFO just flew away with \nanother person!\n\n";}
    
    sleep(3);
    std::system("clear");
    std::cout<< "\nDo you want to play again.";
}

void display_status(std::vector<char> incorrect,std::string answer){
        std::system("clear");
        std::cout <<"\nIncorrect Guesses:" ;
        for ( int i=0 ; i <incorrect.size();i++){
            std::cout<< " " <<incorrect[i];
        
        }
        std::cout << "\nCodeword : ";
        for ( int j=0 ; j <answer.size();j++){
            std::cout<< " " <<answer[j];
        
        }
        
}

void display_misses(int misses) {

  if (misses == 0 || misses == 1) {
    
    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /     \\        (  Send help! ) \n";
    std::cout << "             /   0   \\      / `-----------'  \n";
    std::cout << "            /  --|--  \\    /                 \n";
    std::cout << "           /     |     \\                     \n";
    std::cout << "          /     / \\     \\                   \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 2) {
    
    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /  0  \\        (  Send help! ) \n";
    std::cout << "             / --|-- \\      / `-----------'  \n";
    std::cout << "            /    |    \\    /                 \n";
    std::cout << "           /    / \\    \\                    \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 3) {
    
    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /--|--\\        (  Send help! ) \n";
    std::cout << "             /   |   \\      / `-----------'  \n";
    std::cout << "            /   / \\   \\    /                \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 3) {
    
    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /--|--\\        (  Send help! ) \n";
    std::cout << "             /   |   \\      / `-----------'  \n";
    std::cout << "            /   / \\   \\    /                \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 4) {
    
    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /  |  \\        (  Send help! ) \n";
    std::cout << "             /  / \\  \\      / `-----------' \n";
    std::cout << "            /         \\    /                 \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 5) {
   
    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              / / \\ \\        (  Send help! )\n";
    std::cout << "             /       \\      / `-----------'  \n";
    std::cout << "            /         \\    /                 \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 6) {
    
    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /     \\        (  Send help! ) \n";
    std::cout << "             /       \\      / `-----------'  \n";
    std::cout << "            /         \\    /                 \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }

}

void game(){
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
    
    std::cout<<"\n"<< answer;
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


void loop( ){
  int choice;
  do{
    std::cout<< "\n1.Play\n2.Exit\nYour Choice:";
    std::cin >> choice;
    switch (choice)
    {
    case 1:
      game();
      loop();
      break;
    case 2:
      sleep(1);
      std::system("clear");
      exit(0);
      

    
    default:
      std::cout << "Plz enter correct choice";
      break;
    }
  }
  while(choice!=1 || choice!=2);
  
}
