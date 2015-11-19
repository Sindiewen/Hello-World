#include <iostream>

using namespace std;

void girlpronoun();
void boypronoun();

string name;
string gender;
int age;

int main(int argc, char *argv[]) 
{
	
	
	
	cout << "Hi! What is your name? \n" << endl;
	
	cin >> name;
	
	cout << "Hi "
		 << name
		 << "! How should I address you as?"
		 << endl;
	cin >> gender;
		
		if (gender == "Miss")
		{
			cout << "Ok Miss "
				 << name
				 << "!"
				 << endl;
				
			girlpronoun();
		}
		
		else if (gender == "Mister")
		{
			cout << "Ok Mister "
				 << name
				 << "!"
				 << endl;
				
				boypronoun();
		}
		
		// Woo!
		
}

void girlpronoun()
{
	cout << "How old are you Miss "
		 << name
		 << "?"
		 << endl;
		
		cin >> age;
		
	cout << "Ok! Your name is Miss "
		 << name
		 << ", you are "
		 << age
		 << " Years old! Nice to meet you!"
		 << endl;
}

void boypronoun()
{
	cout << "How old are you Mister "
		 << name
		 << "?"
		 << endl;
		
		cin >> age;
		
	cout << "Ok! Your name is Mister"
		 << name
		 << ", You are "
		 << age
		 << " Years old! Nice to meet you!"
		 << endl;
}









