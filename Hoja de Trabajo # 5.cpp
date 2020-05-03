/ *
Clase # 7
15-03-2020 - HOJA DE TRABAJO # 5
Ejercicio # 1
Realice un programa que genere la venta de compra de un terreno / casa / departamento. Este programa
debe realizar los cálculos de acuerdo con la tabla abajo listada:
_____________________________________________________________
| CATEGORIA ZONA TIPO PRECIO XM ^ 2 EN $ |
| ------------------------------------------------- ---------- |
El | Terreno 2200 |
El | Una casa 2500 |
El | Departamento 2100 |
| COMERCIAL ---------------------------------------- |
El | Terreno 1300 |
El | B Casa 1500 |
El | Departamento 1200 |
| ___________________________________________________________ |
El | Terreno 2100 |
El | Una casa 2500 |
El | Departamento 2100 |
El | ---------------------------------------- |
El | Terreno 1500 |
| RESIDENCIAL B Casa 1600 |
El | Departamento 1300 |
El | ---------------------------------------- |		
El | Terreno 1100 |
El | C Casa 1300 |
El | Departamento 1000 |
| ___________________________________________________________ |
Dada la categoría, zona, tipo y área del terreno o inmueble determinar cuánto asciende el monto que
debemos pagar para comprar el inmueble. El programa desarrollado deberá ser capaz de generar un
informe del total vendido por categoría, zona y tipo de inmueble.
* /
# include  < iostream >
# include  < string >
usando el  espacio de nombres  estándar ;

string categoria [ 2 ] = { " Comercial " , " Residencial " };
cadena zona [ 3 ] = { " A " , " B " , " C " };
string tipo [ 3 ] = { " Terreno    " , " Casa \ t " , " Departamento " };

int categoria_con [ 2 ] = { 0 , 0 };
int zona_con [ 3 ] = { 0 , 0 , 0 };
int tipo_con [ 3 ] = { 0 , 0 , 0 };
flotador totalglobal = 0 ;



struct  inmuebles {
  int categoria;
  int   zona;
  int   tipo;
  precio de flotación ;
} inmueble [ 15 ], cuenta [ 15 ];


void  inmueble_variables () {
  inmueble [ 0 ] = { 0 , 0 , 0 , 2200.00 };
  inmueble [ 1 ] = { 0 , 0 , 1 , 2500 };
  inmueble [ 2 ] = { 0 , 0 , 2 , 2100 };

  inmueble [ 3 ] = { 0 , 1 , 0 , 1300 };
  inmueble [ 4 ] = { 0 , 1 , 1 , 1500 };
  inmueble [ 5 ] = { 0 , 1 , 2 , 1200 };

  inmueble [ 6 ] = { 1 , 0 , 0 , 2100 };
  inmueble [ 7 ] = { 1 , 0 , 1 , 2500 };
  inmueble [ 8 ] = { 1 , 0 , 2 , 2100 };

  inmueble [ 9 ] = { 1 , 1 , 0 , 1500 };
  inmueble [ 10 ] = { 1 , 1 , 1 , 1600 };
  inmueble [ 11 ] = { 1 , 1 , 2 , 1300 };
  
  inmueble [ 12 ] = { 1 , 2 , 0 , 1100 };
  inmueble [ 13 ] = { 1 , 2 , 1 , 1300 };
  inmueble [ 14 ] = { 1 , 2 , 2 , 1000 };

  cuenta [ 0 ] = { 0 , 0 , 0 , 0 };
  cuenta [ 1 ] = { 0 , 0 , 1 , 0 };
  cuenta [ 2 ] = { 0 , 0 , 2 , 0 };

  cuenta [ 3 ] = { 0 , 1 , 0 , 0 };
  cuenta [ 4 ] = { 0 , 1 , 1 , 0 };
  cuenta [ 5 ] = { 0 , 1 , 2 , 0 };

  Cuenta [ 6 ] = { 1 , 0 , 0 , 0 };
  cuenta [ 7 ] = { 1 , 0 , 1 , 0 };
  cuenta [ 8 ] = { 1 , 0 , 2 , 0 };

  cuenta [ 9 ] = { 1 , 1 , 0 , 0 };
  cuenta [ 10 ] = { 1 , 1 , 1 , 0 };
  cuenta [ 11 ] = { 1 , 1 , 2 , 0 };
  
  cuenta [ 12 ] = { 1 , 2 , 0 , 0 };
  cuenta [ 13 ] = { 1 , 2 , 1 , 0 };
  cuenta [ 14 ] = { 1 , 2 , 2 , 0 };
};


