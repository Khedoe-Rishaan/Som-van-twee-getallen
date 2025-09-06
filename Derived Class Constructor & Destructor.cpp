#include <iostream>
using namespace std;
class Mother{
    public:
    Mother(){
        cout<<"Mother ctor"<<endl;
    }
    ~Mother(){
        cout<<"Mother dtor"<<endl;
    }
};
class Daughter:public Mother{
    public:
    Daughter(){
        cout<<"Daughter ctor"<<endl;
    }
    ~Daughter(){
        cout<<"Daughter dtor"<<endl;
    }
};
int main(){
    Daughter d;
}

/*Bij het erven van klassen worden de constructor en destructor van de basisklasse niet geërfd.
Ze worden echter wel aangeroepen wanneer een object van de afgeleide klasse wordt gemaakt of verwijderd.
Om dit gedrag verder uit te leggen, maken we een voorbeeldklasse met een constructor en een destructor.
De constructor van de basisklasse wordt als eerste aangeroepen.
De destructor van de afgeleide klasse wordt eerst aangeroepen en daarna de destructor van de basisklasse.*/
