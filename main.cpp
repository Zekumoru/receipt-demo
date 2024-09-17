/**
 * @brief Programma per simulare il funzionamento di uno scontrino con input dell'utente.
 * @date Set. 18, 2024
 *
 * Questo programma consente all'utente di inserire articoli in un carrello della spesa,
 * specificando per ciascun articolo il nome, il prezzo, la quantità e, facoltativamente,
 * il tasso di tassazione. Dopo che l'utente ha inserito gli articoli, il programma
 * genera e stampa uno scontrino che riassume i dettagli del carrello, inclusi i prezzi,
 * le quantità e il totale comprensivo di tassazione.
 *
 * Le classi utilizzate includono:
 * - Cart: per gestire la collezione di articoli nel carrello.
 * - Item: per rappresentare un singolo articolo con nome, prezzo, quantità e tassazione.
 * - Receipt: per generare e stampare uno scontrino basato sul carrello.
 */
#include "app/item.hpp"
#include "app/cart.hpp"
#include "app/receipt.hpp"
#include <iostream>

int main()
{
  Cart cart;
  std::string input;
  std::string name;
  double price;
  int quantity;
  double taxRate;
  char addMore;

  std::cout << "Benvenuto allo shop!\n";

  do
  {
    std::cout << "Inserire nome dell'articolo: ";
    std::getline(std::cin, name);

    std::cout << "Inserire il prezzo dell'articolo: ";
    std::getline(std::cin, input);
    price = std::stod(input);

    std::cout << "Inserire la quantità dell'articolo: ";
    std::getline(std::cin, input);
    quantity = std::stoi(input);

    std::cout << "Inserire l'IVA dell'articolo (e.g. 10 for 10\% oppure premere invio per il default di 10%): ";
    std::getline(std::cin, input);
    taxRate = 10;
    if (input.length() > 0)
      taxRate = std::stod(input);

    cart.addItem(Item(name, price, quantity, taxRate / 100));

    std::cout << std::endl;
    std::cout << "L'articolo e' stato aggiunto!\n";
    std::cout << "Vuoi aggiungere un altro? (y/n): ";
    std::getline(std::cin, input);
    addMore = 'N';
    if (input.length() > 0)
      addMore = input[0];

    std::cout << std::endl;
  } while (addMore == 'y' || addMore == 'Y');

  Receipt receipt(cart);
  receipt.print();
  std::cout << std::endl;

  return 0;
}