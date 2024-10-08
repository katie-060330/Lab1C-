/*myFile3.cpp : Ex3 a2 CSI2372A*/

#include <iostream>
using namespace std;

int** triangleInf(int n)
{
	//create a pointer of arrays of pointers
	int** triangle = new int*[n];
	for(int i =0; i<n; i++){
		//increase the size of the next array to get a half triangle
		triangle[i]= new int[i+1];
		for(int j = 0; j<=i ;j++){
		// fill with properties of pascal triangle
			if(j==0 || j==i){
				triangle[i][j]=1;
			}
			if(j<i){
				triangle[i][j]=0;
			}
			else{
				triangle[i][j]=(triangle[i-1][j-1]+triangle[i-1][j]);
			}
		} 
	}
	return triangle;
	
}

int main() {
	int** tab;
	const int size = 10;
	tab = triangleInf(size);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << tab[i][j] << " ";
		cout << endl;
	}
	for(int i = 0; i < 10; i++)
	{
		delete tab[i];
	}
	delete tab;
}