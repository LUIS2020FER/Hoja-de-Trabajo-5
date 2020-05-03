/ *
Ejercicio # 2
Clase # 7 - 2020-03-15 - HOJA DE TRABAJO # 5
Una persona desea comprar entradas para un concierto que se realizará en la explicación de cierto lugar
de la ciudad. El precio de la entrada varía según la zona elegida, así tenemos que la lista de precios es la
siguiente:
__________________________________
Zona Identificación Precio
----------------------------------
VIP V 350.00
Platea P 130.00
Popular E 50.00
----------------------------------
Además, los precios y el descuento en función del número de entradas que se compran,
así como si la persona que adquiere es socio o no.
________________________________________ _______________________________________
DESCUENTO POR EL NUMERO DE ENTRADAS DESCUENTO POR SER SOCIO
--------------------------------------- ----------- ----------------------------
NÚMERO DE ENTRADAS% DE DESCUENTO ¿Es socio? % de descuento
	   Entre 3 y 6 5% Sí 8%
	   Entre 7 y 9 7.5% No 0%
	   		 > 9 10% ________________________________________
________________________________________
Se le pide elaborar un programa en C ++ que solicite la zona elegida, el número de entradas para comprar y
consulte si es socio o no y no determine y muestre el monto a pagar por la compra de las entradas. Todas
las ventas deben de ser grabadas en un archivo de datos, así mismo el programa de ser capaz de mostrar el
monto total de lo vendido globalmente y por tipo de entrada mostrando también el porcentaje respecto
al total global vendido.
* /
# include  < iostream >
# include  < string >
# include  < fstream >
# include  < vector >
# include  < cctype >

usando el  espacio de nombres  estándar ;

struct  zonas {
  descripcion de cuerdas;
  codigo de cuerda;
  precio de flotación ;
  int cantidad;
  flotador global global;
} zona [ 3 ];

struct  compras {
  zona de cuerda;
  int cantidad;
  bool miembro;
  flotador total;
};

// vector <compras> boletos;

vacío  inicio_variables () {
  // Precios por zona
  zona [ 0 ] = { " VIP " , " V " , 350.00 , 0 , 0 };
  zona [ 1 ] = { " PLATEA " , " P " , 130.00 , 0 , 0 };
  zona [ 2 ] = { " POPULAR " , " E " , 50.00 , 0 , 0 };
};

float  calcular (string codigo, int cantidad, bool miembro) {
  flotante total = 0 , descuento;
  int intzona = 0 ;

  // Comprobamos la zona
  if ((codigo == " V " ) || (codigo == " v " )) {
    intzona = 0 ;
  } else  if ((codigo == " P " ) || (codigo == " p " )) {
    intzona = 1 ;
  } else  if ((codigo == " E " ) || (codigo == " e " )) {
    intzona = 2 ;
  } más {
    cout << " no hay nada " << endl;
  }

  // hacemos el cálculo del precio en base a la zona
  total = cantidad * zona [intzona]. precio ;
  
  if ((cantidad> = 3 ) y (cantidad <= 6 )) {
    descuento = 0.05 ;
  } else  if ((cantidad> = 7 ) y (cantidad <= 9 )) {
    descuento = 0.075 ;
  } else  if (cantidad> 9 ) {
    descuento = 0.10 ;
  } más {
    descuento = 0 ;
  }
  // Aplicamos el descuento según la cantidad comprada
  total = total- (total * descuento);

  // Verificamos si es miembro para hacer un descuento
  // del 8% adicional
  if (miembro == verdadero ) {
    total = total- (total * 0.08 );
  }

  // devolvemos el calculo
  retorno total;
};

 anuncio nulo () {
	cout << " ____________________________________________ " << endl;
	cout << " | Zona Identificacion Precio " << endl;
	cout << " | ------------------------------------------- " < <endl;
	cout << " | VIP \ t  \ t V \ t  \ t 350.00 " << endl;
	cout << " | Platea \ t P \ t  \ t 130.00 " << endl;
	cout << " | Popular \ t E \ t  \ t 50.00 " << endl;
	cout << " | ------------------------------------------- " < <endl;
}
 oferta nula () {
	cout << " ____________________________________________ " << endl;
	cout << " | DESCUENTO POR EL NUMERO DE ENTRADAS	 " << endl;
	cout << " | ------------------------------------------- " < <endl;
	cout << " | NÚMERO DE ENTRADAS% DE DESCUENTO " << endl;
	cout << " | Entre 3 y 6 5% " << endl;
	cout << " | Entre 7 y 9 7.5% " << endl;
	cout << " |> 9 10%	 " << endl;
	cout << " | ------------------------------------------- " < <endl;
}

