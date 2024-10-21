#include <cstdlib> 
class CardsSet {
public:
    CardsSet() : number(0) {}
    void novSet();
    void shuffle();
    int numCards() { return number; }
    Card take();
    void put(Card k);
    Card lookIn(int no);
    void empty() { number = 0; }
private:
    Card set[52];
    int number;
};

void CardsSet::novSet(){
    
	
	 int t=0;
	 //for every color and face 
	  for(int i=club; i <= spade; i++){
        //?start at 2 and go up to 14, if there is an ace in the players hand we
        //?should deal with that as an edge case and subtract 13 from the value if it is over and if there is one ace 
	  	for(int j=2;j<= 14; j++){

			set[t] = Card(static_cast<color>(i), j);
	 		t++;

	  	}
	 }
}

void CardsSet::shuffle(){
    Card shuffled[52]; 
    int min  = 0; 
    int max = 51; 
    for(int i = 0; i < 52; i++){
        int randomInRange = min + rand() % (max - min + 1);
        

    }


}