#include <iostream>
#include <list>
using namespace std;

class teacher{
    private:
        string _legacy;
        string _name;
        string _surname;
        list<string> _assignments;

    public:
        teacher(string legacy, string name, string surname, string assignment){
            _legacy = legacy;
            _name = name;
            _surname = surname;
        }

};
