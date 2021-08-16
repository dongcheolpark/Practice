#include <iostream>

using namespace std;

class animal {
public :
	virtual void sound() {};

};
class Dog : public animal {
public:
	void sound() {
		cout<<"bark"<<endl;
	}
};
class Cat : public animal {
public:
	void sound() {
		cout<<"Meow"<<endl;
	}
};

int main() {
	Dog A;
	Cat B;
	animal * C = new Dog();

	C->sound();

	A.sound();
	B.sound();
	return 0;
}



