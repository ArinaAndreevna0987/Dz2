#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_CTYPE, "RUS");
    int N = 15; // �����, ����������� ������ ��������

    printf("����� �����, ����������� ����� ���������: %d �����\n", 4 * N + 60);

    return 0;
}