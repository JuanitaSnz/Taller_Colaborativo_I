#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

void menu();
void properName();
void searchWord();
void countVowels();
void newYearCalculator();
void fillCharacters();
void deleteCharacters();
void intersection();
void deleteRepeated();
void displacement();
void validateEmail();
void options();


int main() {
    menu();
    return 0;
}


void menu(){

    int option;

    do{
        options();

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
            case 4:
                newYearCalculator();
                break;

            case 5:
                fillCharacters();
                break;
            case 6:
                deleteCharacters();
                break;
            case 7:
                intersection();
                break;
            case 8:
                deleteRepeated();
                break;

            case 9:
                displacement();
                break;

            case 10:
                validateEmail();
                break;

            case 0:
                printf("Saliendo\n");
                break;

            default:
                printf("Opcion no valida\n");
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

void newYearCalculator(){
    // Se inicializa today con los segundos transcurridos desde 1970 segun el tiempo UNIX
    time_t today = time(NULL);
    // Se restan los segundos transcurridos desde 1970 hasta año nuevo con el valor de today segun el tiempo UNIX
    time_t diference = 1672531200 - today;
    // Se convierten los sgundos en dias, horas y minutos
    long long int days = diference / 60 / 60 / 24;
    long long int hours = diference / 60 / 60;
    long long int minutes = diference / 60;
    printf("Faltan: %lld dia(s) para a%co nuevo\n"
                  "Faltan: %lld hora(s) para a%co nuevo\n"
                  "Faltan: %lld minuto(s) para a%co nuevo\n"
                  , days, 164, hours, 164, minutes, 164);
}

void insertString(char *cadena, char *caracter, int cantidad, int posicion);

void insertString(char *cadena, char *caracter, int cantidad, int posicion){

    char cadenaSuplente[100] = "";
    char cadena2 [100] = "";
    char cadena3 [100] = "";
    char cadenaInicial[100] = "";

    //se establece la cadena que entro a la una nueva cadena
    strcpy(cadenaSuplente, cadena);

    //Se genera la cadena que contiene la cantidad de veces que se desea repetir el caracter
    for (int i = 0; i < cantidad; ++i) {

        cadena3[i] = *caracter;
        cadena2[i] = *cadena3;

    }

    //Se posiciona la nueva cadena al inicio de la cadena ingresada inicialmente por el ususario
    if(posicion == 1){

        strcpy(cadenaInicial, cadena2);
        strcat(cadenaInicial,cadenaSuplente);
        printf("cadena afuera: %s" , cadenaInicial);

    }else{

        //Se posiciona la nueva cadena al final de la cadena ingresada inicialmente por el ususario
        strcat(cadenaSuplente,cadena2);
        printf("cadena afuera: %s" , cadenaSuplente);

    }
}
void fillCharacters() {

    printf("Ingrese la cadena de caracteres\n");
    char *cadena[100];
    scanf(" %[^\n]",cadena);

    printf("Ingrese el caracter que desea repetir en la cadena\n");
    char *caracter[100];
    scanf("%s", caracter);


    printf("Ingrese cantidad de veces a repetir el caracter\n");
    int cantidad;
    scanf("%i", &cantidad);

    printf("1. Inicio\n");
    printf("2. Final\n");
    int posicion;
    scanf("%i", &posicion);

    insertString(cadena, caracter, cantidad, posicion);

}

void developDeleteCharacters(char *cadena, char *caracter);

void developDeleteCharacters(char *cadena, char *caracter) {

    short int i = 0,j = 0,k = 1;
    //Se recorre la cadena caracter por caracter
    while (cadena[i]){
        k = 1;
        int indice = 0;
        //Se recorre el caracter ingresado
        while (caracter[indice]){
            //Se compara si el caracter de la cadena es equivalente a al caracter entrante no se agrega
            if(cadena[i] == caracter[indice]){
                k=0;
            }
            indice++;
        }
        //Se genera la nueva cadena sin el caracter indeseado
        if (k){
            cadena[j] = cadena[i];
            j++;
        }
        i++;
    }
    //Se agrega el ultimo caracter
    cadena[j] = 0;

    printf("Nueva cadena: '%s'\n", cadena);

}

void deleteCharacters() {

    char* cadena[100];
    char* caracter[100];

    printf("Ingrese una cadena de texto\n");
    fflush(stdin);
    fgets(cadena,45,stdin);

    printf("Ingrese el caracter a borrar\n");
    fflush(stdin);
    fgets(caracter,20,stdin);

    developDeleteCharacters(cadena,caracter);

}

void developIntersection(char* cadena1, char* cadena2);

void developIntersection(char* cadena1, char* cadena2 ){

    char cadenaInicial[100] = "";
    char intersection[100] = "";
    char* b ;
    int a = 0;

    //Se recorre la primera cadena
    for (int i = 0; i < strlen(cadena1); ++i) {

        //Se recorre la segunda cadena
        for (int j = 0; j < strlen(cadena2); ++j) {

            //Se compara si las letras de la cadena2 es igual a la cadena1
            if(cadena1[i] == cadena2[j]){

                // Si el caracter es igual se almacena el caracter en *b
                *b = cadena2[j];

                //Si verifica si el caracter esta o no esta en el vector cadenaInicial
                if(strchr(cadenaInicial,*b) == NULL){

                    //se agrega el caracter al vector cadenaInicial
                    strcat(cadenaInicial, b);

                }

            }

        }

    }

    //se guarda la informacion de cadena inicial en el vector Intersection
    strcat(intersection, cadenaInicial);
    printf("Interseccion de la cadena: %s \n", intersection);

}

void intersection() {

    printf("Ingrese la primera cadena de caracteres\n");
    char *cadena1[100];
    scanf(" %[^\n]",cadena1);

    printf("Ingrese la segunda cadena de caracteres\n");
    char *cadena2[100];
    scanf(" %[^\n]",cadena2);

    developIntersection(cadena1, cadena2);

}

void deleteRepeated(){
    // Inicializamos el parametro de tamaño, aun arreglo de carácter para la palabra o cadena y un craácter como auxiliar
    int size;
    char word[100];
    char aux;
    printf("ingrese una palabra con caracteres repetidos:\n");
    // Se limpia el buffer del sistema
    fflush(stdin);
    // Usamos la funcion fgets() para leer la palabra o cadena ingresada por teclado
    fgets(word,100,stdin);
    // Se calcula el tamaño de la palabra con la funcion strlen()
    size = strlen(word);

    // Se realizan dos for para comparar cada carácter de la palabra o la cadena reemplazandola con un espacion en vacio
    // dejando el ultimo carácter comparado
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            if(i != j){
                if(word[j] == word[i]){
                    word[i] = ' ';
                }
            }
        }

    }

    // Se realiza un ordenamiento de tipo burbuja por su optimizacion y eliminar los espacion vacios
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < (size - 1); ++j) {
            // Si la pocicion actual de la palabra o la cadena esta vacia se reemplaza con el siguiente carácter
            if(word[j] == ' ' && word[j+1] != ' '){
                aux = word[j];
                word[j] = word[j+1];
                word[j+1] = aux;
            }
        }
    }

    // Se imprime en pantalla la palabra o cadena sin caracteres repetidos
    printf("Palabra sin caracteres repetidos:\n");
    for (int i = 0; i < size; ++i) {
        printf("%c",word[i]);
    }
}

