#include <iostream>
#include <string>

using namespace std;



class Concept {

    public:
        Concept (string z) {

            setName(z);
            cout << "this is the constuctor running" << endl;
        }
        void setName(string x) {
            name = x;
        }
        string getName() {
            return name;
        }

        
    private:
        string name;

};




int main()
{
    Concept bo("eimai o huan ramon!");
    // bo.setName("einai o tom?");
    cout << bo.getName() << endl;
    Concept bo2("second object");
    cout << bo2.getName() << endl;


    return 0;
}

