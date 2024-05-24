#include <stdio.h>

void abb() {
    char str_buffer[100];

    scanf("%s", str_buffer);
    int increment = 0;
    int is_very_long = 0;

    while (*(str_buffer + increment) != '\0') {
        increment++;
        if (increment > 10) is_very_long = 1;
    }

    if (is_very_long) {
        str_buffer[4] = '\0';
        int aux = increment - 2;
        int div = 100;
        int prev = 0;
        int idx = 1;

        while (div !=0) {
            prev = aux / div;
            if (prev == 0 && aux + 2 == increment) {div /= 10; continue;}
            str_buffer[idx] = prev + 48;
            aux = aux - prev * div; 
            div /= 10;
            idx ++;
        }
        
        str_buffer[idx] = str_buffer[increment - 1];
        str_buffer[idx + 1] = '\0';
        printf("%s\n", str_buffer);
    }
    else
        printf("%s\n", str_buffer);

}



int main() {
    int max=0;
    scanf("%d", &max);
    for (int i=0; i<max; i++) {
        abb();
    }
}
