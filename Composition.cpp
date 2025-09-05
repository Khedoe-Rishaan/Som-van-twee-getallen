#include <iostream>
#include <string>
using namespace std;

class Birthday{
    private:
    int day;
    int month;
    int year;
    public:
    Birthday(int d,int m,int y):day(d),month(m),year(y){}
       void printDate(){
            cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
       
};
class Person{
    private:
    string name;
    Birthday bd;
    public:
    Person(string n,Birthday b):name(n),bd(b){}
    void printInfo(){
        cout<<name<<endl;
        bd.printDate();
    }
};

int main(){
    Birthday bd(14,10,2006);
    Person p("Rishaan",bd);
    p.printInfo();
}
