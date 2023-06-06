#include <iostream>
using namespace std;

// Base class
class Animal {
public:
  void speak() {
    cout << "Animal speaks" << endl;
}
    void eat(){
    	cout << "they eat"<<endl;
	}
	void sleep()
	{
		cout<<"they sleeo"<<endl;
	}
  
};

// Derived class
class Dog : public Animal {
public:
  void speak() {
    cout << "Dog barks" << endl;
  }
  void eat(){
  	cout << "dog eat"<<endl;
  }
  void sleep(){
  	cout << "dog sleep" <<endl;
  }
};

int main() {
  Animal animal;
  animal.speak();
  animal.eat();
  animal.sleep();
  
  Dog dog;
  dog.speak();
  dog.eat();
  dog.sleep();
  return 0;
}
