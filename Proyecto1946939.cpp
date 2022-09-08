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
        cout << "Agregar 1, 2 o 3 articulos\n";
        cin >> op2;

        switch (op2)
        {
        case 1:
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

            return main();
            break;

        case 2:

            cout << "Ingresa primer articulo\n";

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

            cout << endl<<"Ingresa segundo articulo\n";

            cout << "Numero del articulo\n";
            cin >> nua2;
            cout << "Nombre del articulo\n";
            cin >> nart2;
            cout << "Año de lanzamiento\n";
            cin >> f2;
            cout << "Clasificacion\n";
            cin >> clas2;
            cout << "Caracteristicas\n";
            cin.ignore();
            getline(cin, cart2);
            cout << "Descripcion\n";
            cin.ignore();
            getline(cin, des2);
            cout << "Genero\n";
            cin >> gen2;
            cout << "Precio\n";
            cin >> precio2;

            return main();
            break;
        case 3:
            cout << "Ingresa primer articulo\n";

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

            cout << endl << "Ingresa segundo articulo\n";

            cout << "Numero del articulo\n";
            cin >> nua2;
            cout << "Nombre del articulo\n";
            cin >> nart2;
            cout << "Año de lanzamiento\n";
            cin >> f2;
            cout << "Clasificacion\n";
            cin >> clas2;
            cout << "Caracteristicas\n";
            cin.ignore();
            getline(cin, cart2);
            cout << "Descripcion\n";
            cin.ignore();
            getline(cin, des2);
            cout << "Genero\n";
            cin >> gen2;
            cout << "Precio\n";
            cin >> precio2;

            cout << endl << "Ingresa tercer articulo\n";

            cout << "Numero del articulo\n";
            cin >> nua3;
            cout << "Nombre del articulo\n";
            cin >> nart3;
            cout << "Año de lanzamiento\n";
            cin >> f3;
            cout << "Clasificacion\n";
            cin >> clas3;
            cout << "Caracteristicas\n";
            cin.ignore();
            getline(cin, cart3);
            cout << "Descripcion\n";
            cin.ignore();
            getline(cin, des3);
            cout << "Genero\n";
            cin >> gen3;
            cout << "Precio\n";
            cin >> precio3;

            return main();
            break;

        default:
            cout << "Ingresa una opcion valida\n";
            return main();
        }

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


   