void displacement() {
    // Se inicializa el parametro para escojer una opcion, un char para ingresar una palabra y una char como auxiliar
    int op;
    int size;
    char word[100];
    char aux[100];

    printf("Ingrese una palabra\n");
    fflush(stdin);
    fgets(word, 100, stdin);
    size = strlen(word);

    printf("A que lado decea desplazar un caracter\n"
                  " 1. Ultimo caracter al comienzo de la izquierda\n"
                  " 2. Primer caracter al final de la derecha\n");

    scanf("%d", &op);

    if(op == 1){
        // Se asigna la pocicion de el ultimo caracter de la palabra como primero en el primero en aux
        aux[0]=word[(size-2)];
        // Se recorre un ciclo desde 1 hasta una pocicion anterior del ultimo carcter de la palabra
        for (int i = 1; i < (size-1); ++i) {
            // Se asigna la pocicion del caracter de aux con el anterior de la palabra
            aux[i]=word[i-1];
        }
        printf("La palabra con la ultima letra al comienzo es: %s\n",aux);
    }else if(op == 2){
        // Se asigna la pocicion de el ultimo caracter de aux comoel primero de la palabra
        aux[(size-2)]=word[0];
        // se recorre un ciclo desde 0 hasta 2 pociciones antes del ultimo caracter de la palabra
        for (int i = 0; i < (size-2); ++i) {
            // Se asigna la posicion del caracter en aux con el caracter de la posicion siguente de la palabra
            aux[i]=word[i+1];
        }
        printf("La palabra con la primera letra al final es: %s\n",aux);
    }else{
        printf("Opcion invalida\n");
    }

}

void validateEmail() {

    // Se inicializan los carcteres de eMail y de validacion de "@" y "."
    char eMail[100];
    char* atValidation;
    char* pointValidation;

    // Se solicita el ingreso del correo
    printf("Ingrese su correo electronico\n>>");
    fflush(stdin);
    fgets(eMail, 100, stdin);

    // Se comprueba que exista el caracter "@" en el eMail ingresado
    for (int i = 0; i <= strlen(eMail); i++) {
        atValidation = strchr(eMail, '@');
        if (atValidation != NULL) {
            break;
        }
    }
    // Se comprueba que exista el caracter "." en el eMail ingresado
    for (int i = 0; i <= strlen(eMail); i++) {
        pointValidation = strchr(eMail, '.');
    }

    //se valida que exista el caracter "@"
    if (atValidation != NULL) {

        //Se valida que el caracter "." exista y que este despues del carcter "@"
        if (pointValidation != NULL && pointValidation > atValidation) {
            printf("Correo valido.\n");
        }
        else {
            printf("El correo es invalido\n");
        }
    }
    else {
        printf("El correo es invalido\n");
    }
}

void options(){
    printf("****************Bienvenido*****************\n"
           "1. Convertir cadena a nombre propio  \n"
           "2. Buscar en la cadena \n"
           "3. Contar vocales \n"
           "4. A%co nuevo \n"
           "5. Llenar caracteres \n"
           "6. Borrar caracteres \n"
           "7. Interseccion \n"
           "8. Eliminar repetidos \n"
           "9. Desplazamiento \n"
           "10. Validacion de correo\n"
           "0. Salir \n"
           "..............................................\n"
           "Seleccione una opcion\n", 164);
}





