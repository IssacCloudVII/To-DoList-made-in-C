#include <stdio.h>
#include <stdlib.h>
#define MAXNAME 64
struct Tarea
{
    char nombre_tarea[MAXNAME];
    int dia;
    int mes;
    int year;
};
typedef struct Tarea Tarea;

struct nodo_tarea
{
    Tarea data;
    struct nodo_tarea *next;
    struct nodo_tarea *prev;
};
typedef struct nodo_tarea Nodo_tarea;

struct Materia
{
    char nombre_materia[MAXNAME];
    int tareas_pendientes;
};
typedef struct Materia Materia;

struct nodo_materia
{
    Materia data;
    Tarea *tareas_materia;
    struct nodo_materia *next;
};
typedef struct nodo_materia Nodo_materia;

int crear_nodo_materia(Nodo_materia **);

int main()
{
    Nodo_materia *inicio = NULL;
    Nodo_materia *temp = NULL;
    if(crear_nodo_materia(&temp) == 0)
        puts("Error al crear el nodo");
    return 0;
}

int crear_nodo_materia(Nodo_materia **nodo)
{
    *nodo = (Nodo_materia*)calloc(1, sizeof(Nodo_materia));
    if(*nodo == NULL)
        return -1;
    fflush(stdin);
    printf("Introduce el nombre de la materia que quieres agregar: ");
    gets((*nodo) -> data.nombre_materia);
    return 1;
}
