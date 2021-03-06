#include <iostream>
#include <list>

using namespace std;

class Contacto 
{
    private:
        string nombre;
        int telefono;
        string mail;
    
    public:
        Contacto(){}

        ~Contacto(){}

        void setContacto(string nom, int tel, string mal)  
        {
            nombre = nom;
            telefono = tel;
            mail = mal;
        }

        string getNombre() 
        {
            return nombre;
        }
        int getTelefono() 
        {
            return telefono;
        }
        string getMAil(){
            return mail;
        }
        Contacto getContac (){
            return Contacto();
        }
};

class Agenda 
{
    private:    
        list <Contacto*> contactos;
    
    public:
        ~Agenda() {}

        void addContacto(Contacto* nContacto)
        {
            contactos.push_back(nContacto);
        }

        void listarContactos()
        {
            cout<<"-------------------------"<<endl;
            cout<<"   Agenda de Contactos    "<<endl;
            cout<<"-------------------------"<<endl;

                for(Contacto* dato : contactos )
                {
                    cout << "Nombre:  " << dato->getNombre() << endl;
                    cout << "Telefono:  " << dato->getTelefono() << endl;
                    cout << "Mail:  " << dato->getMAil() << endl << endl;
                }

            cout<<"-------------------------"<<endl;
        }
};

int main() 
{
        Contacto* contacto = new Contacto();
        contacto->setContacto("Celes", 4324324, "sdsd@dfdf.com");
        //cout<<contacto->getNombre()<<endl;

        Contacto* contacto2 = new Contacto();
        contacto2->setContacto("Luis", 9399929, "sfsf@dfd.com");

        Agenda* agenda = new Agenda();

        agenda->addContacto(contacto);
        agenda->addContacto(contacto2);

        agenda->listarContactos();

        delete contacto;
        delete agenda;
        cin.get();
        return 0;
}