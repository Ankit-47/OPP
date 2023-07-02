// Wap to find the volume of cylinder using functions
#include<iostream>
using namespace std;

float volume(float r, float h); // Function declaration

int main()
{
   float pi = 22.0/7, r, h, k;
   cout << "Enter the radius: ";
   cin >> r;
   cout << "Enter the height: ";
   cin >> h;
   k = volume(r, h); // Function call
   cout << "Volume = " << k << endl;
   return 0;
}

float volume(float r, float h) // Function definition
{
   float pi = 22.0/7;
   return pi * r * r * h;
}
