#include <iostream>

using namespace std;

class intOfArrayManager {
    public:
        bool running = true;
        int arraySize = 0;
        string* products ;
        float* prices ;

    //imprimir lista
    void printsales(){

        for (int i = 0; i < arraySize; i++)
        {
        cout << "producto " << i + 1  << ": " << products[i] << "  valor de: " << prices[i] << endl;
        }
    
    }
    //modificar lista
    void modifySales(){
        string positionToModify = "";
        string newProduct = "";
        float newPrice;

        printsales();
        cout << "ingrese el nombre de producto a modificar: ";
        cin >> positionToModify;

        //crea un contador para que encuentre la palabra s buscar
        for (int i = 0; i < arraySize; i++)
        {
            if (products[i] == positionToModify)
            {
                cout << "ingrese el nuevo producto: ";
                cin >> newProduct;
                cout << "ingrese el nuevo precio: ";
                cin >> newPrice;

                products[i] = newProduct;
                prices[i] = newPrice;
                cout << endl << endl;
                printsales();
            }
        }

    }

    //encuentra una venta por el nombre
    void findSales(){
        string ProductToFind = "";

        printsales();
        cout << endl << "ingrese el nombre del producto que quiere encontrar: ";
        cin >> ProductToFind;

        //crea contador para que encuentre la palabra en la lista
        for (int i = 0; i < arraySize; i++)
        {
            if (products[i] == ProductToFind)
            {
                cout << endl << "el producto " << products[i] << " esta en la posicion " << i + 1 << " y tiene un precio de: " << prices[i] << endl;
            }
        }
    }

    // ventas en el rango establecido
    void salesInRange(){
        float minRange;
        float maxRange;

        printsales();
        cout << "ingrese el rango minimo de precio: ";
        cin >> minRange;
        cout << "ingrese el rango maximo de precio: ";
        cin >> maxRange;

        cout << endl << endl << "las ventas en el rango de " << minRange << " y " << maxRange << " son: " << endl;

        //crea contador para encontrar los products en el rango
        for (int i = 0; i < arraySize; i++)
        {
            if (maxRange >= prices[i] && prices[i] >= minRange)
            {
                cout << products[i] << " valor de: " << prices[i] << endl;
            }
        }
    }

    //total de ventas
    void totalSales(){
        float totalPrice = 0;

        cout << endl << endl;

        //crea contador que hace aumentar el total de precios de cada precio
        for (int i = 0; i < arraySize; i++)
        {
            float pricess = prices[i];
            totalPrice = totalPrice + pricess;
        }
        cout << "el precio total de los productos es de: " << totalPrice << endl;
    }

    // es el menu en el que el usuario elije la opcion que quiere usar
    int userAccion(){
        int userOpcion;
        
        cout << "----------------------------------------------" << endl;
        cout << "sistema de ventas, seleccione una opcion: " << endl << endl;
        cout << "1. Registrar o reiniciar ventas" << endl;
        cout << "2. Mostrar todas las ventas" << endl;
        cout << "3. Modificar una venta" << endl;
        cout << "4. Buscar una venta" << endl;
        cout << "5. Mostrar ventas dentro de un rango de precios" << endl;
        cout << "6. Calcular total de ventas" << endl;
        cout << "7. Salir" << endl << endl;

        cout << "ingrese una opcion: ";
        cin >> userOpcion;
        cout << "----------------------------------------------" << endl;

        return userOpcion;

    }

    // crea la lista de los productos
    string* getNewListProducts() {
        string* products = new string[arraySize];
        for (int i = 0; i < arraySize; i++)
        {
            string newValue;
            cout << "Ingrese el producto para la posicion " << i + 1 << ": ";
            cin >> newValue;
            products[i] = newValue;
        }
        return products;
    }

    //crea la lista de los precios de cada producto
    float* getNewListPrice(){
        float* prices = new float[arraySize];
        for (int i = 0; i < arraySize; i++)
        {
            float newPrice;
            cout << "ingrese el valor para la posicion " << i + 1 << ": ";
            cin >> newPrice;
            prices[i] = newPrice;
        }
        return prices;
    }

    //la funcion que ejecuta todos los codigos hechos anets
    void run(){

        products = getNewListProducts();
        prices = getNewListPrice();

        //el while que lo mantiene funcionando hasta que running == false
        while (running)
        {
            int userOpcion = userAccion();
            switch (userOpcion)
            {
            //1. Registrar o reiniciar ventas
            case 1:
                cout << "ingrese la cantidad de productos: ";
                cin >> arraySize;
                products = getNewListProducts();
                prices = getNewListPrice();
                cout << endl << endl;
                printsales();
                break;
            //2. Mostrar todas las ventas
            case 2:
                printsales();
                break;
            //3. Modificar una venta
            case 3:
                modifySales();
                break;
            //4. Buscar una venta
            case 4:
                findSales();
                break;
            //5. Mostrar ventas dentro de un rango de precios
            case 5:
                salesInRange();
                break;
            //6. Calcular total de ventas
            case 6:
                totalSales();
                break;
            //7. Salir, apaga el programa haciendo que running == false
            case 7:
                delete[] products;
                delete[] prices;
                running = false;
                break;
        default:
                cout << endl << "opcion no valida" << endl;
            break;
        }
        }
        
    }
};

int main(){
    intOfArrayManager arrayManager;
    arrayManager.run();

    return 0;
}