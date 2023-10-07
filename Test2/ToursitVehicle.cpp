#include "ToursitVehicle.h"

ToursitVehicle::ToursitVehicle(std::string number, Type type, int seat_count, float booking_charge)
:_number(number), _type(type),_seat_count(seat_count),_booking_charge(booking_charge)
{
}

std::ostream &operator<<(std::ostream &os, const ToursitVehicle &rhs) {
    os << "_number: " << rhs._number
       << " _type: " <<DisplayEnum(rhs._type)
       << " _seat_count: " << rhs._seat_count
       << " _booking_charge: " << rhs._booking_charge;
    return os;
}

std::string DisplayEnum(const Type value)
{
    if(value==Type::CAB)
    {
        return "CAB";
    }
    else if(value==Type::BUS)
    {
        return "BUS";
    }
    else{
        return "BIKE";
    }
}
