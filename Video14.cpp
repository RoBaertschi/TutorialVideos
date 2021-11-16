#include <iostream>

using namespace std;

class Monster {
public:
    void growl(){
        cout << "Growl!!!" << endl;
    }
    void setName(string name){
        _name = name;
    }
    string getName(){
        return _name;
    }
private:
    string _name;
};

int main(int, char**) {
    Monster monster1;
    monster1.growl();
    monster1.setName("George");

    cout << monster1.getName() << endl;

    system("exit");
    return EXIT_SUCCESS;
}
