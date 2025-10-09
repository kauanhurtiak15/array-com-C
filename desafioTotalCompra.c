# include <stdio.h>

int main(){
    char produto[50]; // Guardar o nome do produto
    float preco;       // Preço unitário
    int quantidade;    // Quantidade comprada
    float total;       // Valor total da compra

    printf("Digite o nome do produto: ");
    scanf("%s",produto);

    printf("Digite o preço unitário: ");
    scanf("%f",&preco);

    printf("Digite a quantidade: ");
    scanf("%d",&quantidade);

    total = preco * quantidade;

    printf("Produto: %s\n",produto);
    
}