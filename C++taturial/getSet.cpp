//
//  getSet.cpp
//  C++taturial
//
//  Created by Kasra Rezaei on 23/07/2025.
//
//#include <iostream>
//
////===================================================
//
//class Car
//{
//public:
//    void park();
//    enum class PowerType
//    {
//        Electric,
//        Gas
//    };
//    
//    enum class Tank
//    {
//        Full,
//        Half,
//        Empty
//    };
//    
//    void setPowerType (PowerType t) {type = t;};
//    void setName (std::string n) {name = n;}
//    std::string getName() {return name;}
//    
//    void setTankStatus (Tank gas) {Tstatus = gas;};
//    Tank getTankStatus() {return Tstatus;};
//    PowerType getPowretype() {return type;}
//    
//private:
//    PowerType type {PowerType::Gas};
//    std::string name = "car";
//    Tank Tstatus {Tank::Half};
//    
//};
//
/////===================================================
//
//class carPark
//{
//public:
//    void setCarName (std::string n) {car.setName(n);};
//    std::string getCarName() {return car.getName();}
//
//private:
//    Car car;
//};
//
//class GasStation
//{
//public:
//    void setGass (Car::Tank g) {
//        if(car.getPowretype() == Car::PowerType::Gas)
//        {
//            car.setTankStatus(g);
//        } else {
//            std::cout << "You can't put gas in Electric vhiecal" << std::endl;
//        };
//    };
//    void getTankS (){
//        if (car.getTankStatus() == Car::Tank::Full)
//        {
//            std::cout << "Tank Full" << std::endl;
//        }
//        else if (car.getTankStatus() == Car::Tank::Half)
//        {
//            std::cout << "Tank Half" << std::endl;
//        }
//        else {
//            std::cout << "Tank empty" << std::endl;
//        };
//    };
//private:
//    Car car;
//    
//};
//
////===================================================
//
//#include <iostream>
//
//int main ()
//{
//    carPark park;
//    park.setCarName("Farz");
//    std::cout << park.getCarName() << std::endl;
//    GasStation gasForCar;
//    gasForCar.setGass(Car::Tank::Half);
//    gasForCar.getTankS();
//    
//}
//
