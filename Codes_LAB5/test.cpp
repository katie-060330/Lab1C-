#include "Card.h"
#include "CardsSet.h"
using namespace std;

int main(){
    CardsSet a;
    a.novSet(); 
    a.shuffle();
    // Card b = a.take();

    // Card b(club,7);

    // int c = b.value();
    // cout<<c<<endl;
    // b.write();
    int i; 
    for(i = 0; i < 52; i++ ){
    //!moved set to public to test 
       Card c = a.take();
       int val = c.value();
    //    cout<<"the value is: "<<val<<endl; 
       c.write();
    }

    return 0;  
}