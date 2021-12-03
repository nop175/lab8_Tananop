#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    int x;
    string z,y;
    string u;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << "\n";
    cout << "?????: ";
    getline(cin,n);

    cout <<  "Fahsai: Wow!!! " << n << " is a really cool name." << "\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << "\n";
    cout << n << ": ";
    cin >> x;
    cin.ignore();

    cout << "Fahsai: I think you may be GEAR " <<  (x/10000000)-12 << ". I have a free movie ticket for you."<< "\n";
    cout << "Fahsai: Let's go to the cinema together!!!"<< "\n";
    cout << "Fahsai: What movie do you want to watch?" << "\n";

    cout << n << ": ";
    getline(cin,z);
    cout << "Fahsai: So....which day are you free to go with me?" << "\n";
    cout << n << ": ";
    getline(cin,y);
    cout << "Fahsai: " << y << "....that is OK!!! I'm looking forward to watching " << z << " with you." << "\n";
    cout << n << ": ";
    getline(cin,u); 
    cout << "Fahsai: 555+ see you " << y << " . Bye Bye \\(^ ^)/ " ;
    return 0;
}
