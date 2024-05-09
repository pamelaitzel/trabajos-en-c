#include <stdio.h>
void diferencias_divididas(double x[], double y[], double coef[], int n) {
    for (int i = 0; i < n; i++) {
        coef[i] = y[i];
    }

    for (int j = 1; j < n; j++) {
        for (int i = n - 1; i >= j; i--) {
            coef[i] = (coef[i] - coef[i - j]) / (x[i] - x[i - j]);
        }
    }
}
double polinomio_newton(double x_val, double coef[], double x[], int n) {
    double resultado = coef[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        resultado = resultado * (x_val - x[i]) + coef[i];
    }
    return resultado;
}
int main() {
    double x[] = {1, 2, 3};
    double y[] = {2, 3, 5};
    int n = sizeof(x) / sizeof(x[0]);
    double coef[n];
    diferencias_divididas(x, y, coef, n);
    double x_val = 2.5;
    double resultado = polinomio_newton(x_val, coef, x, n);

    printf("El valor del polinomio en x = %.2f es %.2f\n", x_val, resultado);

    return 0;
}