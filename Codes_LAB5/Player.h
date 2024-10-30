class Player {
public:
    Player(CardsSet& cardPacket, bool isComputer) : packet(cardPacket), computer
    (isComputer) {}
    int play();
private:
//* the pkayers hand 
    CardsSet inHand;
    //*the refrence to the deck inintalized int the main program 
    CardsSet& packet;
    const bool computer;
    int countPoints();
};

int Player:: play(){
    int cards = 0; 
    Card temp; 
    int points; 
    char answer[3];
	bool continuous = true;
    // if(computer){
    //     while(countPoints() < 17){
    //         inHand.put(packet.take());
    //         temp = inHand.lookIn(cards); 
    //         cout<<"Dealer get a card: ";
    //         temp.write();
    //         points=countPoints();
    //         cout<<"Dealer score is: "<< points << endl;
    //         cards++; 

    //     }

    // }
    // else{

    // }
    inHand.put(packet.take());
    temp = inHand.lookIn(cards); 
    cout<<"Player get a card: ";
    temp.write();
    points=countPoints();
    cout<<"Player score is: "<< points << endl;
    cards++; 
    while(continuous){
        cout << "Any aditional Card? " << endl;
		cin >> answer;
		continuous = answer[0] == 'y';
		if (continuous)
		{
            inHand.put(packet.take());
            temp = inHand.lookIn(cards); 
            cout<<"Player get a card: ";
            temp.write();
            points=countPoints();
            cout<<"Player score is: "<< points << endl;
            cards++;
            
    }
    }
    
}

int Player:: countPoints(){
    int aces = 0;
    int total = 0;
    for(int i = 0; i < inHand.numCards(); i++){
        if(inHand.lookIn(i).value() ==1 && total<21){
            aces++;
            total+=14;
        }
        else{
        total += inHand.lookIn(i).value();
        }
    }
    if(total>21 && aces>0){
        total -= (aces*13);
    }
    return total;

}