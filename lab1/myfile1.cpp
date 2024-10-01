#include "myfile1.h"
int main()
{ 
    cout << "Size in bytes of a character: " << sizeof(char) << endl;
    cout << "Size in bytes of an Integer: " <<sizeof(int) << endl;
    cout << "Size in bytes of a float: " <<sizeof(float) << endl;
    cout << "Size in bytes of a double: " << sizeof(double) << endl;
    cout << "Size in bytes of a short Integer: " <<sizeof( short int) << endl;
    cout << "Size in bytes of an unsigned Integer: " << sizeof(unsigned int) << endl;

    int integer;
    float real;
    char character;

    cout<< "Enter an Integer: " << endl;
    cin >> integer;
    cout<< "number in decimal: " <<integer << endl;
    cout<< "number in octal: " << oct << integer << endl;
    cout<< "number in hex: " << hex << integer << endl;

    cout<< "number in decimal: " << dec <<integer << endl;

    char octal_string[20];
    sprintf(octal_string, "%o", integer);
    cout << "Number in octal: " << octal_string << endl;

    char hex_string[20];
    sprintf(hex_string, "%X", integer); 
    cout<< "number in hex: " << hex_string<< endl;
    
  
    cout<< "Enter a real number: " << endl;
    cin>> real;
    cout<< fixed << setprecision(3)<<real << endl;
    cout<< hexfloat<< real << endl;

    cout<< "Enter a character: "<< endl;
    cin>>character;
    cout<<character << endl;
    cout<< static_cast<int>(character) << endl;

    return 0;

}
