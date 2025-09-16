#include <iostream>
#include <string>
using namespace std;
/*
class student {
    private:
    int studentnummer;
    int admission_year;
    int age;
    string name;
    
    public:
    student(int st,int ad, int ag, string na):studentnummer(st),admission_year(ad),age(ag),name(na){ };
    void details(){
        cout<<"studentnummer:"<<studentnummer<<endl;
        cout<<"admission_year:"<<admission_year<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"name:"<<name<<endl;
    }
};
int main(){
    student stu(12345, 2023, 20, "Jan");
    stu.details();
    return 0 ;
}
*/


/*Schrijf een klasse Tijdstip met daarin drie private leden van het type int voor de uren, de minuten en de seconden, een constructor met default-argumenten en een public lidfunctie to_string() die de tijd aflevert in het formaat uu:mm:ss, dus bijvoorbeeld 15:05:03 of 14:00:59. Test de klasse in een programma.*/
/*
class Tijdstip{
    private:
    int uren;
    int minuten;
    int seconden;
    public:
    Tijdstip(int ur,int mi,int se):uren(ur),minuten(mi),seconden(se){};
    void to_string(){
        cout<<uren<<":"<<minuten<<":"<<seconden<<endl;
    }
    
    
};
int main(){
    Tijdstip tijd1(15,05,03);
    tijd1.to_string();
}
*/

#include <sstream>  // voor stringstream
#include <iomanip>


class Tijdstip {
private:
    int uren;
    int minuten;
    int seconden;

public:
    // Constructor met default-argumenten
    Tijdstip(int ur = 0, int mi = 0, int se = 0) : uren(ur), minuten(mi), seconden(se) {}

    // Functie die een string teruggeeft in het formaat uu:mm:ss
    string to_string() {
        stringstream ss;
        ss << setw(2) << setfill('0') << uren << ":"
           << setw(2) << setfill('0') << minuten << ":"
           << setw(2) << setfill('0') << seconden;
        return ss.str();
    }
};

int main() {
    Tijdstip tijd1(15, 5, 3);
    cout << tijd1.to_string() << endl;

    Tijdstip tijd2;  // gebruikt default-waarden
    cout << tijd2.to_string() << endl;

    return 0;
}
