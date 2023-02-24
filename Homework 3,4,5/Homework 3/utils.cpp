#include "utils.hpp"
#include <list>


using std::list;
using std::move;
using std::make_move_iterator;


vector<fs::path> utils::find_all_files(const fs::path& dir, function<bool(const string&)> pred)
{
    list<fs::path> files_to_sweep;

    // iterate recursively to find all files that satisfy pred
    for(auto& entry : fs::recursive_directory_iterator(dir))
    {
        if(entry.is_regular_file())
        {
            fs::path cur_file = entry.path();
            string type(cur_file.extension());
            if(pred(type))
            {
                files_to_sweep.push_back(move(cur_file));
            }
        }
    }

    return vector<fs::path>(make_move_iterator(files_to_sweep.begin()), make_move_iterator(files_to_sweep.end()));
}


bool utils::check_extension(const string& ext)
{
    return ext == ".dat";
}




