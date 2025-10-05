## Домашнее задание к работе 2
## Условие задачи
После урока 4 ученика решали и отлаживали задачи на компьютере. Первый полностью отладил задачу за № минут (число вводится), все последующие тратили времени на 10 минут больше предыдущего. Сколько компьютерного времени им понадобилось?
 ## 1. Алгоритм и блок-схема
## Алгоритм
1. Начало
2. Объявить константы:
    NUM_STUDENTS = 4 — количество учеников.
    TIME_INCREMENT = 10 — добавочное время для каждого следующего ученика (минут).
3. Задать исходные данные:
    N — время, затраченное первым учеником (минут).
4. Вычислить общее время работы всех учеников:
    total_time = NUM_STUDENTS * N + TIME_INCREMENT * (NUM_STUDENTS - 1 + NUM_STUDENTS - 2 + ... + 1 + 0)
    // Можно упростить: total_time = NUM_STUDENTS * N + 60
5. Вывести результат:
    "Общее время, затраченное всеми учениками: total_time минут"
6. Конец
## Блок-схема
https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=%D0%94%D0%B8%D0%B0%D0%B3%D1%80%D0%B0%D0%BC%D0%BC%D0%B0%20%D0%B1%D0%B5%D0%B7%20%D0%BD%D0%B0%D0%B7%D0%B2%D0%B0%D0%BD%D0%B8%D1%8F.drawio&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0%20%E2%80%94%201%22%20id%3D%22iXvUI6BmAu1V1XBGNnQK%22%3E7ZjdT9swEMD%2FmkgwiSqfTfpIWmB72ITWSaNPk9eYJFISF9f92l%2B%2Fc2wnzkehowM6sQeM7%2Bw723e%2F2Kcazjjf3lC0SD6TCGeGbUZbw5kYtm05vgf%2FuGYnNH7gC0VM00hOqhXT9BeWSlNqV2mEl42JjJCMpYumck6KAs9ZQ4coJZvmtHuSNVddoBh3FNM5yrra72nEEqENbL%2FWf8RpnKiVreFIjORITZYnWSYoIhtN5VwZzpgSwkQv345xxoOn4iLsrveMVhujuGAHGcwedg%2F5p%2Fs42HjDu7vZD%2FOiuLCFlzXKVvLAxsQ0RmUbitYzJpYRWGUrNAFYfIG%2Fs1IaSx1vJ%2BfyrGynAgjHXvAubBRlGc5ITFFuOOEC0zTHDNP22G09EG6SlOHpAs25hw0QBrqE5RlIFnTv0y1WzJQyKdg1ytOMw%2FYNvCz5TvEG2q8kR4WcoixckLtRlIFdY8rwVlPJqN5gArujO5giR%2B2RzLBE3PKkvKmBsQKpSzRYlA5JRuPKdZ1G6MhM%2FkFWnW5W7WEGq4ZRuoZuzLsq0ZDWsGx9lUiRbuiHmkbMhP2YU3DpfgAAwqGp%2FMI2ddfd1c40SpRb51J6477OeGOZAFB4uFNuY5c2g8HgfJ9di0iakPznankAXm%2BDk9%2FEqZI1nKrrUcfJsl%2BKJ3cvT%2Fz8DaAmZW7N%2FvEKMlPj4EpLW2P6PnUrnbB%2FeAzwyaZz5DXS6fRcDv5rXg5B%2F5V%2FKZNRXuPaxT%2F81wLumM3vxwu8bsS914y4%2Blh7Xllx%2BT7x1k7%2Fv7X73lrXfevPyeopoTpfTBFd8loUpHmGlst03owtJasiwnwVEySIDt3dcWHgKXGmj022DWmnpG3KNDOQZtI%2F79dGXFA2e1OyJCs6x4%2BcW74JDNEYs0fmyWjgqFFndxOsJbDv41Q6ijPE0nWzOu9LqlzhlqT87aguB3dPraZciHNLK72abjtqF31my5EITMdRyVh17COw66vxjsOuwscd%2BjpAAxMWewwiLmg3yVEQPx9I%2B0AgnZMGsrrgjgXSdl8ZyL4i8R3cg86B2Kki4ES5c52%2FxJ3TfmlfmjvvfXKneHoSvOC0uPPa1fkzuXPbZX4b4GdzB2L9q5yYXv%2B26Vz9Bg%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E
## 2. Реализация программы
#include <stdio.h>
#include <locale.h>
int main() 
{
    setlocale(LC_CTYPE, "RUS");
    int N = 15; 
    printf("Общее время, затраченное всеми учениками: %d минут\n", 4 * N + 60);
    return 0;
}
## 3. Результаты работы программы
Общее время, затраченное всеми учениками: 120 минут
## 4. Информация о разработчике
Якубова Арина Андреевна бИД-251
