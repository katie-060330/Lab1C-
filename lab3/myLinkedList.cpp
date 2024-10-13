/*Ex2 - a3 CSI2372A*/

#include "myLinkedList.h"

int main()
{
	Evaluation*  first = new Evaluation; 
		cout<<"Enter the student: "; 
		cin>> first->student; 
		cout<<"Enter the grade: "; 
		cin>>first->grade; 
		first->next = nullptr;
	
	do
	{
		int choice; 
		
		cout << endl << endl << "1) Display  of the complete linked list.\n";
		cout << "2) Insert an element\n";
		cout << "3) Remove an element.\n";
		cout << "4) Calculation of the class average.\n";
		cout << "5) Exit the program.\n" << endl << endl;

		cout << "Your choice ??:";
		cin>> choice; 

	
		



		int number; 

		switch (choice)
		{
		case 1: 
		display(first);
			break;
		case 2: 
			cout<<"After which element you want to insert ? (0 for start): "<<endl;
			cin>> number; 
			first = add(first, number);
			break;
		case 3: 
			cout<< "what is the number of the element to delete ?: "<< endl; 
			cin>>number; 
			first = remove(first, number);
			break;
		case 4: average(first);
			break;
		case 5: exit(0);
		default:
			break;
		}
	} while (1);
	return 0;
}



/*
*add() Function*
**/
Evaluation* add(Evaluation* p, int& number)
{
	//*passing a pointer to the first element to an object of type Evaluation
	//! number is passed by refrence and any changes made to the number in the finction will also change the outside
	
	//TODO the question wants us to add the object which p is pointing at in the position of the number the user has inputed 
	
	Evaluation*  toInsert = new Evaluation; 
	Evaluation* first = p; 

		

	cout<<"Enter the student: "; 
	cin>> toInsert->student; 
	cout<<"Enter the grade: "; 
	cin>>toInsert->grade; 
	toInsert->next = nullptr;

	if (number == 0){
		toInsert->next = p->next; 
		return toInsert; 
		
	}
	else{
		for(int i = 0; i < number-1; i++){
			p = p->next; 
			
		}

		toInsert->next = p->next; 
		p->next= toInsert; 
	
	}
	return first; 

}


/**
*remove() Function*
**/

Evaluation* remove(Evaluation* p, int& number)
{
	Evaluation* current = p; 
	Evaluation* newFirst; 
	if (number ==0){
		newFirst = current->next; 
		current->next = nullptr; 
	}
	else{
		for (int i = 0; i < number; i++){
			current = current->next; 
		}
		newFirst = current->next; 
		current->next = nullptr; 
	}
	return newFirst; 
}



/**
*display() Function *
**/
void display(Evaluation* p)
{
	 Evaluation* current = p; 

    while (current != nullptr) {
		std::cout<<"Student: "<<current->student<<" "<<"Grade: "<<current->grade; 
		current = current->next;
}
}



/**
*average() Function *
***/
void average(Evaluation* p)
{
	int sum = 0; 
	int counter = 0; 
	 Evaluation* current = p; 

    while (current != nullptr) {
		sum+= current->grade; 
		counter +=1; 
		current = current->next;
}
cout<< "The class average is: " <<sum/counter; 
}






