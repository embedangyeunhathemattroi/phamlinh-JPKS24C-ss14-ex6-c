#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[] = "Hello, chao mung ban da den vs chuong trinh!";
    printf("Chuoi ky tu da cho la: %s\n", str);
    printf("Dem so ky tu trong chuoi va nhap ket qua cua ban: ");
    
	int nguoidungsudung;
    scanf("%d", &nguoidungsudung);
    
	int soluongthuc = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) { 
            soluongthuc++;
        }
    }
    printf("So ky tu la chu cai thuc te chinh la: %d\n", soluongthuc);
    if (nguoidungsudung == soluongthuc) {
        printf("Ban da tra loi dung roi!\n");
    } else {
        printf("Ban sai roi, thu lai di.\n");
    }

    return 0;
}

