#include<iostream>
#include<string>

using namespace std;

int main(){
string name="";
string Gender="";
cout <<"what is your name?" << endl;
getline (cin>>ws, name);
cout <<"what is your Gender?" << endl;
getline (cin>>ws, Gender);
cout <<"Hello, "<<name<<endl;
if (Gender == "m") {
    cout<<"You are a Clever Man" <<endl;
}
if (Gender == "f") {
    cout<<"You are a Lovely Lady" <<endl;
}
return 0;
}
