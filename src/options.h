#include <map>
#include <string>

template <class T1, class T2>
class options
{
private:
    std::map<T1, T2> mp;
public:
    options();
    options(std::map <T1, T2> mp);
    ~options();

    void AddOption(T1 first, T2 second);
};