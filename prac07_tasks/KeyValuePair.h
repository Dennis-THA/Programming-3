#ifndef _KEY_VALUE_PAIR_H
#define _KEY_VALUE_PAIR_H

#include <string>

template <typename K, typename V>
class KeyValuePair
{
    private:
        K m_key;
        V m_value;

    public:
        KeyValuePair(const K& key, const V& value);
        const K& getKey() const;
        //Operator std::string() const;
};

template <typename K, typename V>
KeyValuePair<K, V> :: KeyValuePair (const K& key, const V& value)
{
    m_key = key;
    m_value = value;
}


template <typename K, typename V>
const K& KeyValuePair <K, V>::getKey() const
{
    return m_key;
}


#endif