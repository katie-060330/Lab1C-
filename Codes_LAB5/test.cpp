#include "Card.h"
#include "CardsSet.h"
using namespace std;

int main(){
    CardsSet a;
    a.novSet(); 
    a.shuffle();
    int i; 
    // for(i = 0; i < 52; i++ ){
    //!moved set to public to test 
    //    a.set[i].write();
    // }
    return 0;  
}