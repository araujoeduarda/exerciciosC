#include <stdio.h>
#include <math.h>

int main() {
    double raio, area, perimetro;
    const double pi = 3.14159;

    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);

    area = pi * pow(raio, 2);
    perimetro = 2 * pi * raio;

    printf("A area do circulo eh: %.2lf\n", area);
    printf("O perimetro do circulo eh: %.2lf\n", perimetro);

    return 0;
}
