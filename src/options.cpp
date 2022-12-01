#include "options.h"

template <class T1, class T2>
options<T1, T2>::options() {
    //Do nothing
}

template <class T1, class T2>
options<T1, T2>::~options() {
    //Do nothing
}

template <class T1, class T2>
options<T1, T2>::options(std::map <T1, T2> mp_temp) {
    auto it1 = mp_temp.begin();
    auto it2 = mp.begin();
    for (; it1 != mp_temp.end(); it1++) {
        it2->first = it1.first();
        it2->second = it1.second();
    }
}

template <class T1, class T2>
void options<T1, T2>::AddOption(T1 first, T2 second) {
    mp.insert(make_pair(first, second));
}