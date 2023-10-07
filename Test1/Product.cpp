#include "Product.h"

Product::Product(std::string productId, ProductType type, float productPrice, std::string productBrand)
:_productId(productId),_type(type), _productPrice(productPrice),_productBrand(productBrand)
{
}
std::ostream &operator<<(std::ostream &os, const Product &rhs) {
    os << "_productId: " << rhs._productId
       << " _type: " <<DisplayEnum(rhs._type)
       << " _productPrice: " << rhs._productPrice
       << " _productBrand: " << rhs._productBrand;
    return os;
}

std::string DisplayEnum(const ProductType value)
{
    if(value==ProductType::FMCG)
    {
        return "FMCG";
    }
    else if(value==ProductType::PERFUME)
    {
        return "PERFUME";
    }
    else{
        return "APPLIANCES";
    }
}
