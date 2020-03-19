#include <bits/stdc++.h>
using namespace std;

template <class K, class V>
class entry
{
private:
    K key;
    V value;

public:
    entry(K k, V v) : key(k), value(v) {}

    K getKey() { return key; }

    V getValue() { return value; }

    void setValue(V newValue) { value = newValue; }
};

template <class K, class V>
class dict
{
private:
    vector<pair<K, V>> entries;
    int findKey(K k)
    {
        int i;
        bool fnd = false;
        for (i = 0; i < entries.size() && !fnd; i++)
        {
            fnd = k == entries[i].first;
        }
        if (!fnd)
            i = -1;
        return i;
    }

public:
    void put(K k, V v)
    {
        bool fnd = false;
        int idx;
        for (int i = 0; i < entries.size() && !fnd; i++)
        {
            fnd = k == entries[i].first;
            if (fnd)
                idx = i;
        }
        if (fnd)
            entries[idx].second = v;
        else
        {
            pair<K, V> t;
            t.first = k;
            t.second = v;
            entries.push_back(t);
        }
    }
};