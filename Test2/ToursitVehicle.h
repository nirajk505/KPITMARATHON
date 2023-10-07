#ifndef TOURSITVEHICLE_H
#define TOURSITVEHICLE_H
#include"Type.h"

#include<iostream>
class ToursitVehicle
{
private:
    std::string _number;
    Type _type;
    int _seat_count;
    float _booking_charge;

public:
    ToursitVehicle(ToursitVehicle& obj)=default;
    ToursitVehicle( std::string number,Type type,int seat_count, float booking_charge);
     ~ToursitVehicle() {
         std::cout<<"Tourist Vehicle with number"<<_number<<"is destroyed"<<"std::endl";
     }

    std::string number() const { return _number; }

    Type type() const { return _type; }

    int seatCount() const { return _seat_count; }

    float bookingCharge() const { return _booking_charge; }

    friend std::ostream &operator<<(std::ostream &os, const ToursitVehicle &rhs);

    
    
};
std::string DisplayEnum(const Type value);

#endif // TOURSITVEHICLE_H
