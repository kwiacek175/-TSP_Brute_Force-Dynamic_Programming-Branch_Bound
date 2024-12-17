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










