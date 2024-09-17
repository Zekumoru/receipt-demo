#pragma once

#include <vector>
#include "item.hpp"

/**
 * @class Cart
 * @brief Rappresenta un carrello della spesa che contiene una collezione di articoli.
 *
 * Questa classe gestisce un insieme di articoli e fornisce metodi per aggiungere articoli
 * al carrello, ottenere l'elenco degli articoli e calcolare il totale della spesa.
 */
class Cart
{
  std::vector<Item> items; ///< Collezione di articoli presenti nel carrello

public:
  /**
   * @brief Aggiunge un articolo al carrello.
   * @param item Articolo da aggiungere al carrello.
   */
  void addItem(Item item);

  /**
   * @brief Ottiene l'elenco degli articoli presenti nel carrello.
   * @return Riferimento costante alla collezione di articoli nel carrello.
   */
  const std::vector<Item> &getItems() const;

  /**
   * @brief Calcola il totale della spesa comprensivo di tassazione per tutti gli articoli nel carrello.
   * @return Totale della spesa comprensivo di tassazione.
   */
  double calculateTotal() const;
};
