#include <iostream>
using namespace std;

class student{
    private:
        string _legacy;
        string _name;
        string _surname;

    public:
        student(string legacy, string name, string surname){
            _legacy = legacy;
            _name = name;
            _surname = surname;
        }

        void to_string(){
            cout << "Student: "+_name+" "+_surname+" Legacy: "+_legacy;
        }
};
