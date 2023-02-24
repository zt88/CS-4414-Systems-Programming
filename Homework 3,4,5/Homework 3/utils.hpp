#include <filesystem>
#include <functional>
#include <vector>


using std::function;
using std::string;
using std::vector;
namespace fs = std::filesystem;


// namespace utils
namespace utils
{
    vector<fs::path> find_all_files(const fs::path& dir, function<bool(const string&)> pred);

    // predicate function
    bool check_extension(const string& ext);
}
