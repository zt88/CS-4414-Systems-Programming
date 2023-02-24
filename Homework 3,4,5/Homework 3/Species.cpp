#include "Species.hpp"


// Constructor
Species::Species(string name, string latin_name, string image_name, string DNA)
{
    this->name = name;
    this->latin_name = latin_name;
    this->image_name = image_name;
    this->DNA = DNA;
}

// Getters
string Species::get_name()
{
    return name;
}

string Species::getDNA()
{
    return DNA;
}
