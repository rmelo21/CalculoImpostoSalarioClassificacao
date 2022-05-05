
#include<stdio.h>
#include<stdlib.h>

int main() {

    float salario, imposto, novoSalario;

    int op;

    printf("\n1 - Para calcular o imposto sobre o salario ");
    printf("\n2 - Para calcular o aumento do salario ");
    printf("\n3 - Para visualizar a classificacao do salario ");
    printf("\n4 - Para finalizar o sistema \n");


    printf("\nDigite sua opcao: ");
    scanf("%d%*c", &op);

    switch (op)
        {
          //calcular imposto
        case 1:
            printf("\nDigite o valor do salario: ");
            scanf("%f%*c",&salario);
            if (salario < 500) {
                    imposto = (salario * 0.05);
                    printf("\nValor do imposto = %f\n", imposto);

            } else if ((salario >= 500) && (salario < 850)) {
                    imposto = (salario * 0.10);
                    printf("\nValor do imposto = %f\n", imposto);

            } else {
                    imposto = (salario * 0.15);
                    printf("\nValor do imposto = %f\n", imposto);

            };
            break;

          //calcular novo salario
        case 2:
            printf("\nDigite o valor do salario: ");
            scanf("%f%*c",&salario);

            if (salario < 449) {
                    novoSalario = (salario + 100);
                    printf("\nValor do novo salario = %f\n", novoSalario);

            } else if ((salario >= 450) && (salario < 749)) {
                    novoSalario = (salario + 75);
                    printf("\nValor do novo salario = %f\n", novoSalario);

            } else if ((salario >= 750) && (salario <= 1499)) {
                    novoSalario = (salario + 50);
                    printf("\nValor do novo salario = %f\n", novoSalario);

            } else {
                    novoSalario = (salario + 25);
                    printf("\nValor do novo salario = %f\n", novoSalario);
            };

            break;


          // classificar salario
        case 3:
            printf("\nDigite o valor do salario: ");
            scanf("%f%*c",&salario);

            if (salario < 700) {
                    printf("\nMal remunerado");

            } else {
                    printf("\nBem remunerado");

            };
            break;

        case 4:
            printf("sair");
            break;

        default:
            printf("Opcao invalida!!");
            break;
        }


    getchar();
    return 0;


}
