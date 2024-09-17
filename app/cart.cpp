#include "cart.hpp"

void Cart::addItem(Item item)
{
  items.push_back(item);
}

const std::vector<Item> &Cart::getItems() const { return items; }

double Cart::calculateTotal() const
{
  double total = 0;
  for (const auto &item : items)
  {
    total += item.getTotalWithTax();
  }
  return total;
}