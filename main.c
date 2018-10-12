#include <stdio.h>

int main() {

    enum dni {po=10, ni, wt, sr, czw, pi, so};
    enum dni dzien_tygodnia;
    dzien_tygodnia = czw;
    printf("%i\n", dzien_tygodnia);

}