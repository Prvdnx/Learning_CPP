 #include <iostream>

 using namespace std;

 class Animal
 {
    public:
        string species;
        static int total; // can only be initialised outside the class
        const string planet = "Earth"; // a "const" variable can be init within the class

        Animal(string animal_species)
        {
            species = animal_species;
            total++;
        }

        ~Animal()
        {
            total--;
        }
 };

 int Animal::total = 0;  // Animal::total (static int total) variable iniialisation
 
int main()
{
    Animal *lion = new Animal("lion");
    Animal *tiger = new Animal("tiger"); 

    cout << "Lion: " << lion->species << endl;
    cout << "Tiger: " << tiger->species << endl;
    cout << "Total: " << Animal::total << endl;

    cout << "Planet: " << lion->planet << endl;

    Animal *bear = new Animal("bear");
    cout << "Bear: " << bear->species << endl;
    cout << "Total: " << Animal::total << endl; // Best practice
    //cout << "Total: " << tiger->total << endl; // it works but not the best practice

    delete lion; // needs a destructor to work properly and reduce the "total"

    cout << "Total: " << Animal::total << endl;

    delete tiger;
    delete bear;

    cout << "Total: " << Animal::total << endl;
    
    return (0);
}
 