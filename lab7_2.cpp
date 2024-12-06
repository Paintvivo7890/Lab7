#include<iostream>
#include<string> 
using namespace std;

int main(){
    string name, studentID, movie, Day, talk;
    int Gear;
    
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n"; 
    cout << "?????: "; 
    getline(cin, name);
    
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n"; 
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    cin >> studentID;
    
    Gear = stoi(studentID.substr(0, 2)) - 12;
    
    cout << "Fahsai: I think you may be GEAR " << Gear << ". I have a free movie ticket for you.\n"; 
    cout << "Fahsai: Let's go to the cinema together!!!\n"; 
    cout << "Fahsai: What movie do you want to watch?\n"; 
    cin.ignore();  // This is to ignore any remaining newline character in the buffer
    cout << name << ": "; 
    getline(cin, movie);
    
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": "; 
    getline(cin, Day);
    
    cout << "Fahsai: " << Day << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n"; 
    cout << name << ": "; 
    getline(cin, talk);
    
    cout << "Fahsai: 555+ see you " << Day << ". Bye Bye \\(^ ^)/\n";
    
    return 0;
}
