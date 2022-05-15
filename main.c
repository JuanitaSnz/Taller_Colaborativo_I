#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
void menu();
void properName();
void searchWord();
void countVowels();


int main() {
    menu();
    return 0;
}

void menu(){

    int option;

    char *menu = "****************Bienvenido*****************\n"
                 "1. Convertir cadena a nombre propio  \n"
                 "2. Buscar en la cadena \n"
                 "3. Contar vocales \n"
                 "4. Anio nuevo \n"
                 "5. Llenar caracteres \n"
                 "6. Borrar caracteres \n"
                 "7. Interseccion \n"
                 "8. Eliminar repetidos \n"
                 "9. Desplazamiento \n"
                 "10. Validacion de correo\n"
                 "0. Salir \n"
                 "..............................................\n"
                 "Seleccione una opcion\n";

    do{
        printf(menu);
        scanf("%d",&option);

        switch(option){

            case 1:
                properName();
                break;

            case 2:
                searchWord();
                break;

            case 3:
                countVowels();
                break;
        }



    }while(toupper(option) != 0);
}
//Convertir el contenido de una cadena en nombre propio

void properName() {
    char iText[251];

    printf("Ingrese la cadena a convertir\n" );
    fflush(stdin);
    fgets(iText, 251, stdin);


    bool inside = false;
    for (int i = 0; iText[i] != '\0'; i++)
    {
        if (iText[i] == ' '  ){
            inside = false;
        }
        else{
            if (inside){
                iText[i] = tolower(iText[i]);
            }
            else{
                inside = true;
                iText[i] = toupper(iText[i]);
            }
        }
    }
    printf("La cadena convervida es :\n");
    printf(" %s ",iText);
}

void searchWord(){
    char *iText1[100];
    char *iText2[100];
    char *search = NULL;
    int count=0;

    printf("Ingrese la cadena inicial\n");
    fflush(stdin);
    fgets(iText1,100,stdin);

    printf("Ingrese la cadena que desea comparar\n");
    fflush(stdin);
    fgets(iText2,100,stdin);

    search = strstr(iText1,iText2);
    while(search != NULL){
        count= count+1;
        search = strstr(search+1,iText2);
    }
    printf("Total de coincidencias : %i\n",count);
}


int countingVowels(char *chain);
int countingVowels(char *chain){
    int vowels =0;
    for(int i=0; chain[i] != '\0'; i++){
        char actualVowel = tolower(chain[i]);
        if(actualVowel == 'a' ||
            actualVowel == 'e'||
            actualVowel == 'i'||
            actualVowel == 'o'||
            actualVowel == 'u'
            ){
            vowels++;
        }

    }
    return vowels;
}

void countVowels(){

    char chain[1000];
    printf("Ingrese la cadena\n");
    fflush(stdin);
    scanf("%[^\n]",chain);
    int vowels= countingVowels(chain);
    printf("El numero de vocales encontradas es de : %d\n",vowels);
}