void  mostrar () {
	 cout << " \ n  \ n " ;
	 cout << " \ t __________________________________________ " << endl;
	 cout << " \ n  \ n " ;
  para ( int i = 0 ; i < 15 ; i ++) {
    // cout << inmueble [i] .categoria << "\ n";
      cout << " \ t " << i + 1 << " ) " ;
      cout << categoria [inmueble [i]. categoria ] << " \ t " ;
      cout << zona [inmueble [i]. zona ] << " \ t " ;
      cout << tipo [inmueble [i]. tipo ] << " \ t " ;
      cout << inmueble [i]. precio << " \ n " ;
  }
};

// Calcula el metro cuadrado por la opción seleccionada
float  calcular ( int opcion, float metros) {
  flotador total;

  total = inmueble [opcion]. precio * metros;

  retorno total;
}

nulo  ingreso () {
  int var;
  metr flotante , total;
  bool romp = falso ;
  while (romp == false ) {
  	cout << " \ n " ;
  	cout << " \ t __________________________________________ " << endl;
	cout << " \ t Ingrese la opción a elegir: " ;
	cin >> var;
	var = var- 1 ;
	si (var> = 15 ) {
		romp = verdadero ;
		romper ;
	}
	cout << " \ t Ingrese los metros cuadrados a comprar: " ;
	cin >> metr;
	romp + = 1 ;
  }
  
 

  // Contamos la categoría, zona y tipo
  cuenta [var]. precio = cuenta [var]. precio = + 1 ;

  // Aca indicamos cuantos hay en Categoria, Zona y Tipo, los aderimos a la cuenta
  // respectiva.
  categoria_con [cuenta [var]. categoria ] = categoria_con [cuenta [var]. categoria ] + 1 ;
  zona_con [cuenta [var]. zona ] = zona_con [cuenta [var]. zona ] + 1 ;
  tipo_con [cuenta [var]. tipo ] = tipo_con [cuenta [var]. tipo ] + 1 ;

  total = calcular (var, metr);

  // El monto total a pagar
  totalglobal = totalglobal + total;

  
  // Es un pulsar para continuar
  getchar ();
  cadena vacía;
  getline (cin, vacío);

}

 informe nulo () {
  
  cout << " El total de categorías son: " << " \ n " ;
  para ( int x = 0 ; x < 2 ; x ++) {
  	cout << categoria [x] << " : " << categoria_con [x] << endl;
  }
  
  cout << " \ n " ;

  cout << " El total de zonas son: " << " \ n " ;
  para ( int x = 0 ; x < 3 ; x ++) {
    cout << zona [x] << " : " << zona_con [x] << endl;
  }
  cout << " \ n " ;  

  cout << " El total de tipos son: " << " \ n " ;
  para ( int x = 0 ; x < 3 ; x ++) {
    cout << tipo [x] << " : " << tipo_con [x] << endl;
  }
  cout << " \ n  \ n " ;

  cout << " El monto total a pagar es de: " << totalglobal << endl;
  // Es un pulsar para continuar
  getchar ();
  cadena vacía;
  getline (cin, vacío);
};


 menú vacío () {
  char tecla;
  cadena vacía;
  bool fin = falso ;
  
  hacer
    {
        sistema ( " CLS " );
        cout << " \ n " ;
        cout << " \ t  \ t VENTA DE INMUEBLE " . << endl;
        cout << " \ t _________________________________ " << endl << endl;
        cout << " \ t | 1 .- Compra de Activo " << endl;
        cout << " \ t | 2 .- Reporte " << endl;
        cout << " \ t | 3 .- Salir " << endl << endl;
        cout << " \ t _________________________________ " << endl << endl;
        cout << " \ t Elije una opción: " ;
 
        cin >> tecla;
		interruptor (tecla) {
			caso  ' 1 ' :
			sistema ( " CLS " );
			mostrar ();
			ingreso ();
			romper ;
			
			caso  ' 2 ' :
			sistema ( " CLS " );
			informe ();
			romper ;
			
			caso  ' 3 ' :
			fin = verdadero ;
			romper ;
			
			por defecto :
			cout << " Opcion no valida. " ;
			getchar ();
			getline (cin, vacío);
			romper ;
		}
	} while (fin! = verdadero );
}


int  main () {
  inmueble_variables ();
  menú ();
  devuelve  0 ;
}
