#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    ex00();
    return 0;
}

int ex00() {
    int m,f1,f2,f3,maisVelho;
    scanf("%d", &m);
    scanf("%d", &f1);
    scanf("%d", &f2);
    f3 = m-(f1+f2);
    if (f1 < f2) {
        if (f2 < f3) {
            maisVelho = f3;
        }
        else {
            maisVelho = f2;
        }
    }
    else {
        maisVelho = f1;
    }
    printf("%i\n", maisVelho);
    return 0;
}


int ex01() {
    int num,aux,result;
    scanf("%i", &num);
    aux = num / 100;
    num = num % 100;
    result = aux;
    aux = num / 10;
    num = num % 10;
    result = result + aux*10 + num*100;
    printf("%i", result);
    return 0;
}

// 123
// 1 resta 23 -> 1*1
// 2 resta 3 -> 2*10
// 3 resta 0 -> 3*100
// Somando tudo: 1 + 20 + 300 = 321 :D


int ex02() {
    float salmin,kwgasto,kwval,custo,novocusto;
    scanf("%f", &salmin);
    scanf("%f", &kwgasto);
    kwval = salmin/700;
    custo = kwval*kwgasto;
    novocusto = custo*0.9;
    printf("Valor do kW: %.2f\n", kwval);
    printf("Valor a pagar: %.2f\n", custo);
    printf("Valor com desconto: %.2f", novocusto);
    return 0;
}


int ex03() {
    float base,altura,perim,area,diag;
    scanf("%f", &base);
    scanf("%f", &altura);
    perim = (base*2.0) + (altura*2.0);
    area = (base*altura)*1.0;
    diag = sqrt(pow(base, 2) + pow(altura, 2));
    printf("Perimetro: %.2f\n", perim);
    printf("Area: %.2f\n", area);
    printf("Diagonal: %.2f", diag);
    return 0;
}


int ex04() {
    int razao,primeiro,decimo;
    scanf("%i", &razao);
    scanf("%i", &primeiro);
    decimo = primeiro + 9*razao;
    printf("%i", decimo);
    return 0;
}


int ex05() {
    int razao,primeiro,quinto;
    scanf("%i", &razao);
    scanf("%i", &primeiro);
    quinto = primeiro * pow(razao, 4);
    printf("%i", quinto);
    return 0;
}


int ex06() {
    float a,b,x;
    scanf("%f", &a);
    scanf("%f", &b);
    x = (-b)/a * 1.0;
    printf("%.2f", x);
    return 0;
}


int ex07() {
    float nota;
    scanf("%f", &nota);
    if (nota < 5) {
        printf("Insatisfatorio");
    }
    else if (nota < 7) {
        printf("Regular");
    }
    else if (nota < 8) {
        printf("Bom");
    }
    else if (nota <= 10) {
        printf("Otimo");
    }
    return 0;
}


int ex08() {
    float diarian,diariap,p8o,n5o,dif;
    scanf("%f", &diarian);
    diariap = diarian * 0.75;
    p8o = 0.8 * 80 * diariap;
    n5o = 0.5 * 80 * diarian;
    dif = p8o - n5o;
    printf("Valor promocional: %.2f\n", diariap);
    printf("Promocional com 80%% ocupado: %.2f\n", p8o);
    printf("Normal com 50%% ocupado: %.2f\n", n5o);
    printf("Diferenca entre os valores: %.2f", dif);
    return 0;
}


int ex09() {
    float vmax,vmot;
    scanf("%f", &vmax);
    scanf("%f", &vmot);
    if (vmot <= vmax) {
        printf("Motorista respeitou a lei");
    }
    else {
        if (vmot <= (vmax + 10)) {
            printf("Multa de 50 reais");
        }
        else if (vmot <= (vmax + 30)) {
            printf("Multa de 100 reais");
        }
        else {
            printf("Multa de 200 reais");
        }
    }
    return 0;
}


int ex10() {
    int n,v,pos,neg,zero;
    pos=neg=zero=0;
    scanf("%i", &n);
    for (int i=1; i<=n; i++) {
        scanf("%i", &v);
        if (v > 0) {
            pos++;
        }
        else if (v < 0) {
            neg++;
        }
        else {
            zero++;
        }
    }
    printf("%i POSITIVOS\n", pos);
    printf("%i NEGATIVOS\n", neg);
    printf("%i ZEROS\n", zero);
    return 0;
}


int ex11() {
    int div39,div2,div5;
    div39 = div2 = div5 = 0;
    for (int i=1; i<=10; i++) {
        float n;
        scanf("%f", &n);
        int num = (int)n;
        int div = 0;

        if (num%3 == 0 && num%9 == 0) {
            div39++;
            div = 1;
        }
        if (num%2 == 0) {
            div2++;
            div = 1;
        }
        if (num%5 == 0) {
            div5++;
            div = 1;
        }

        if (div == 0) {
            printf("Numero nao divisivel pelos valores\n");
        }
    }
    printf("%i Numeros sao divisiveis por 3 e por 9\n", div39);
    printf("%i Numeros sao divisiveis por 2\n", div2);
    printf("%i Numeros sao divisiveis por 5\n", div5);
    return 0;
}


