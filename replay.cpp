//replay.cpp
//gets the ages input and then displays it

#include <iostream>
using namespace std;

int main()
{
int age[4];     //size of the array is defined
for(int j=0; j<4; j++)
{
cout<< "Enter an age: ";  
cin>>age[j];
}
for(j=0;j<4;j++) //displaying the ages
cout<<"You entered : "<<age[j] <<endl;
return 0;
}
