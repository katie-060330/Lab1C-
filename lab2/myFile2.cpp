/*myFile2.cpp : Ex2 a2 CSI2372A*/

#include "myFile2.h"

int main() {
	int myArray[sizeArray] = { 2,4,88,20,3,55,87,134,2,5 };

	cout << "Displaying the unsorted array :" << endl;
	for (int i = 0; i < sizeArray; i++) {
		cout << myArray[i] << " ";
	}
	cout <<  endl << endl;
	sort(myArray, sizeArray);
	cout << "Displaying the sorted array :" << endl;
	for (int i = 0; i < sizeArray; i++) {
		cout << myArray[i] << " ";
	}
	cout << endl;
}

void sort(int a[], int size)
{
	for(int i = 1; i < size; i++){
		//! assigning the key to the second element of the code
		int key = a[i]; 
		//! the numbers we are comparing to start on less then the key 
		int j = i-1; 

		while(key < a[j] && j >=0){
			//? while the key is smaller and we are in range of the array we

			//*we double up the number that we are moving over ex 591 would become 599 then 559 
			a[j+1] = a[j]; 
			--j;
		}
		//*we assing the index of oduble up to be the key comleting the insetion sort 
		a[j+1] = key;  
	}


}