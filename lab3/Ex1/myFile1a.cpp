/*Ex1a - a3 CSI2372A*/

#include <iostream>
#include <map>
using namespace std;

enum Color { club, diamond, spades, heart };
enum Face { seven, eight, nine, ten, jack, queen, king, ace };

struct Card{
	Color color;
	Face face;
};
// when given a certain color it coverts it to string rather than using its value
//so if it recieves club where originally it would return 0 it changes it to return
// "club" instead
std::ostream & operator<< (std::ostream& os, const Color& color){
	switch(color){
		case club: os << "club"; break;
		case diamond: os << "diamond"; break;
		case spades: os << "spades"; break;
		case heart: os << "heart"; break;
}
return os;
}

// same thing as above but for the faces instead
std::ostream & operator<< (std::ostream& os, const Face& face){
	switch(face){
		case seven: os << "seven"; break;
		case eight: os << "eight"; break;
		case  nine: os << "nine"; break;
		case ten: os << "ten"; break;
		case jack: os << "jack"; break;
		case queen: os << "queen"; break;
		case king: os << "king"; break;
		case ace: os << "ace"; break;
	}
	return os;
}




int main(){
	int totalCards = 32;
	 Card game[totalCards];
	 int t=0;
	 //for every color and face 
	  for(int i=club; i <= heart; i++){
	  	for(int j=seven;j<= ace; j++){
			//create a card in the game that has this colour and this face
	  		game[t].color = static_cast<Color>(i);
			game[t].face= static_cast<Face>(j);
	 	
	 		t++;

	  	}
	 }
	 //just to test that the correct cards are being added to the deck
	 for(int i= 0;  i<totalCards; i++){
		cout<<game[i].color<< " + " << game[i].face<< endl;
	 }
	 return 0; 
	
	
}