int ex12() {
    int n,fat;
    float e;
    e=1;
    scanf("%i", &n);
    // RESULTADO correto, mas RESPOSTA errada:
    // for (int i=1; i<=n; i++) {
    // RESULTADO errado, mas RESPOSTA correta:
    for (int i=1; i<n; i++) {
        fat=1;
        for (int f=i; f>=1; f--) {
            fat = fat * f;
            // printf("f = %i\n", f);
        }
        // printf("fat = %i\n", fat);
        e += 1.0/fat;
        // printf("e = %f\n\n", e);
    }
    printf("%.2f", e);
    return 0;
}


int ex13() {
    int controle,entrFilho,filhos,mediaFilhos,quantPessoas,pessoasAte100;
    float entrSalario,salarios,mediaSal,maiorSalario,percent;
    controle = 1;
    maiorSalario = 0;
    pessoasAte100 = 0;
    while (entrSalario >= 0) {
        if (controle == 1) {
            scanf("%f", &entrSalario);
            if (entrSalario >= 0) {
                salarios += entrSalario;
                quantPessoas++;
                if (entrSalario <= 100) {
                    pessoasAte100++;
                }
                if (entrSalario > maiorSalario) {
                    maiorSalario = entrSalario;
                }
            }
            controle = 2;
        }
        else {
            scanf("%i", &entrFilho);
            filhos += entrFilho;
            controle = 1;
        }
    }

    // printf("\n\nChega!\n\n");

    mediaSal = salarios / quantPessoas;
    mediaFilhos = filhos / quantPessoas;
    percent = ((pessoasAte100*1.0)/quantPessoas)*100;

    printf("%.2f\n", mediaSal);
    printf("%i\n", mediaFilhos);
    printf("%.2f\n", maiorSalario);
    printf("%.2f\n", percent);

    return 0;
}


int ex14() {
    int n,a,b,proximo,i;
    a=1;
    b=1;
    scanf("%i", &n);
    if (n>=1)
        printf("%i ", a);
    if (n>=2)
        printf("%i ", b);
    for (i=3; i<=n; i++) {
        proximo = a + b;
        printf("%i ", proximo);
        a = b;
        b = proximo;
    }
    return 0;
}


int ex15() {
    int controle,men10,menig20,mai20;
    float entrCompra,entrVenda,totalCompra,totalVenda,totalLucro;
    controle = 0;
    men10 = menig20 = mai20 = 0;
    while (entrCompra > 0 || controle == 0) {
        if (controle == 0) {
            controle = 1;
        }
        if (controle == 1) {
            scanf("%f", &entrCompra);
            if (entrCompra > 0) {
                totalCompra += entrCompra;
            }
            controle = 2;
        }
        else {
            scanf("%f", &entrVenda);
            totalVenda += entrVenda;
            controle = 1;

            if (entrVenda < entrCompra * 1.1) {
                men10++;
            }
            else if (entrVenda <= entrCompra * 1.2) {
                menig20++;
            } else {
                mai20++;
            }
        }
    }

    // printf("\n\nChega!\n\n");

    totalLucro = totalVenda - totalCompra;

    printf("%i\n", men10);
    printf("%i\n", menig20);
    printf("%i\n", mai20);
    printf("%.2f\n", totalCompra);
    printf("%.2f\n", totalVenda);
    printf("%.2f\n", totalLucro);

    return 0;
}


int ex16() {
    int controle,entrCodigo,c1,c2,c3,c4,nulo,branco;
    controle = 0;
    c1 = c2 = c3 = c4 = nulo = branco = 0;
    while (controle == 0) {
        scanf("%i", &entrCodigo);
        switch (entrCodigo) {
            case 0:
                controle = 1;
                break;
            case 1:
                c1++;
                break;
            case 2:
                c2++;
                break;
            case 3:
                c3++;
                break;
            case 4:
                c4++;
                break;
            case 5:
                nulo++;
                break;
            default:
                branco++;
        }
    }

    // printf("\n\nChega!\n\n");

    printf("%i\n", c1);
    printf("%i\n", c2);
    printf("%i\n", c3);
    printf("%i\n", c4);
    printf("%i\n", nulo);
    printf("%i\n", branco);

    return 0;
}


int ex17() {
    char string[201];
    int tamanho;
    scanf("%s", string);
    tamanho = strlen(string);
    for (int i=0; i < tamanho/2; i++) {
        if (string[i] != string[tamanho-1-i]) {
            printf("nao");
            return 0;
        }
    }
    printf("sim");
    return 0;
}


int ex18() {
    char a,b;
    char string[201];
    scanf(" %c", &a);
    scanf(" %c", &b);
    scanf(" %[^\n]c", string);
    for (int i=0; string[i] != '\0'; i++) {
        if (string[i] == a) {
            string[i] = b;
        }
    }
    printf("string:%s", string);
    return 0;
}


int ex19() {
    char string[201];
    char stringSemEspacos[201];
    int s = 0;
    scanf("%[^\n]c", string);
    for(int i=0; string[i] != '\0'; i++) {
        if(string[i] != ' ') {
            stringSemEspacos[s] = string[i];
            s++;
        }
    }
    stringSemEspacos[s] = '\0';
    printf("string:%s", stringSemEspacos);
    return 0;
}


int ex20() {
    char string[201];
    char palavra[201];
    int p = 0;
    scanf("%[^\n]c", string);
    for(int i=0; string[i] != '\0'; i++) {
        if(string[i] != ' ') {
            palavra[p] = string[i];
            p++;
        } else {
            palavra[p] = '\0';
            printf("%s\n", palavra);
            p = 0;
        }
    }
    if (p > 0) {
        palavra[p] = '\0';
        printf("%s\n", palavra);
    }
    return 0;
}