nulo  ingreso () {
	anuncio ();
  // Estructura de compras
  compras x;
  cadena var1;

  cout << " Ingrese la zona selecionada: " ;
  cin >> x. Zona ;

  cout << " Ingrese la cantidad de boletas a comprar: " ;
  cin >> x. cantidad ;

  cout << " Es miembro honorario: " ;
  cin >> var1;

  // si es si, manda un verdadero, de lo contrario un falso.
  if ((var1 == " si " ) o (var1 == " SI " )) {
    X. miembro = verdadero ;
  } más {
    X. miembro = falso ;
  }

  // llamamos la función para realizar el cálculo.
  X. total = calcular (x. zona , x. cantidad , x. miembro );

  cuerda miem;
  if (x. miembro == verdadero ) {
    miem = " s " ;
  } más {
    miem = " n " ;
  }
  // abrimos el archivo.
  ofstream archivo ( " HT5_EJERCICIO_02.txt " , ios :: aplicación);

  // Escribimos en el archivo
  archivo << x. zona << " \ t " << x. cantidad << " \ t " << miem << " \ t " << x. total << " \ n " ;

  // Cerramos el archivo
  archivo. cerrar ();

};

 leer vacío () {
    // Iniciamos varibles para la cuenta de la lectura del archivo.
    inicio_variables ();

    flotador totalglobal = 0 ;
    int grancantidad = 0 ;
    cuerda miem;

    // declaramos la clase de lectura de archivo
    ifstream archivo;
    
    compras x;
  
    	
	  prueba {
      archivo. abierto ( " HT5_EJERCICIO_02.txt " , ios :: in);
		
  		while (archivo >> x. zona >> x. cantidad >> miem >> x. total ) {
        if ((x. zona == " V " ) || (x. zona == " v " )) {
          zona [ 0 ]. cantidad = zona [ 0 ]. cantidad + x. cantidad ;
          zona [ 0 ]. totalglobal = zona [ 0 ]. totalglobal + x. totalizará ;
        } else  if ((x. zona == " P " ) || (x. zona == " p " )) {
          zona [ 1 ]. cantidad = zona [ 1 ]. cantidad + x. cantidad ;
          zona [ 1 ]. totalglobal = zona [ 1 ]. totalglobal + x. totalizará ;
        } else  if ((x. zona == " E " ) || (x. zona == " e " )) {
          zona [ 2 ]. cantidad = zona [ 2 ]. cantidad + x. cantidad ;
          zona [ 2 ]. totalglobal = zona [ 2 ]. totalglobal + x. totalizará ;
        }

        // sumamos el total de los boletos vendidos
        totalglobal = totalglobal + x. totalizará ;
        // Contamos la cantidad de boletos vendidos
        grancantidad = grancantidad + x. cantidad ;
      }

		  archivo. cerrar ();

      para ( int x = 0 ; x < 3 ; x ++) {
        porcentaje de flotación = 0 ;
        cout << " El total vendido por zona " << zona [x]. descripcion << " : " << zona [x]. cantidad << endl;
        cout << " Con un monto total de: " << zona [x]. totalglobal << endl;
        porcentaje = (zona [x]. cantidad * 100 ) / grancantidad;
        cout << " El porcentaje total de ventas es de " << porcentaje << " % " << " \ n " << endl;
      }
      cout << " El total global de venta es de: " << totalglobal << endl;

      // hacemos una pausa
      cadena vacía;
      getchar ();
      getline (cin, vacío);
      volver ;
    }
	  captura (excepción X) {		
			cout << " Error para abrir archivo " << endl;			
      
			salida ( 1 );
	  }
};


 menú vacío () {
  char tecla;
  cadena vacía;
  bool fin = falso ;
  
  hacer
    {
        sistema ( " CLS " );
        cin. claro ();
        cout << " Venta de boletos " << endl;
        cout << " ----------------- " << endl << endl;
        cout << " \ t 1 .- Mostrar Oferta " << endl;
        cout << " \ t 2 .- Vender Boletos " << endl;
        cout << " \ t 3 .- Mostrar Venta General " << endl;
        cout << " \ t 4 .- Salir " << endl << endl;
        cout << " Elije una opcion: " ;
 
        cin >> tecla;
 
		interruptor (tecla)
    		{
   			caso  ' 1 ' :
        	sistema ( " CLS " );
        	oferta ();
        	getchar ();
        	getline (cin, vacío);
        	romper ;
        	
			caso  ' 2 ' :
			sistema ( " CLS " );
        	ingreso ();
        	romper ;
	  		
			caso  ' 3 ' :
        	sistema ( " CLS " );
        	leer ();
        	romper ;
        	
      		caso  ' 4 ' :
			fin = verdadero ;
			romper ;
 
			por defecto :
			sistema ( " claro " );
			cout << " Opción no valida. \ a \ n " ;
			getchar ();
        	getline (cin, vacío);
			romper ;
		}
    } while (fin! = verdadero );
}



int  main () {
  inicio_variables ();
  menú ();
  devuelve  0 ;
}
