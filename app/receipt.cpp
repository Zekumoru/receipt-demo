#include "receipt.hpp"
#include <iostream>
#include <iomanip>

Receipt::Receipt(const Cart &cart) : cart(cart) {}

void Receipt::print() const
{
  const std::vector<Item> &items = cart.getItems();

  // definire costanti per quanti spazi occupano i caratteri per ogni
  // parte/colonna dello scontrino
  const int qtyN = 3;
  const int itemN = 22;
  const int taxN = 8;
  const int priceN = 17;

  std::cout << "Documento Commerciale\n";
  std::cout << std::string(qtyN + itemN + taxN + priceN, '-') << std::endl;
  std::cout << std::left << std::setw(qtyN + itemN) << "Articolo"
            << std::right << std::setw(taxN) << "IVA"
            << std::setw(priceN) << "Prezzo (EUR)" << '\n';
  std::cout << std::string(qtyN + itemN + taxN + priceN, '-') << std::endl;

  for (const auto &item : items)
  {
    std::cout << std::left << std::setw(qtyN) << item.getQuantity()
              << std::setw(itemN) << item.getName()
              // il meno uno acconto taxN è per offsettare il '%'
              << std::right << std::setw(taxN - 1) << static_cast<int>(item.getTaxRate() * 100) << "%"
              << std::setw(priceN) << std::fixed << std::setprecision(2) << item.getTotalWithTax() << '\n';
  }

  std::cout << std::string(qtyN + itemN + taxN + priceN, '-') << std::endl;
  std::cout << std::left << std::setw(qtyN + itemN) << "Totale:"
            << std::right << std::setw(taxN + priceN) << std::fixed << std::setprecision(2) << cart.calculateTotal() << '\n';
}