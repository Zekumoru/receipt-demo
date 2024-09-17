#pragma once

#include "cart.hpp"

/**
 * @class Receipt
 * @brief Rappresenta uno scontrino basato su un carrello della spesa.
 *
 * Questa classe gestisce la creazione di uno scontrino a partire da un carrello della spesa,
 * fornendo un metodo per stampare le informazioni del carrello.
 */
class Receipt
{
  const Cart &cart; ///< Riferimento al carrello utilizzato per generare lo scontrino

public:
  /**
   * @brief Costruttore della classe Receipt.
   * @param cart Riferimento al carrello utilizzato per generare lo scontrino.
   */
  Receipt(const Cart &cart);

  /**
   * @brief Stampa le informazioni dello scontrino basato sul carrello.
   * Questo metodo produce una rappresentazione testuale dello scontrino,
   * inclusi dettagli sugli articoli e il totale della spesa.
   */
  void print() const;
};
