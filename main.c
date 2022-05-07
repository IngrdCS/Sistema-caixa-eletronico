#include<stdio.h>
#include<stdlib.h>


int main(void) {

    // DECLARANDO AS VARIÁVEIS
    int opcaoConsultaOuSaque, opcaoConsultaCCouPoup, opcaoSaqueCCouPoup, validarValorSaqueCC, validarValorSaquePoup, valor, valor2, PaginaInicialSIMouNao;


    // INICIALIZAÇÃO DO SISTEMA
    printf("Bem vindo ao Caixa 24 Horas - by INGRIDCS \n\n");
    printf("1- Consultar saldos\n2- Realizar saques\n\n");
    printf("O que deseja fazer:\n");
    scanf("%d", &opcaoConsultaOuSaque);

    switch(opcaoConsultaOuSaque) {
        // CASO 1 - CONSULTA DE SALDOS
        case 1:
            // CONSULTA CC OU POUPANÇA
            printf("1- Consultar saldo da Conta corrente\n2- Consultar saldo da Poupanca\n");
            scanf("%d", &opcaoConsultaCCouPoup);
            fflush(stdin);


            //SE A CONSULTA FOR DA CC
            if (opcaoConsultaCCouPoup == 1) {

                printf("Seu saldo da Conta Corrente eh: (NUMERO DA CONTA CORRENTE DO CLIENTE)\n");
                fflush(stdin);

                // SE DESEJA ALGO MAIS
                printf("Deseja mais alguma coisa?\n1- SIM\n2- NAO\n");
                scanf("%d", &PaginaInicialSIMouNao);
                //main();

                switch (PaginaInicialSIMouNao) {
                    case 1:
                        main();
                        break;

                    case 2:
                        printf("Obrigada por utilizar nossos servicos!");
                        break;
                }
            }

            // SE A CONSULTA FOR DA POUPANÇA
            if (opcaoConsultaCCouPoup == 2) {
                printf("Seu saldo da Poupanca eh:(NUMERO DA CONTA POUPANCA DO CLIENTE)\n");
                fflush(stdin);

                // SE DESEJA ALGO MAIS
                printf("Deseja mais alguma coisa?\n1- SIM\n2- NAO\n");
                scanf("%d", &PaginaInicialSIMouNao);
                //main();

                switch (PaginaInicialSIMouNao) {
                    case 1:
                        main();
                        break;

                    case 2:
                        printf("Obrigada por utilizar nossos servicos!");
                        break;
                }

            }
            break;



         // CASO 2 - REALIZAR SAQUES

        case 2:
            printf("1- Realizar Saque da Conta Corrente\n2- Realizar Saque da Conta Poupanca\n");
            scanf("%d", &opcaoSaqueCCouPoup);

              // SE O SAQUE FOR PELA CC
            if(opcaoSaqueCCouPoup == 1){
                printf("Quantos reais deseja sacar da Conta Corrente:\n");
                scanf("%d", &valor);
                printf("Confirmar o valor de R$%d :\n1- SIM\n2- NAO\n", valor);
                scanf("%d", &validarValorSaqueCC);
            }
                  //CASO O USUÁRIO QUEIRA SEGUIR COM O SAQUE
            if(validarValorSaqueCC == 1){
                printf("Confirmado o saque de R$%d \nAguarde a contagem das notas\n\n", valor);
                printf("Obrigado por utilizar nossos servicos!");
                system("pause");
            }

                  //CASO O USUÁRIO NÃO QUEIRA SEGUIR COM O SAQUE
            if(validarValorSaqueCC == 2){
                printf("Saque cancelado.\n\n");
                printf("Por favor, tente novamente.\n");
                system("pause");
                main();
            }


            // SE O SAQUE FOR PELA POUPANÇA
            if (opcaoSaqueCCouPoup == 2){
                printf("Quantos reais deseja sacar da Conta Poupanca:\n");
                scanf("%d", &valor2);
                printf("Confirmar o valor de R$%d :\n1- SIM\n2- NAO\n", valor2);
                scanf("%d", &validarValorSaquePoup);
              }

            if(validarValorSaquePoup == 1){
                // CASO O USUÁRIO QUEIRA SEGUIR COM O SAQUE
                printf("Confirmado saque de R$%d \nAguarde a contagem das notas\n\n", valor2);
                printf("Obrigado por utilizar nossos servicos!\n");
                system("pause");
            }

            if(validarValorSaquePoup == 2){
                // CASO O USUÁRIO NÃO QUEIRA SEGUIR COM O SAQUE
                printf("Saque cancelado.\n\n");
                printf("Por favor, tente novamente.\n");
                system("pause");
                main();
            } break;


    }
}

