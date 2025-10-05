#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_CTYPE, "RUS");
    int N = 15; // Время, затраченное первым учеником

    printf("Общее время, затраченное всеми учениками: %d минут\n", 4 * N + 60);

    return 0;
}