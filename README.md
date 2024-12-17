# TSP_Brute_Force-Dynamic_Programming-Branch_Bound

Projekt rozwiązuje problem komiwojażera (TSP, Traveling Salesman Problem) za pomocą trzech algorytmów:

- **Brute Force** (Siłowe rozwiązywanie problemu)
- **Branch & Bound** (Podejście z ograniczeniami i rozgałęzianiem)
- **Dynamic Programming** (Programowanie dynamiczne)

## Opis

Projekt implementuje rozwiązanie problemu komiwojażera, który polega na znalezieniu najkrótszej drogi, która odwiedza każde miasto dokładnie raz i wraca do punktu początkowego. Problem ten jest NP-trudny, dlatego w projekcie użyto trzech popularnych algorytmów, aby znaleźć rozwiązanie:

1. **Brute Force**: Wersja algorytmu siłowego, sprawdzająca wszystkie możliwe permutacje miast. Jest to najprostsze, ale najwolniejsze rozwiązanie.
2. **Branch & Bound**: Algorytm optymalizacyjny, który próbuje ograniczyć przestrzeń rozwiązań, eliminując nieoptymalne ścieżki na wczesnych etapach obliczeń.
3. **Dynamic Programming**: Algorytm oparty na podejściu programowania dynamicznego, który przechowuje wyniki podproblemów, aby uniknąć ponownego obliczania tych samych rozwiązań.

## Struktura Projektu

Projekt zawiera następujące pliki:

- **Menu.cpp / Menu.h**: Zawiera interfejs użytkownika do wybierania opcji i zarządzania działaniem aplikacji.
- **Graph.cpp / Graph.h**: Klasa `Graph` do przechowywania grafu i operacji związanych z wczytywaniem danych grafu.
- **TSP_BF.cpp / TSP_BF.h**: Implementacja algorytmu Brute Force do rozwiązywania problemu TSP.
- **TSP_BB.cpp / TSP_BB.h**: Implementacja algorytmu Branch & Bound do rozwiązywania problemu TSP.
- **TSP_DP.cpp / TSP_DP.h**: Implementacja algorytmu Dynamic Programming do rozwiązywania problemu TSP.
- **myStack.cpp / myStack.h**: Implementacja klasy stosu (do użytku w algorytmach).

## Jak Uruchomić

1. **Klonowanie repozytorium:**

    ```bash
    git clone https://github.com/twoje-repozytorium/TSP_Brute_Force-Dynamic_Programming-Branch_Bound.git
    cd TSP_Brute_Force-Dynamic_Programming-Branch_Bound
    ```

2. **Kompleksowe wymagania:**
    - Projekt jest napisany w C++.
    - Kompilacja: `g++ -o tsp_menu main.cpp Graph.cpp TSP_BF.cpp TSP_BB.cpp TSP_DP.cpp myStack.cpp -std=c++11`
    - Uruchomienie: `./tsp_menu`

3. **Przygotowanie danych wejściowych:**
    - Grafy muszą być zapisane w plikach tekstowych w folderze `data/`.
    - Format pliku: Każdy wiersz reprezentuje krawędź z wagą, np. `0 1 10` (oznacza krawędź między wierzchołkami 0 i 1 o wadze 10).

4. **Uruchomienie programu:**
    - Po uruchomieniu programu, wybierz odpowiednią opcję z menu:
        1. **Wczytaj graf** - Wczytaj graf z pliku.
        2. **Brute Force** - Zastosuj algorytm Brute Force.
        3. **Branch & Bound** - Zastosuj algorytm Branch & Bound.
        4. **Dynamic Programming** - Zastosuj algorytm Dynamic Programming.
        5. **Zakończenie programu**.

## Przykład użycia

Po uruchomieniu programu, menu pozwala na wybór jednej z opcji. Na przykład, po wybraniu opcji 1, użytkownik jest proszony o podanie nazwy pliku zawierającego graf. Następnie, po wczytaniu grafu, użytkownik może wybrać jeden z algorytmów, aby obliczyć najkrótszą trasę.

### Przykład:

