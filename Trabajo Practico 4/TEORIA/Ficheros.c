#include <stdio.h>
int main()
{
	FILE * mesj;
	mesj = fopen("mesj.txt","w");
	fprintf(mesj,"hola profe");
	fclose(mesj);	
	
	
	
    mesj = fopen("mesj.txt", "w");
    char c = 'A';
    fputc(c, mesj);
    fclose(mesj); 
    
    
    mesj = fopen("mesj.txt", "r");
    printf("El archivo dice:\n");
    char caracter;
    while ((caracter = fgetc(mesj)) != EOF) {
        printf("%c", caracter);
    }
    fclose(mesj);
    

}

