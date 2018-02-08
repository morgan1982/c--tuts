#include <iostream>
#include <string>

using namespace std;



class Concept {

    public:
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
    Concept bo;
    bo.setName("einai o tom?");
    cout << bo.getName() << endl;


    return 0;
}

