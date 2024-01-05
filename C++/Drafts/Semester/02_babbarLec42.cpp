#include<iostream>
#include<cstdlib>
#include</media/Data-D/Codes/C++/Drafts/Semester/03_class.cpp>

class hero
{
    // Property

    //int health; //if there is nothing in the class size of h1 will be 1 in order track the class size= 1 is assigned.
    
    /**    dot operator     */

    // public:
    // int health;
    // char level;

    /**    Properties of the class    */

    int health;
    public:
    char level;

    void printObject(){
        std::cout<<"Health is: "<<this->health<<std::endl;
        std::cout<<"Level is: "<<this->level<<std::endl;
    }
    /**    Getters and Setters    */

    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setLevel(char l){
        level=l;
    }
    void setHealth(int hl, int yourPrivilage){
        if(yourPrivilage==0) // yourPrivilage is 0 for admin and 1 for normal user.
        {
            health=hl;
        }
    }

    /**    Constructors and Destructors    */

    // // Default Constructor
    // hero(){
    //     std::cout<<"Constructor SIR called!!!"<<std::endl;
    // }

    // // Paramaterised Constructor
    // hero(int health, int level){
    //     this->health=health;
    //     this->level=level;
    //     std::cout<<"Health of Steve is: "<<this->health<<std::endl;
    //     std::cout<<"Level of Steve is: "<<this->level<<std::endl;
    //     std::cout<<"Adress of this is: "<<this<<std::endl;
    //     std::cout<<"Parametrized Constructor SIR called!!!"<<std::endl;
    // }

    // // Copy Constructor 
    // hero(hero &temp){
    //     this->health=temp.health;
    //     this->level=temp.level;
    // }

    // ~hero(){
    //     std::cout<<"Destructor SIR called!!!"<<std::endl;
    // }

    
    /**    Static Keyword     **/
    public:
    // Static Member
    static int timeToComplete; // static keyword is used for the property which does not depend on any object but belongs to the class.
    //static Function
    static int giveStatic(){
        //return hero::health; // will not run because static function only operate with static members of the class.
        //return health; // will not run because static function only operate with static members of the class.
        std::cout<<timeToComplete<<std::endl; // this prints the value of timeToComplete.
        return timeToComplete; // this does not print the value.
    }

};

int hero::timeToComplete=66996;

int main()
{
    system("clear");
    // Declaration of the object

    // hero h1;
    // std::cout<<"size: "<<sizeof(h1)<<std::endl;
    // check c1;

    // std::cout<<"size: "<<sizeof(c1)<<std::endl;
    /**    dot operator     */

    // hero h1;
    // h1.health=69;
    // h1.level='A';
    // std::cout<<"health is: "<<h1.health<<std::endl<<"level is: "<<h1.level<<std::endl;
    
    /**    Getters and Setters    */

    // hero ramesh;
    // int yourPrivilage;
    // std::cout<<"Enter your Privilage level: ";
    // std::cin>>yourPrivilage;
    // ramesh.setHealth(69,yourPrivilage);
    // ramesh.setLevel('A');
    // std::cout<<"Health of Ramesh is: "<<ramesh.getHealth()<<std::endl;
    // std::cout<<"Level of Ramesh is: "<<ramesh.getLevel()<<std::endl;
    // std::cout<<"Size of the object Ramesh is: "<<sizeof(ramesh)<<std::endl;// Here it will give size= 8 and if you think size of char+int is equal to 1+4 therefore it would give 5 but it give 8 due to the influence of padding. 

    /**    Static and Dynamic Allocation   */

    // // static allocation
    // hero ramesh;
    // // dynamic allocation
    // hero *suresh=new hero;
    // int yourPrivilage;
    // std::cout<<"Enter your Privilage level: ";
    // std::cin>>yourPrivilage;
    // (*suresh).setHealth(69,yourPrivilage);
    // std::cout<<"Health of Suresh is: "<<(*suresh).getHealth()<<std::endl;
    // // Another way to write the (*suresh).gethealth() is: suresh->gethealth()
    // suresh->setHealth(696,yourPrivilage);
    // std::cout<<"Health of Suresh is (using -> ): "<<suresh->getHealth()<<std::endl;

    /**    Constructors and Destructors    */

    // // object created/declared statically
    // std::cout<<"Hi"<<std::endl;
    // hero ramesh;
    // std::cout<<"Hi How are you after constructor SIR 's calling? "<<std::endl;
    // // object created/declared dynamically
    // hero *suresh= new hero();
    // std::cout<<"Hi How are you after Default constructor SIR 's calling? "<<std::endl;

    // hero *steve= new hero(69);
    // // hero(69);
    // std::cout<<"Hi How are you after Parametrized constructor SIR 's calling? "<<std::endl;
    // //std::cout<<"Health of Steve after the parametrised constructor call is: "<<steve->getHealth()<<std::endl;

    // trying to get the address of steve

    // std::cout<<"Adress of Steve is: "<<&(*steve)<<std::endl;
    // std::cout<<"Adress of Suresh is: "<<&(*suresh)<<std::endl;
    // std::cout<<"Adress of Ramesh is: "<<&ramesh<<std::endl;
    
    /*         Copy Constructor         */
    
    // hero copySteve(*steve);
    // copySteve.printObject();

    // in dynamic allocation you have to manually delete the object after the scope of work
    
    // delete suresh;
    // delete steve;

    // Copy Constructor manual operation

    // hero h1(69,'A');
    // hero h2(h1);

    // Copy assignment operator

    // hero h1(69,'A');
    // hero h2(696,'B');
    // h1.printObject();
    // h2.printObject();
    // h1=h2; // when a=b is used where a & b are the object then h1 gets the values of h2.
    // h1.printObject();
    // h2.printObject();

    // Static Keyword
    hero h1;
    std::cout<<"The timeToComplete a static property of the hero class is: "<<hero::timeToComplete<<std::endl;
    std::cout<<"The timeToComplete a static property of the hero class is: "<<h1.timeToComplete<<std::endl; // will run but not recommended because it is not dependent or it does not belongs to any object.
    hero::giveStatic();

    return 0;
}