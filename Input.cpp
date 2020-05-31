#include <iostream>
using namespace std;

int main(){
        string name;//declaring the string variable "name" which will will store the user's name
        cout<<"Enter your name "<<flush;

        cin>>name; //CIN stands for "Character input"
        cout<<"Hello "<<name<<endl;


        int number;//declaring an int variable
        cout<<"Enter a number: ";       //asking for the user to enter a number
        cin>>number;
        cout<<"The number entered is "<<number<<endl;
	
	//flushing the buffer
        int c;
        do{
        c=cin.get();
        } while (c!='\n'&&c!=EOF);


        //waiting for the user to press ENTER
        cin.get();

        return 0;
}

