/*Ex2 devoir4 CSI2772A*/


#include <iostream> 
#include "myFile2.h"
using namespace std;
    
    //constructor with 2 parameters
   SetInt::SetInt(int x[], int n){
        elem=new int[n];
        size=n;
        for(int i=0;i<n;i++){
            elem[i]=x[i];
        }
    }
    //copy constructor
    SetInt::SetInt(const SetInt& p){
        size=p.size;
        elem = new int[size];
        for(int i=0;i<size; i++){
            elem[i]=p.elem[i];
        }
       
        
    }
    //destructor
   SetInt::~SetInt(){
        delete[] elem;
    }

    //add method
    void SetInt:: add(int x){
        //if x is not in elem
        if(!contains(x)){
            //create a new array of size+1 and replace it with elem
            int * newElem = new int[size+1];
            for(int i=0;i<size;i++){
                newElem[i]=elem[i];
            }
            //add x to newelem
            newElem[size]=x;
            //delete old array and replace it with new one
            delete[] elem;
            elem =newElem;
            //increase the size of the array
            size++;
        }
    }
    
    void SetInt:: remove(int x){
        //if x is in elem
        if(contains(x)){
            //create a new array of size-1
            int* newElem = new int[size-1];
            //counter to keep track
            int j=0;
            //go through list
            for(int i=0; i<size;i++){
                //if elem[i] is not
                if(elem[i]!=x){
                    //then replace element at j with i this prevents the array from adding unecessary spaces
                    newElem[j++]=elem[i];
                    
                }
            }
            //delete old array replace it with new one and decrease size
        delete []elem;
        elem = newElem;
        size--;
        }

    }
    bool SetInt::contains(int x){
        //for every element is there is an element that is the same as x then return true
        for(int i =0; i<size; i++){
            if(elem[i]==x){
                return true;
            } 
        }
        //else false
        return false;
    }

    bool SetInt:: containsIn(int n, int& set){
        //check if the element at the integer set is equal to the first int and return the bool
        return elem[set]==n;

    }

	int SetInt::nbElem(){
         //returns size of array
         return size;
    }

	int* SetInt::tabElem(){
        //if array is empty return null
        if (size==0){
            return NULL;
        }
        //returns a new dynamocially allocated array with the same elems
         int * set = new int[size];
         for(int i=0;i<size;i++){
            set[i]=elem[i];
         }
         return set;

    }
    


int main() {
    SetInt a; 	// object creation
    int* tab;

    while (a.nbElem() < 5)
    {
        cout << "add an int element" << endl;
        int elem;
        cin >> elem;
        a.add(elem);

    }
    cout << "a contains 10 :" << a.contains(10) << endl;
    cout << "remove 10 " << endl;
    a.remove(10);
    cout << "a contains 10 :" << a.contains(10) << endl;
    cout << "a contains :" << a.nbElem() << " elements " << endl;
    tab = a.tabElem();
    cout << "The elements of a are :" << endl;
    for (int i =0; i<a.nbElem(); i++)
        cout << tab[i] << endl;

    return 0;
}