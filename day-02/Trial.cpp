#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
    //Display in one line using c++
    int length, width, area, perimeter;

    //Prompt and get inputs
    cout<<"please enter length"<<endl;
    cin>>length;
    cout<<"please enter width"<<endl;
    cin>>width;

    //Calculate area and permiteter

    area=length*width;
    perimeter=2*(length + width);

    cout<<"The area is "<<area<<endl;
     cout<<fixed<<setprecision(2)<<"\n";
    cout<<"The perimeter is "<<perimeter<<endl;

    return 0;

}
