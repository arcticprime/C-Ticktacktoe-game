#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

class List{
    private:
    protected:
    public:
    List(){
        //constructor
    }
    ~List(){
        //Destructor
    }
    string boxes = { '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    string player1;
    string player2;

    void print_menu();
    void play_game();
    void add_x();
    void add_y();
    void print_game();
    void player_1();
    void player_2();
    int reset_game();
};