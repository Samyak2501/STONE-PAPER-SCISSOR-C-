//
//  main.cpp
//  StonePaperScisor.cpp
//
//  Created by Apple on 28/08/21.
//  Copyright © 2021 samyak jain. All rights reserved.
//

#include <iostream>


int main(int argc, const char * argv[]) {
    // insert code here...
    int user;
    int computer;
    int Upoints =0;
    int Cponints =0;
    char play_again = 'y';

    std::cout << "\n\n                                                  ************************\n";
    std::cout << "                                                  STONE PAPER SCISSOR GAME\n";
    std::cout << "                                                  ************************\n\n\n";

    while(play_again == 'y' || play_again == 'Y'){
    for(int i = 5;i > 0;i--){

    std::cout << "                                            if you want to play stone ✊ then enter 0\n\n";

     std::cout << "                                            if you want to play paper 🖐  then enter 1\n\n";

     std::cout << "                                            if you want to play scissor ✌️ then enter 2\n\n";
    
    std::cout << "Enter your choice: ";
    std::cin >> user;
    
    if (user == 0){
        
        std::cout << "✊ :";

    } else if (user == 1){
        
        std::cout << "🖐:";

    } else if (user == 2){
        
        std::cout << "✌️:";

    } else {
        i++;

        std::cout << "invalid choice";
    }
    
    srand (time(NULL));
    
    computer = rand()%3;
    
    if (computer == 0){
        
        std::cout << " ✊ \n";

    } else if (computer == 1){
        
        std::cout << "🖐\n";

    }else if (computer == 2){
        
        std::cout << "✌️\n";
    }
    
    if (computer == 0 && user == 0){
        
        std::cout << "it's tie\n";

    } else if (computer == 0 && user == 1) {

        Upoints++;

        std::cout << "you win paper cover's stone\n";

    }else if(computer == 0 && user == 2)
    {
        Cponints++;

        std::cout << "you lose stone break's scissor\n";
    } 

    if (computer == 1 && user == 0){

        Cponints++;

        std::cout << "you lose paer cover's stone\n";

    } else if (computer == 1 && user == 1) {
        
        std::cout << "it's tie\n";

    }else if(computer == 1 && user == 2)
    {
        Upoints++;

        std::cout << "you win scissor cut's paper\n";
    } 


    if (computer == 2 && user == 0){

        Upoints++;

        std::cout << "you win stone break's scissor\n";

    } else if (computer == 2 && user == 1) {

        Cponints++;

        std::cout << "you lose scissor cut's paper\n";

    }else if(computer == 2 && user == 2)
    {
        
        std::cout << "it's tie\n";
    } 
    }


std::cout << "\n\n";

    std::cout << "your points: ";    
    std::cout << Upoints;

std::cout << "\n";

    std::cout << "computer points: ";
    std::cout << Cponints;

    std::cout << "\n\n";

if (Upoints < Cponints){

    std::cout << "YOU LOSE THE GAME\n\n";

} else if(Upoints > Cponints){

    std::cout << "YOU WIN THE GAME\n\n";

} else {

    std::cout << "IT'S TIE\n\n";
}
    Upoints=0;
    Cponints=0;

    std::cout<<"Do you wnat to play again y/n: ";
    std::cin>>play_again;    

    }
    
    return 0;
}
