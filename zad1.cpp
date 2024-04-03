#include <string>
#include "iostream"

class Film{
/******************************************************
nazwa klasy: Film
pola: 
    title                   - Tytuł filmu
    rented_copies           - ilość aktualnie wyporzyczonych kopi
metody:
    set_title, void         - Ustawia tytuł na ten podany w parametrze
    get_title, sting        - Zwraca tytuł filmu
    get_rented_copies, int  - Zwraca ilość aktualnie wyporzyczonych kopi
    rent_a_copy, void       - Wyporzycza jedną kopie fimu zmieniając wartość rented_copies 
informacje:
    Klasa ta przechowuje informacje dotyczące filmu, jej wartości są prywatne więc
    odczytywanie lub zmienianie ich wymaga użycia jej metod.
autor: 00000000000
*******************************************************/
    private:
        std::string title = "";
        int rented_copies = 0;
    public:
    void set_title(std::string new_title){
        title = new_title;
    }
    std::string get_title(){
        return title;
    }
    int get_rented_copies(){
        return rented_copies;
    }
    void rent_a_copy(){
        rented_copies += 1;
    }
};


void print_movie(Film* film){
    std::cout<<"tytuł: " <<film->get_title() << ", ilość wypożyczonych kopi: "<<film->get_rented_copies()<<std::endl;
}

int main(){
    Film movie;
    print_movie(&movie);
    std::cout<<"Ustawiam tytuł filmu..."<<std::endl;
    movie.set_title("C++ Movie 2: Powrót Wskaźników");
    print_movie(&movie);
     std::cout<<"Wypożyczam kopie filmu..."<<std::endl;
    movie.rent_a_copy();
    print_movie(&movie);
    return 0;
}