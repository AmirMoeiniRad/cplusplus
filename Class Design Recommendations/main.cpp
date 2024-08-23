#include <iostream>

using namespace std;

// All class members are private by default in C++. This means you cannot access them from outside the class.
// A good programming habit for classes in C++ is to define member variables as private.
// Then, define accessor methods to set and get the values of private member vriables.

// A recommended naming convention for classes in C++:
// (1) Start class names with a capital letter.
// (2) Start member variable names with 'its' in order to differentiate them from ordinary non-class variables.
// (3) Use 'camel notation' style for member variables.
// (4) Start method names with a capital letter and use 'pascal notation' for method names.
// (5) Start accessor method names with 'Set' & 'Get'.
class Cat
{
    public:
        // accessor method
        int GetAge() {
            return itsAge;
        }

        // accessor method
        void SetAge(int age) {
            itsAge = age;
        }

        void Meow() {
            cout << "I am a Cat called Frisky.";
            cout << "\nMeow!!!";
        };

    private:
        unsigned int itsAge;
};

int main()
{
    Cat Frisky;
    Frisky.SetAge(8);
    Frisky.Meow();
    cout << "\nI am " << Frisky.GetAge() << " years old.\n";
}
