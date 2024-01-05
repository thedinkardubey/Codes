#include <iostream>
#include <cstdlib>

class Human
{
protected:
    int age = 696;

public:
    int height = 6.9;

private:
    int weight = 69;

public:
    void getweight()
    {
        std::cout << "Weight is: " << weight << std::endl;
    }
    void getage()
    {
        std::cout << "Age is: " << age << std::endl;
    }
};

/*    Public    */

class Male: public Human{
    public:
    int vision;
};

/*    Private    */

// class Male: private Human{
//     public:
//     int vision;
//     void getage(){
//         std::cout<<"Age is: "<<age<<std::endl;
//     }
//     void getheight(){
//         std::cout<<"Height is: "<<height<<std::endl;
// }};

/*    Protected    */

// class Male : protected Human
// {
// public:
//     int vision;
//     void getage()
//     {
//         std::cout << "Age is: " << age << std::endl;
//     }
//     void getheight()
//     {
//         std::cout << "Height is: " << height << std::endl;
//     }
// };


int main()
{
    system("clear");
    Male m1;
    Human h1;

    /*   Public   */
    m1.getage(); // Public-> accessible because inherited publically.
    m1.getweight(); // Public-> accessible because inherited publically.
    // m1.age; // Protected-> inaccessible because protected it is a data member
    // m1.weight; // N.A-> inaccessible because private it is a data member
    m1.height; // Public-> accessible because inherited publically.
    m1.vision; // Public-> accessible because inherited publically.
    
    /*   Private   */

    // // m1.height; // Private-> not accessible like this we have to use getter in parent class to access it So,
    // m1.getheight(); // Public-> accessible in child class since it is a public member after being inherited as private it is now private in child class.
    // // m1.getweight(); // N.A-> not accessible because it is not accessible in child class.
    // h1.getweight(); // Private-> accessible in base class since it is a private memeber of the same class.
    // h1.getage();    // Protected-> accessible in base and child class since it is a protected member.
    // m1.getage();    // Private-> accessible in base and child class since it is a protected member , but function defined in the child class not work if only base class contains the function.
    

    /*   Protected   */
    // //m1.getweight(); // N.A-> not accessible because it is not accessible in child class.
    // h1.getweight(); // Private-> accessible in base class since it is a private memeber of the same class.
    // h1.getage();    // Protected-> accessible in base and child class since it is a protected member.
    // m1.getage();    // Protected-> accessible in base and child class since it is a protected member , but function defined in the child class not work if only base class contains the function.
    // m1.getheight(); // Protected-> accessible in base and child class since it is a protected member.


    return 0;
}