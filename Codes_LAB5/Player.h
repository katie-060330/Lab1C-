class Player {
public:
    Player(CardsSet& cardPacket, bool isComputer) : packet(cardPacket), computer
    (isComputer) {}
    int play(Card card);
private:
    CardsSet inHand;
    CardsSet& packet;
    const bool computer;
    int countPoints();
};

int Player:: play(Card card){
    //im not sure about the packet.take()
    //because dont we already take it in the main

    int points =0;
    inHand.put(card);
    cout<<"You get a card: ";
    card.write();
    points=countPoints();
    cout<<"Your score is: "<< points << endl;
    return points;



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