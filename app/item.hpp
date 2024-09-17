#pragma once

#include <string>

/**
 * @class Item
 * @brief Rappresenta un articolo con nome, prezzo, quantità e tasso di tassazione.
 *
 * Questa classe gestisce le informazioni relative a un articolo, inclusi il nome, il prezzo,
 * la quantità e il tasso di tassazione. Fornisce metodi per ottenere i dettagli dell'articolo
 * e calcolare i prezzi comprensivi di tassazione.
 */
class Item
{
  std::string name; ///< Nome dell'articolo
  double price;     ///< Prezzo unitario dell'articolo
  int quantity;     ///< Quantità dell'articolo
  double taxRate;   ///< Tasso di tassazione applicabile

public:
  /**
   * @brief Costruttore della classe Item.
   * @param name Nome dell'articolo.
   * @param price Prezzo unitario dell'articolo.
   * @param quantity Quantità dell'articolo.
   * @param taxRate Tasso di tassazione applicabile. Il valore predefinito è 0.10.
   */
  Item(const std::string &name, double price, int quantity, double taxRate = 0.10);

  /**
   * @brief Ottiene il nome dell'articolo.
   * @return Nome dell'articolo.
   */
  const std::string &getName() const;

  /**
   * @brief Ottiene il prezzo unitario dell'articolo.
   * @return Prezzo unitario dell'articolo.
   */
  double getPrice() const;

  /**
   * @brief Ottiene la quantità dell'articolo.
   * @return Quantità dell'articolo.
   */
  int getQuantity() const;

  /**
   * @brief Ottiene il tasso di tassazione applicabile.
   * @return Tasso di tassazione.
   */
  double getTaxRate() const;

  /**
   * @brief Calcola il prezzo dell'articolo comprensivo di tassazione.
   * @return Prezzo unitario dell'articolo comprensivo di tassazione.
   */
  double getPriceWithTax() const;

  /**
   * @brief Calcola il totale dell'articolo comprensivo di tassazione.
   * @return Totale dell'articolo comprensivo di tassazione (prezzo unitario con tassazione moltiplicato per quantità).
   */
  double getTotalWithTax() const;
};
