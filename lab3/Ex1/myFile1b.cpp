/*Ex1b - a3 CSI2372A*/

#include <iostream>
using namespace std;

enum Color { club, diamond, spades, heart };
enum Face { seven, eight, nine, ten, jack, queen, king, ace };

struct Card
{
	Color color;
	Face face;
};
const int handSize=6;
typedef Card Hand[handSize];

/* testPair() function*/
bool testPair(const Hand& h)
{
	//start at position 0 of array
	for(int i=0; i<= handSize; i++){
		//then check every position after that
		for(int j=i+1 ; j<=handSize; j++){

			// of the positions have the same face return true 
		 	 if(h[i].face == h[j].face){
		 	 	return true;
		 	 }

		}
	}
	//else false
	return false;
}


/*Example of main()*/
int main()
{
	bool testPair(const Hand&);
	Hand myHand = { {club,nine}, {diamond, nine}, {spades, ace}, {heart, ten}, {club, jack}, {club,jack}};
	cout << "\nI have at least: " << testPair(myHand) << " pair" << endl; 
	return 0;

}



