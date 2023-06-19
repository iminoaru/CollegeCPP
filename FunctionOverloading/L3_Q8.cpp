/*8. Define a class named Movie. Include private fields for the title, year, and
name of the director. Include three public functions with the prototypes
void Movie::setTitle(char *); , void Movie::setYear(int); and void Movie::setDirector(char *);.
Include another function that displays all the information about a Movie. Write a main() function
that declares a movie object named myFavoriteMovie. Set and display the object’s fields. */

#include <iostream>
using namespace std;

class Movie{
    private:
            String title;
            int year;
            String Dname;
    public:
            void setTitle(char *);
            void setYear(int);
            void setDirector(char *);
            void Infodisplay();
    };

void Movie::setTitle(char *Title){
    title = Title;
    }

void Movie::setYear(int Year){
    year = Year
    }

void Movie::setDirector(char *DName){
    Dname = DName;
    }

void Movie::Infodisplay(){
    cout << "Movie Name: " << title << '\n';
    cout << "Movie Year: " << year << '\n';
    cout << "Movie Director's name: " << Dname << '\n';
}

int main(){
    Movie myFavoriteMovie;

    myFavoriteMovie.setTitle("Titan");
    myFavoriteMovie.setYear(2069);
    myFavoriteMovie.setDirector("SomeOne");


return 0;
}
