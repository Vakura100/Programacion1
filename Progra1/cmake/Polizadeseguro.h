
#ifndef PROYECTOS_IPV_ASST_POLIZADESEGURO_H
#define PROYECTOS_IPV_ASST_POLIZADESEGURO_H

#include <iostream>
#include <string>

// Clase base Poliza
class Poliza {
private:
    std::string nombre;
    int edad;
    std::string CURP;
    std::string fechaNacimiento;
    double deducible;
    double montoMaxSeguro;

public:
    Poliza() {
        std::cout << "Introduce el nombre: ";
        std::cin >> nombre;
        std::cout << "Introduce la edad: ";
        std::cin >> edad;
        std::cout << "Introduce el CURP: ";
        std::cin >> CURP;
        std::cout << "Introduce la fecha de nacimiento: ";
        std::cin >> fechaNacimiento;
        std::cout << "Introduce el deducible: ";
        std::cin >> deducible;
        std::cout << "Introduce el monto maximo del seguro: ";
        std::cin >> montoMaxSeguro;
    }

    // Metodos de acceso
    std::string getNombre() { return nombre; }
    int getEdad() { return edad; }
    std::string getCURP() { return CURP; }
    std::string getFechaNacimiento() { return fechaNacimiento; }
    double getDeducible() { return deducible; }
    double getMontoMaxSeguro() { return montoMaxSeguro; }

    virtual void crearPoliza() = 0; // Metodo virtual puro
};

// Clase Casa hereda de Poliza
class Casa : public Poliza {
private:
    double tamanoCasa;
    std::string direccion;
    int anoConstruccion;

public:
    Casa() : Poliza() {
        std::cout << "Introduce el tamano de la casa: ";
        std::cin >> tamanoCasa;
        std::cout << "Introduce la direccion: ";
        std::cin >> direccion;
        std::cout << "Introduce el ano de construccion: ";
        std::cin >> anoConstruccion;
    }

    // Metodos de acceso
    double getTamanoCasa() { return tamanoCasa; }
    std::string getDireccion() { return direccion; }
    int getAnoConstruccion() { return anoConstruccion; }

    void crearPoliza() override {
        std::cout << "Creando poliza de casa para " << getNombre() << std::endl;
    }
};

// Clase Vida hereda de Poliza
class Vida : public Poliza {
private:
    bool estaEnfermo;
    std::string tipoSangre;

public:
    Vida() : Poliza() {
        std::cout << "Esta enfermo? (1 para si, 0 para no): ";
        std::cin >> estaEnfermo;
        std::cout << "Introduce el tipo de sangre: ";
        std::cin >> tipoSangre;
    }

    // Metodos de acceso
    bool getEstaEnfermo() { return estaEnfermo; }
    std::string getTipoSangre() { return tipoSangre; }

    void crearPoliza() override {
        std::cout << "Creando poliza de vida para " << getNombre() << std::endl;
    }
};

// Clase Coche hereda de Poliza
class Coche : public Poliza {
private:
    int ano;
    double kilometraje;
    std::string modelo;
    std::string marca;
    std::string numeroSerie;
    std::string placa;
    std::string color;

public:
    Coche() : Poliza() {
        std::cout << "Introduce el ano del coche: ";
        std::cin >> ano;
        std::cout << "Introduce el kilometraje: ";
        std::cin >> kilometraje;
        std::cout << "Introduce el modelo: ";
        std::cin >> modelo;
        std::cout << "Introduce la marca: ";
        std::cin >> marca;
        std::cout << "Introduce el numero de serie: ";
        std::cin >> numeroSerie;
        std::cout << "Introduce la placa: ";
        std::cin >> placa;
        std::cout << "Introduce el color: ";
        std::cin >> color;
    }

    // Metodos de acceso
    int getAno() { return ano; }
    double getKilometraje() { return kilometraje; }
    std::string getModelo() { return modelo; }
    std::string getMarca() { return marca; }
    std::string getNumeroSerie() { return numeroSerie; }
    std::string getPlaca() { return placa; }
    std::string getColor() { return color; }

    void crearPoliza() override {
        std::cout << "Creando poliza de coche para " << getNombre() << std::endl;
    }
};

void crearPolizas() {
    // Crear objetos de cada tipo de poliza y llamar a crearPoliza
    Casa casa;
    casa.crearPoliza();

    Vida vida;
    vida.crearPoliza();

    Coche coche;
    coche.crearPoliza();
}


















































#endif //PROYECTOS_IPV_ASST_POLIZADESEGURO_H
