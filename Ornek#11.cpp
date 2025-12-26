/*
	inherited class: Here is a program that uses the B and D classes..	
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;
 
class B{					// define (B) base class ..
	private:
		int i;
    public:
		void set_i (int n);
        int get_i ();
};

class D : public B{			//define (D) derived class ..
	private:
		int j;
	public:
    	void set_j (int n);
    	int mul();
};

	void B :: set_i (int n){	//set value i in base .. 
		i=n;
	}

	int B :: get_i (){		 // return value of i in base
	    return i;
    }

	void D:: set_j (int n){    // set value j in derived .. 
    	j=n;
	}
							// Return values of base's i
	int D :: mul(){			// times derived's
//	derived class can call base class public member function ..
    	return j*get_i ();  
    }

int main ()
{
	D object;
    object.set_i (10);
    object.set_j (4);
    cout << object.mul() << endl;  // diplay 40 ....

	return 0;
}	
