#include <iostream>
using namespace std;
#include <cassert> //for assert()

enum color { club, diamond, heart, spade };


class Card {
public:
    Card(color c = club, int v = 1);
    int value() { return val; }
    void write();
private:
    color col;
    int val;
};

/*Constructor*/
Card::Card(color c, int v) {
    assert(v >= 1 && v <= 13); //we use a standard function void assert (int expression)
    //which indicates an error message if the expression is false.
    col = c;
    val = v;
}



void Card::write(){
    color suit;
    switch(suit ){
        case club: 
        std::cout<<"club";break;
        case diamond:
        std::cout <<"diamond";break;
        case heart: 
        std::cout <<"heart";break;
        case spade: 
        std::cout <<"spade";break;
    }

    string valueName;
    if (val == 1) valueName = "Ace";
    else if (val == 11) valueName = "Jack";
    else if (val == 12) valueName = "Queen";
    else if (val == 13) valueName = "King";
    else valueName = std::to_string(val);

    cout<<val<< " of " <<col<<endl; 
}


