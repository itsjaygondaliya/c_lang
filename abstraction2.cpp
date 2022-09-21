#include<iostream>
using namespace std;

/*
		Pointer Object :
			An object which stores address of another object which can be 
		the object of same class or derived class;
		
		- it will be created using asteric symbol (*).
		- it can't be initialized;
		- we can store the address of another object using address of symbol (&objName).
		- all the methodes or attributes will be accessed using arrow (->) instead of dot(.)
		- pointer uses arrow(->) to access because it is compile time process.
		- pointer can access the methodes of derived class only if they are virtual funtion.
		
		Virtual Function :
			- removes ambiguity permenently.
			- revrse the flow of inheritence. accesses the components of derived class.
			
		Abstract class :			
			- a class which cannot be instantiated.
			- we cannot create object of abstract class.
			- it contains pure virtual function.
				Pure Virtual Function :
					- it is created using virtual keyword before returnDataType.
					- it has no body.
					- it is initialized with value 0.
			- the derived class of abstract class will be also abstract if we won't re-incarnate 
			  the pure virtual function in derived class.
*/

//Abstract class
class TopSecret
{
	private:
		string password = "#NoName007";
	public:
		//Pure virtual function
		virtual void key(int n) = 0;
		void getPassword()
		{
			cout << "Your password : " << password << endl;
		}
};

class child : public TopSecret
{
	public:
		//Re-incarnated pure virtual function
		void key(int n)
		{
			cout << "Key is UnLocked XD" << endl;
		}
		void getData()
		{
			getPassword();
		}
};

int main()
{
	child c;
	c.getPassword();
}
