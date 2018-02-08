#include <iostream>

using namespace std;



class Concept {

    public:
        void just_init() {
            cout << "boom!" << endl;
        }


};




int main()
{
    Concept concept_class; //creation of the object
    concept_class.just_init();

    return 0;
}

