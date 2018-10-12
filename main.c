#include <stdbool.h>
#include "stdio.h"

int main() {

    enum dni {po=10, ni, wt, sr, czw, pi, so};

    enum dni dzien_tygodnia;
    bool czy_byl_obecny = true;

    dzien_tygodnia = czw;
    printf("%i\n", dzien_tygodnia);

    printf("%i\n", czy_byl_obecny);

}