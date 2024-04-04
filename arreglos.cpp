//aqui se haran los metodos que unen la clase main con las clases del modelo

#include <iostream>
#include <vector>
#include <algorithm>

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Definición de la clase video_juego
class video_juego {
public:
    string getNombre() { return nombre; }
private:
    string nombre;
    // Otros atributos y métodos si es necesario
};

// Lista de juegos ya existente
vector<video_juego> lista_juegos;

// Prototipos de funciones
void lista_juegos_favoritos();
void ingresar_nuevos_juegos();

void lista_juegos_favoritos() {
    vector<video_juego> Juegos_favoritos;

    string nombre;
    char option;
    int option2;

    cout << "Digite el nombre del video juego: " << endl;
    cin >> nombre;

    for (video_juego p : lista_juegos) {
        if (nombre == p.getNombre()) {
            cout << "/------Menú-----/" << endl;
            cout << "1. Agregar este juego a la lista de favoritos. " << endl;
            cout << "2. Salir. "<< endl;
            cin >> option2;
            if(option2 == 1){
                // Agregar el juego a la lista de favoritos
                Juegos_favoritos.push_back(p);
                cout << "El juego ha sido agregado a la lista de favoritos." << endl;
            }
            break;
        }
    }
    // Aquí puedes agregar lógica adicional si es necesario
}


case 3:
  
 break;
case 4: 

 break;

void jugar_cuatroenraya (){
  
   string nombreJugador;//pide el nombre del jugador
    int eleccion2;
    while (true)
    {
        int partidas = bcs.getTotalWins();//partidas ganadas
        clock_t tiempo = bcs.getTiempoJuego();//tiempo jugado
        string aux;
        cout << "Top Ganador: " << bcs.getNombreJp() << endl;
        cout << "Partidas ganadas: " << partidas << endl;
        cout << "Tiempo total jugado: " << static_cast<double>(tiempo) / CLOCKS_PER_SEC << " segundos" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "1- Jugar juego" << endl;
        cout << "2- Salir" << endl;
        cin >> eleccion2;

        switch (eleccion2)
        {
        case 1:
        {
            cout << "Ingrese su nombre: ";
            cin >> nombreJp;
            bcs.setNombreJp(NombreJp);//actualiza nombre del jugador
            bcs.jugar_cuatroenraya(TotalWins, TiempoJuego);//jugar el juego
            bcs.setTotalWins(TotalWins);// actualiza las partidas ganadas
            bcs.setTiempoJuego(TiempoJuego);// actualiza el tiempo jugado
            break;
        }
        case 2:
            break;
        default:
            break;
        }
        if (eleccion2 == 2)// cierra el juego
            break;
    }
}


