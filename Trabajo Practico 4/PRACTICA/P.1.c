#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct datos {
    char nombre[50];
    char apellido[50];
    int dni;
};

int main() {
    FILE *p1;
    struct datos datos1;
    struct datos datos2; 

    int opcion_usuario = 0;
    int opcion = 0;
    int opcion_orden = 0;

    do {
    	do{
    	system("cls");   
        printf("1. Usuario 1\n");
        printf("2. Usuario 2\n");
        printf("3. Ordenar datos\n");
        printf("4. Fin\n");
        scanf("%d", &opcion_usuario);	
		}while(opcion_usuario<1 || opcion_usuario>4 || opcion_usuario==0);
        
        
        if(opcion_usuario == 3)
        { 
            printf("Ingrese por cual atributo desea ordenar la informacion:\n");
            printf("1. Nombre\n");
            printf("2. Apellido\n");
            printf("3. DNI\n");
            scanf("%d", &opcion_orden);
            
            switch(opcion_orden) {
                case 1: {
                	if(datos1.nombre[0]<datos2.nombre[0])
                	{
                	printf("Ordenado por Nombre:\n");
                    printf("---------------------\n");
                    printf("Nombre: %s\n", datos1.nombre);
                    printf("Apellido: %s\n", datos1.apellido);
                    printf("DNI: %d\n", datos1.dni);
                    printf("---------------------\n");
                    printf("Nombre: %s\n", datos2.nombre);
                    printf("Apellido: %s\n", datos2.apellido);
                    printf("DNI: %d\n", datos2.dni);
                    printf("---------------------\n");
					}
					else
					{
					printf("Ordenado por Nombre:\n");
                    printf("---------------------\n");
                    printf("Nombre: %s\n", datos2.nombre);
                    printf("Apellido: %s\n", datos2.apellido);
                    printf("DNI: %d\n", datos2.dni);
                    printf("---------------------\n");
                    printf("Nombre: %s\n", datos1.nombre);
                    printf("Apellido: %s\n", datos1.apellido);
                    printf("DNI: %d\n", datos1.dni);
                    printf("---------------------\n");
					}
                    
                    break;
                }
                case 2: {
                   if(datos1.apellido[0]<datos2.apellido[0])
                	{
                	printf("Ordenado por Apellido:\n");
                    printf("---------------------\n");
                    printf("Nombre: %s\n", datos1.nombre);
                    printf("Apellido: %s\n", datos1.apellido);
                    printf("DNI: %d\n", datos1.dni);
                    printf("---------------------\n");
                    printf("Nombre: %s\n", datos2.nombre);
                    printf("Apellido: %s\n", datos2.apellido);
                    printf("DNI: %d\n", datos2.dni);
                    printf("---------------------\n");
					}
					else
					{
					printf("Ordenado por Apellido:\n");
                    printf("---------------------\n");
                    printf("Nombre: %s\n", datos2.nombre);
                    printf("Apellido: %s\n", datos2.apellido);
                    printf("DNI: %d\n", datos2.dni);
                    printf("---------------------\n");
                    printf("Nombre: %s\n", datos1.nombre);
                    printf("Apellido: %s\n", datos1.apellido);
                    printf("DNI: %d\n", datos1.dni);
                    printf("---------------------\n");
					}
					
                    break;
                }
                case 3: {
                    if(datos1.dni<datos2.dni)
                	{
                	printf("Ordenado por DNI:\n");
                    printf("---------------------\n");
                    printf("Nombre: %s\n", datos1.nombre);
                    printf("Apellido: %s\n", datos1.apellido);
                    printf("DNI: %d\n", datos1.dni);
                    printf("---------------------\n");
                    printf("Nombre: %s\n", datos2.nombre);
                    printf("Apellido: %s\n", datos2.apellido);
                    printf("DNI: %d\n", datos2.dni);
                    printf("---------------------\n");
					}
					else
					{
					printf("Ordenado por DNI:\n");
                    printf("---------------------\n");
                    printf("Nombre: %s\n", datos2.nombre);
                    printf("Apellido: %s\n", datos2.apellido);
                    printf("DNI: %d\n", datos2.dni);
                    printf("---------------------\n");
                    printf("Nombre: %s\n", datos1.nombre);
                    printf("Apellido: %s\n", datos1.apellido);
                    printf("DNI: %d\n", datos1.dni);
                    printf("---------------------\n");
					}
                    break;
                }
            }
            system("pause");
            system("cls");
            continue;
        }
        
        if (opcion_usuario == 4) {
            break;
        }

        do {
            system("cls");
            if(opcion_usuario==1)
            {
            printf("Usuario 1\n");
			}
			else if(opcion_usuario==2)
            {
            printf("Usuario 2\n");
			}
            printf("1. Ingreso de datos\n");
            printf("2. Busqueda de datos\n");
            printf("3. Fin\n");
            scanf("%d", &opcion);

            switch (opcion) {
                case 1: {
                    system("cls");
                    p1 = fopen("P1.txt", "a+");

                    if (opcion_usuario == 1) {
                        printf("Ingrese su nombre: ");
                        scanf("%s", datos1.nombre);
                        fputs(datos1.nombre, p1);
                        fputs("\n", p1);
                        printf("Ingrese su apellido: ");
                        scanf("%s", datos1.apellido);
                        fputs(datos1.apellido, p1);
                        fputs("\n", p1);
                        printf("Ingrese su DNI: ");
                        scanf("%d", &datos1.dni);
                        fprintf(p1, "%d\n", datos1.dni);
                    } else if (opcion_usuario == 2) {
                        printf("Ingrese su nombre: ");
                        scanf("%s", datos2.nombre);
                        fputs(datos2.nombre, p1);
                        fputs("\n", p1);
                        printf("Ingrese su apellido: ");
                        scanf("%s", datos2.apellido);
                        fputs(datos2.apellido, p1);
                        fputs("\n", p1);
                        printf("Ingrese su DNI: ");
                        scanf("%d", &datos2.dni);
                        fprintf(p1, "%d\n", datos2.dni);
                    }

                    fclose(p1);
                    system("pause");
                    system("cls");
                    break;
                }

                case 2: {
                    system("cls");
                    int cont = 0;
                    int opcion1 = 0;
                    int dni = 0;
                    char nombre[50];
                    char apellido[50];

                    printf("Ingrese que desea buscar:\n1. Nombre\n2. Apellido\n3. DNI\n");
                    scanf("%d", &opcion1);

                    p1 = fopen("P1.txt", "r");

                    switch (opcion1) {
                        case 1: {
                            printf("Ingrese su nombre: ");
                            scanf("%s", &nombre);

                            while (fscanf(p1, "%s %s %d", datos1.nombre, datos1.apellido, &datos1.dni) != EOF) {
                                if (opcion_usuario == 1 && strcmp(datos1.nombre, nombre) == 0) { 
                                    printf("Nombre: %s\n", datos1.nombre);
                                    printf("Apellido: %s\n", datos1.apellido);
                                    printf("DNI: %d\n", datos1.dni);
                                    system("pause");
                                    system("cls");
                                    break;
                                }
								if (opcion_usuario == 2 && strcmp(datos2.nombre, nombre) == 0) {
                                    printf("Nombre: %s\n", datos2.nombre);
                                    printf("Apellido: %s\n", datos2.apellido);
                                    printf("DNI: %d\n", datos2.dni);
                                    system("pause");
                                    system("cls");
                                    break;
                                }
								else
								{
                                    printf("usuario no encontrado\n");
									system("pause");
                                    system("cls");	
								}
                            }

                            fclose(p1);
                            break;
                        }

                        case 2: {
                            printf("Ingrese su apellido: ");
                            scanf("%s", &apellido);

                            while (fscanf(p1, "%s %s %d", datos1.nombre, datos1.apellido, &datos1.dni) != EOF) {
                                if (opcion_usuario == 1 && strcmp(datos1.apellido, apellido) == 0) {
                                    printf("Nombre: %s\n", datos1.nombre);
                                    printf("Apellido: %s\n", datos1.apellido);
                                    printf("DNI: %d\n", datos1.dni);
                                    system("pause");
                                    system("cls");
                                    break;
                                } if (opcion_usuario == 2 && strcmp(datos2.apellido, apellido) == 0) {
                                    printf("Nombre: %s\n", datos2.nombre);
                                    printf("Apellido: %s\n", datos2.apellido);
                                    printf("DNI: %d\n", datos2.dni);
                                    system("pause");
                                    system("cls");
                                    break;
                                }
                                else
								{
                                    printf("usuario no encontrado\n");
									system("pause");
                                    system("cls");	
								}
                            }

                            fclose(p1);
                            break;
                        }

                        case 3: {
                            printf("Ingrese su DNI: ");
                            scanf("%d", &dni);

                            while (fscanf(p1, "%s %s %d", datos1.nombre, datos1.apellido, &datos1.dni) != EOF) {
                                if (opcion_usuario == 1 && datos1.dni == dni) {
                                    printf("Nombre: %s\n", datos1.nombre);
                                    printf("Apellido: %s\n", datos1.apellido);
                                    printf("DNI: %d\n", datos1.dni);
                                    system("pause");
                                    system("cls");
                                    break;
                                } 
								 if (opcion_usuario == 2 && datos2.dni == dni) {
                                    printf("Nombre: %s\n", datos2.nombre);
                                    printf("Apellido: %s\n", datos2.apellido);
                                    printf("DNI: %d\n", datos2.dni);
                                    system("pause");
                                    system("cls");
                                    break;
                                }
                                else
								{
                                    printf("usuario no encontrado\n");
									system("pause");
                                    system("cls");	
								}
                            }

                            fclose(p1);
                            break;
                        }
                    }

                    break;
                }
            }
        } while (opcion != 3);
    } while (opcion_usuario != 4);

    return 0;
}

