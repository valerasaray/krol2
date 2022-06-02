#include <stdio.h>

int main()
{   
    FILE *f1;
    file = fopen(f1, "rb");
    
    if (file != NULL) {
        return 1;
    }
    
    for (int i = 0; i < len(file) / 2; i++) {
        fseek(file, i, SEEK_SET);
        int left = getc(file);
        
        fseek(file, i, SEEK_END);
        int right = getc(file);
        
        fseek(file, i, SEEK_SET);
        putc(right, file);
        fseek(file, -(i + 1), SEEK_END);
        putc(left, file);
    }
    
    fclose(file);
    
    return 0;
}
