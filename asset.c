#include <stdio.h>

struct Asset {
    int id;
    char name[50];
    float price;
};

int main() {
    struct Asset a;

    printf("Enter Asset ID: ");
    scanf("%d", &a.id);

    printf("Enter Asset Name: ");
    scanf("%s", a.name);

    printf("Enter Asset Price: ");
    scanf("%f", &a.price);

    printf("\n--- Asset Details ---\n");
    printf("ID    : %d\n", a.id);
    printf("Name  : %s\n", a.name);
    printf("Price : %.2f\n", a.price);

    return 0;
}
