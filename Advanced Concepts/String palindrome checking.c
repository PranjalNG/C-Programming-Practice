#include <stdio.h>
#include <string.h>

int main() {
    char st[100];
    int n, i, j, f = 0;

    printf("Enter any string: ");
    fgets(st, sizeof(st), stdin);

    n = strlen(st);

    for (i = 0, j = n - 2; i < j; i++, j--) {
        if (st[i] != st[j]) {
            f = 1;
            break;
        }
    }

    if (f == 0)
        printf("\nString is palindrome.\n");
    else
        printf("\nNot palindrome.\n");

    return 0;
}
