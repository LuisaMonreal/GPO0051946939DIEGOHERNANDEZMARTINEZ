#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{
    int f, nua, op, op2;
    int f2, nua2;
    int f3, nua3;
    float precio, precio2, precio3;
    string des, cart, nart, clas, gen;
    string des2, cart2, nart2, clas2, gen2;
    string des3, cart3, nart3, clas3, gen3;

    cout << "------DHM VIDEOGAMES------\n";
    cout << "Agregar articulo...............1" << endl;
    cout << "Modificar articulo.............2" << endl;
    cout << "Eliminar articulo..............3" << endl;
    cout << "Lista de articulos vigentes....4" << endl;
    cout << "Limpiar pantalla...............5" << endl;
    cout << "salir..........................6" << endl;

    cin >> op;

    switch (op)
    {
    case 1://Agregar articulo
        // no ocupas dos switch soolo el uso del return main

        
            cout << "Numero del articulo\n";
            cin >> nua;
            cout << "Nombre del articulo\n";
            cin >> nart;
            cout << "Año de lanzamiento\n";
            cin >> f;
            cout << "Clasificacion\n";
            cin >> clas;
            cout << "Caracteristicas\n";
            cin.ignore();
            getline(cin, cart);
            cout << "Descripcion\n";
            cin.ignore();
            getline(cin, des);
            cout << "Genero\n";
            cin >> gen;
            cout << "Precio\n";
            cin >> precio;
// falto calcular el iva u el total con iva
            // iva=precio*.16
            //cout<<iva
            //total=precio+iva;
            //cout<<total
            return main();

        break;

    case 2://Modificar articulo
        break;

    case 3://Eliminar articulo
        break;

    case 4://Lista de articulos
        break;

    case 5://Limpiar pantalla
        system("cls"); 
        return main();
        break;

    case 6:
        cout << "Hasta la proxima!!!\n";
        return 0;

    default:
        cout << "Ingrese una opcion valida\n";
        return main();
    }


}


   
