#include <stdio.h>
void menu()
{
    printf("\n1. bai 1.1");
    printf("\n2. bai 1.2");
    printf("\n3. bai 1.3");
    printf("\n4. bai 1.4");
    printf("\n5. bai 1.5");
    printf("\n6. bai 1.6");
    printf("\n7. bai 1.7");
    printf("\n8. bai 1.8");
    printf("\n9. bai 1.9");
    printf("\n10. bai 1.10");
}
int main() {
    int lc;
   
    do {
        menu();
        printf("\nMoi ban chon ");
        scanf_s("%d", &lc);
        switch (lc)
        {
        case 1 :
        {
            char name[] = "Trinh Hoang Thai";
        }break;
        }

    } while (lc <= 10);
    return 0;
}