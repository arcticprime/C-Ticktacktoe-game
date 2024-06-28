#include "include/list.h"

int main(int arg_count, char *args[]) {
    //for (int i =0; i < boxes.size(); i++) {
    //}
    if(arg_count > 2){
        List tickTackToe;
        tickTackToe.player1 = string(args[1]);
        tickTackToe.player2 = string(args[2]);
        cout << "****Welcom Players**** \n";
        tickTackToe.print_menu();
    }
    else{
        cout << "Two user names are required so as the program to run \n Exiting the program...\n";
    }
    return 0;
}