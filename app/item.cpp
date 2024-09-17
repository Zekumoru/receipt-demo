#include "item.hpp"

Item::Item(const std::string &name, double price, int quantity, double taxRate)
    : name(name), price(price), quantity(quantity), taxRate(taxRate) {}

const std::string &Item::getName() const { return name; }
double Item::getPrice() const { return price; }
int Item::getQuantity() const { return quantity; }
double Item::getTaxRate() const { return taxRate; }

double Item::getPriceWithTax() const
{
  return price * (1 + taxRate);
}

double Item::getTotalWithTax() const
{
  return getPriceWithTax() * quantity;
}
