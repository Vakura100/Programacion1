#include <iostream>
#include <string>

class Persona {
    public:
        Persona(std::string nombre, int edad) {
            this->nombre = nombre;
            this->edad = edad;
        }

        std::string getNombre() {
            return this->nombre;
        }

        int getEdad() {
            return this->edad;
        }
        void setNombre(std::string nombre) {
            this->nombre = nombre;
        }
    private:
        std::string nombre;
        int edad;

    protected:
        friend class Amigo;
        virtual std::string getNombreCompleto() {
            return this->nombre;
        }
};

class Estudiante : public Persona {
    public:
        Estudiante(std::string nombre, int edad, std::string carrera) : Persona(nombre, edad) {
            this->carrera = carrera;
        }
        std::string getCarrera() {
            return this->carrera;
        }
        void setCarrera(std::string carrera) {
            this->carrera = carrera;
        }
    private:
        std::string carrera;

    friend class Maestro;
};

class Maestro : public Persona {
    public:
        Maestro(std::string nombre, int edad, std::string carrera) : Persona(nombre, edad) {
            this->carrera = carrera;
        }
        std::string getCarrera() {
            return this->carrera;
        }
        void setCarrera(std::string carrera) {
            this->carrera = carrera;
        }
        std::string getNombreCompleto(Estudiante estudiante) {
            return estudiante.getNombreCompleto();
        }
    private:
        std::string carrera;
};


class Amigo {
    public:
        std::string getNombreCompleto(Persona persona) {
            return persona.getNombreCompleto();
        }
};

class Animal {
    public:
        virtual void sonido() {
            std::cout << "Sonido de animal" << std::endl;
        }
};

class Perro : public Animal {
    public:
        void sonido() {
            std::cout << "Guau" << std::endl;
        }
};

class Gato : public Animal {
    public:
        void sonido() {
            std::cout << "Miau" << std::endl;
        }
};


class Operaciones {
    public:
        int suma(int a, int b) {
            return a + b;
        }
        int suma(int a, int b, int c) {
            return a + b + c;
        }
        int suma(int a, int b, int c, int d) {
            return a + b + c + d;
        }
};


int main(){
    Persona Francisco("Francisco", 30);
    std::cout << Francisco.getNombre() << std::endl;
    std::cout << Francisco.getEdad() << std::endl;

    Francisco.setNombre("Paco");
    std::cout << Francisco.getNombre() << std::endl;

    Estudiante Alex("Alex", 20, "Arte");
    std::cout << Alex.getNombre() << std::endl;
    std::cout << Alex.getEdad() << std::endl;
    std::cout << Alex.getCarrera() << std::endl;
    Alex.setCarrera("Ing. En Programacion de Videojuegos");

    Maestro Cortez("Cortez",48,"Ing. En Programacion de Videojuegos");
    std::cout << Cortez.getNombre() << std::endl;
    Cortez.setCarrera("Arte");

    Amigo Pablo;
    std::cout << Pablo.getNombreCompleto(Francisco) << std::endl;
    std::cout << Cortez.getNombreCompleto(Alex) << std::endl;
   
    return 0;
}
