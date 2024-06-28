#include "include/list.h"

void List::print_menu(){
    int choice;

    cout << "***********************\n";
    cout << "Player 1: " << player1 << " is X \n";
    cout << "Player 2: " << player2 << " is O \n\n\n";
    cout << "1 - Play game.\n";
    cout << "2 - Exit.\n";
    cout << "Enter your choice and press return: ";

    cin >> choice;

    if(choice == 2){
        cout << "...Exiting the program...";
        exit(0);
    }
    if(choice == 1){
        cout << "...Starting Game...";
        play_game();
    }
    else{
        cout << "Sorry choice not implemented yet!!!\n";
    }
    
}

void List::play_game() {
    cout << "\n\n\n\n\n\n\n";
    cout << "****Choose Player To Start****\n";
    cout << "1 - Player 1: " << player1 << "\n";
    cout << "2 - Player 2: " << player2 << "\n";
    cout << "Choose one and press Enter: ";

    int choice;
    cin >> choice;

    if(choice == 1){
        player_1();
    }

    else if(choice == 2){
        player_2();
    }

    else{
        cout << "Choice not implemented.\n\n:(\n\nPlease insert an integer in the options provided\n";
        print_menu();
    }
    
}

void List::print_game(){
    cout << "...Current list...\n";

    cout << "[" << boxes[0] << "]" << "[" << boxes[1] << "]" << "[" << boxes[2] << "]" << "\n";
    cout << "[" << boxes[3] << "]" << "[" << boxes[4] << "]" << "[" << boxes[5] << "]" << "\n";
    cout << "[" << boxes[6] << "]" << "[" << boxes[7] << "]" << "[" << boxes[8] << "]" << "\n";
}//I will not use this in the final project

void List::player_1(){
    cout << "***********************\n";

    print_game();
    char gameLetter = {'X'};

    cout << "Input any non integer to end the Game\n";
    cout << "Select the box you would like to replace with X: ";
    int section;//This will serve as the array 
    cin >> section;
    if(section >= 1 && section <= 9){
        int section_index;
        section_index = section - 1;
        replace(boxes.begin(), boxes.end(), boxes[section_index], gameLetter);
        cout << "Next Player\n";
        cin.clear();
        player_2();
    }
    else{
        cout << "...Invalid entry...";
        cin.clear();
        reset_game();
    }
}

void List::player_2(){
    cout << "***********************\n";

    print_game();
    char gameLetter= {'O'};
    
    cout << "Input any non integer character to end the Game\n";
    cout << "Select the box you would like to replace O: ";
    int section;//This will serve as the array 
    cin >> section;
    if(section >= 1 && section <= 9){
        int section_index;
        section_index = section - 1;
        replace(boxes.begin(), boxes.end(), boxes[section_index], gameLetter);
        cout << "Next Player\n";
        cin.clear();
        player_1();
    }
    else{
        cout << "...Invalid entry...";
        cin.clear();
        reset_game();
    }
}

int List::reset_game(){
    return 0;
}

