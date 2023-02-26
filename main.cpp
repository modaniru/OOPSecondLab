//#include <iostream>
//
//class Animal{
//public:
//    int age;
//    void eat(){
//        printf("eat()\n");
//    }
//    Animal(){
//        printf("Animal()\n");
//        age = 0;
//        name = "name";
//        isSick = false;
//    }
//    Animal(int age, std::string name, bool isSick){
//        printf("Animal(int age, std::string name, bool isSick)\n");
//        this->age = age;
//        this->name = name;
//        this->isSick = isSick;
//    }
//    Animal(const Animal& animal){
//        printf("Animal(const Animal& animal)\n");
//        this->age = animal.age;
//        this->isSick = animal.isSick;
//        this->name = animal.name;
//    }
//    ~Animal(){
//        printf("~Animal()\n");
//        printf("\tage = %d\n", age);
//        printf("\tname = %s\n", name.c_str());
//        printf("\tisSick = %d\n", isSick);
//    }
//    bool isSick_();
//private:
//    std::string name;
//protected:
//    bool isSick;
//};
//
//bool Animal::isSick_(){
//    printf("Animal::isSick_()\n");
//    return isSick;
//}
//
//class Cat: public Animal{
//public:
//    Cat(){
//        isSick = false; // имею доступ к этому полю
//        //name = "sda" // нет доступа, из-за private
//    }
//};
//
//int main() {
//    {
//        Animal animal;
//        Animal animal1(1, "name", true);
//        Animal animal2(animal1);
//        animal.age = 2;
//        //animal.name
//        //animal.isSick не могу из-за модификатора доступа private и protected
//        animal.isSick_();
//        animal1.eat();
//    }
//}
