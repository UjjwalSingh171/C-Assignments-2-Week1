// Ques: WAP for finding the volume of the cylinder by taking radius and height as input.
#include<iostream>
using namespace std;
int main()
{
    int r;
    int h;
    cout<<"Enter radius";
    cin>>r;
    cout<<"Enter height";
    cin>>h;
    float volume = 3.14*r*r*h;
    cout<<volume;
}

// Answer: Volume is 25.12 for height and radius 2