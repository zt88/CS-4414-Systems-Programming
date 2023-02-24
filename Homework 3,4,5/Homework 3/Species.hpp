#ifndef SPECIES_HPP
#define SPECIES_HPP


#include <string>

using std::string;


class Species {

    private:
        string name, latin_name, image_name, DNA;


    public:
        // constructor: get the information and set the values to strings
        Species(string name, string latin_name, string image_name, string DNA);

        // Getters
        string get_name();
        string getDNA();

};



#endif // SPECIES_HPP
