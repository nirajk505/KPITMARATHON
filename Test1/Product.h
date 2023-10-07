#ifndef PRODUCT_H
#define PRODUCT_H
#include"ProductType.h"

#include<iostream>

class Product
{
private:
    std::string _productId;
    ProductType _type;
    float _productPrice;
    std::string _productBrand;

public:
Product(Product& obj)=default;
 Product(std::string productId, ProductType type, float productPrice, std::string productBrand);
    ~Product() {
        std::cout<<"Product with id"<<_productId<<"is destroyed"<<"\n";
    }

    std::string productId() const { return _productId; }
    void setProductId(const std::string &productId) { _productId = productId; }

    ProductType type() const { return _type; }
    void setType(const ProductType &type) { _type = type; }

    float productPrice() const { return _productPrice; }
    void setProductPrice(float productPrice) { _productPrice = productPrice; }

    std::string productBrand() const { return _productBrand; }
    void setProductBrand(const std::string &productBrand) { _productBrand = productBrand; }

    friend std::ostream &operator<<(std::ostream &os, const Product &rhs);

    

    
};

std::string DisplayEnum(const ProductType value);

#endif // PRODUCT_H
