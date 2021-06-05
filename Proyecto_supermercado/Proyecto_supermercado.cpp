#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <stdio.h>  
#include <windows.h>
# include <time.h>
#include <mysql.h>
#include "Proveedores.h"
#include "Cliente.h"
#include "Puestos.h"
#include "Ventas.h"
#include "Marcas.h"
#include "empleados.h"
#include "gotoxy.h"



using namespace std;

Cliente* clits = new Cliente();
Puestos* pst = new Puestos();
Ventas* supermerc = new Ventas();
Proveedores* provr = new Proveedores();
empleados* empl = new empleados();
Marcas* marc = new Marcas();


int opcion;



void ventas();
void menu();
void crud(string tipo, int opcion);
void mostrarventa();

int main()
{
   

    menu();
    

}

void menu() {
    int opcion;
    system("cls");
   

    string str = "__________MENU__________";

    gotoxy(15, 10);
    cout << str;
    gotoxy(15, 12);
    cout << "1. Ingresar: " << endl;
    gotoxy(15, 14);
    cout << "2. Mostrar: " << endl;
    gotoxy(15, 16);
    cout << "3. Modificar: " << endl;
    gotoxy(15, 18);
    cout << "4. Eliminar: " << endl;
    gotoxy(15, 20);
    cout << "Ingrese opcion: " << endl;
    gotoxy(15, 15);
    cin >> opcion;

    switch (opcion) {
    case 1: crud("INGRESAR", opcion); break;
    case 2: crud("MODIFICAR", opcion); break;
    case 3: crud("ELIMINAR", opcion); break;
    case 4: crud("MOSTRAR", opcion); break;
    }
}

void crud(string tipo, int opcion) {
    system("cls");
    

    int opcion = 0;


    gotoxy(54, 8);
    string str = tipo + " A";

    gotoxy(20, 10);
    cout << "(1) ClienteS " << endl;
    gotoxy(20, 11);
    cout << "(2) Empleados " << endl;
    gotoxy(20, 12);
    cout << "(3) Puestos " << endl;
    gotoxy(20, 13);
    cout << "(4)Productos " << endl;
    gotoxy(20, 14);
    cout << "(5) Marcas  " << endl;
    gotoxy(20, 15);
    cout << "(6) Proveedores" << endl;
    gotoxy(20, 16);
    cout << "(7) Ventas  << endl;
    gotoxy(20, 17);
    cout << "(8) Compras " << endl;
    gotoxy(20, 19);
    cout << "Ingrese opción: " << endl;
    gotoxy(20, 20);
    cin >> opcion;

    switch (opcionC)
    {
        
    case 1:
        switch (opcion)
        {
        case 1: system("cls"); clie->crear(); break;
        case 2: system("cls"); clie->leer(); break;
        case 3: system("cls"); clie->actualizar(); break;
        case 4: system("cls"); clie->eliminar(); break;
        default:
            break;
        }
        break;
        
    case 2:
        switch (opcion)
        {
        case 1: system("cls"); emp->crear(); break;
        case 2: system("cls"); emp->leer(); break;
        case 3: system("cls"); emp->actualizar(); break;
        case 4: system("cls"); emp->eliminar(); break;
        default:
            break;
        }
        break;
        
    case 3:
        switch (opcion)
        {
        case 1: system("cls"); pue->crear(); break;
        case 2: system("cls"); pue->leer(); break;
        case 3: system("cls"); pue->actualizar(); break;
        case 4: system("cls"); pue->eliminar(); break;
        default:
            break;
        }
        break;
        
    case 4:
        switch (opcion)
        {
        case 1: cout << "Ingresar: "; break;
        case 2: cout << "Mostrar: "; break;
        case 3: cout << "Modificar: "; break;
        case 4: cout << "Eliminar: "; break;
        default:
            break;
        }
        break;
        
    case 5:
        switch (opcion)
        {
        case 1: system("cls"); marc->crear(); break;
        case 2: system("cls"); marc->leer(); break;
        case 3: system("cls"); marc->actualizar(); break;
        case 4: system("cls"); marc->eliminar(); break;
        default:
            break;
        }
        break;
     
    case 6:
        switch (opcion)
        {
        case 1: system("cls"); prov->crear(); break;
        case 2: system("cls"); prov->leer(); break;
        case 3: system("cls"); prov->actualizar(); break;
        case 4: system("cls"); prov->eliminar(); break;
        default:
            break;
        }
        break;
        
    case 7:
        switch (opcion)
        {
        case 1: ventas(); break;
        case 2: system("cls"); mostrarventa();  break;
        case 3: system("cls"); supermerc->eliminarventa(); break;
        default:
            break;
        }
        break;
        
    case 8:
        switch (opcion)
        {
        case 1: cout << "Ingresar: "; break;
        case 2: cout << "Mostrar: "; break;
        case 3: cout << "Modificar: "; break;
        case 4: cout << "Eliminar: "; break;
        default:
            break;
        }
        break;
        
    case 9: menu(); break;
    default:
        break;
    }
}

void ventas() {
    string nombre, nit;
    int nofact = 1;

    system("cls");

    gotoxy(5, 3);
    cout << "Fecha: " << supermerc->fecha() << endl;

    supermerc->numerofact();
    

    gotoxy(36, 3); cout << "No. fac: ";

    gotoxy(5, 4); cout << "NIT: ";
    cin >> nit;
    supermerc->buscarcl(nit);
}

void mostrarventa() {

   
    int f;
    gotoxy(5, 4); cout << "factura a actualziar: ";
    cin >> f;

    super->mostrarventa(f);
}
