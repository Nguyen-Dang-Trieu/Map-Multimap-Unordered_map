# Map
Maps in C++ are container structures that store elements in `key-value pairs`.This means that for every `unique key`, there is a `data value mapped` to it, that can be easily accessed if we know the key.

This is why every key has to be unique, and `no two keys can be the same`(but the values associated to keys can be the same).

Maps in C++ store the key-value pairs in `sorted order` by default so that the search for any key-value pair can be very quick.

**Detail:** https://www.scaler.com/topics/cpp/map-in-cpp/

# Member Functions
## Element Access:

- Both the functions are `operator []` and `at` are used to `access/retrieve` the `element/value` associated with the key.

- The major difference between the two is that at-will throw an exception if the `key-value pair` is `not present in the map` whereas the `operator []` will `insert` a key-value pair if the key is not present in the map.

Example: To understand this better.
~~~cpp
#include <iostream>
#include <map>
using namespace std;

int main ()
{
    // Creating a map
    map<int, string> mp;

    // Assigning values to the keys
    mp[1] = "Asia";
    mp[2] = "Europe";
    mp[3] = "South America";
    mp[4] = "North America";

    // Retrieving values using the 'at' operator.
    // Prints the value associated with the key 1 , i.e. Aisa
    cout << mp.at(1) << endl;

    // Retrieving values using the 'operator []' .
    // Prints the value associated with the key 3 , i.e. South America
    cout << mp[3] << endl;

    // Chaning values using the 'at' operator.
    // Changes the value associated with key 1 to Asia-India.
    mp.at(1) = "Asia-India";
    // Prints value associated with key 1 after change , i.e. Asia-India using the operator [].
    cout << mp[1] << endl;

    // Since there is no key with value 5 in the map, it will create a key with value 5.
    mp[5] = "Australia";
    cout << mp[5] << endl;

    // Since there is no key with value 6 in the map, it will throw an exception
    // mp.at(6) = "Africa";
    return 0;
}
~~~
Output:
~~~cpp
Asia
South America
Asia-India
Australia
~~~
## Capacity
- These functions are used to find the solution to the queries related to the `size` of the map in general. The `empty()` function returns `a boolean value`, `True` if `the map is empty` that is it does not contain any key-value pair in it, otherwise it returns `False`.

- The `size()` function is used to return `the number of key-value pairs` in the map that is the number of entries in the map, whereas, the `max_size()` returns the upper bound of the entries that can `contain` based on the `memory` that the map has been `allocated`.

Let us take a look at an example to understand these functions.
~~~cpp
#include <iostream>
#include <map>

using namespace std;

int main ()
{
    // Creating a map
    map<int, int> mp;

    // Check if the map is empty or not
    if (mp.empty())
        cout << "The map is empty" << endl;
    else
        cout << "The map is not empty" << endl;

    // Find the size of the map
    cout << "The size of the map is: " << mp.size() << endl;

    // Assigning values to the keys - mp[key] = value
    mp[1] = 14;
    mp[2] = 45;
    mp[3] = 69;
    mp[4] = 25;

    // Check if the map is empty or not
    if (mp.empty())
        cout << "The map is empty" << endl;
    else
        cout << "The map is not empty" << endl;

    // Find the size of the map
    cout << "The size of the map is: " << mp.size() << endl;

    // Find the maximum size of the map that is possible
    cout << "The max size of the map is: " << mp.max_size() << endl;

    return 0;
}
~~~
Output:
~~~cpp
The map is empty
The size of the map is: 0
The map is not empty
The size of the map is: 4
The max size of the map is: 230584300921369395
~~~
## Modifiers
- `insert()`
- `erase()`
- `clear()`
- `swap()`
- `emplace()`
- `emplace_hint()`
## Iterators
- `begin()`
- `end()`
- `rbegin()`
- `rend()`
- `cbegin()`
- `cend()`
- `crbegin()`
- `crend()`
## Searching and Counting
- `find()`
- `count()`
- `lower_bound()`
- `upper_bound()`
- `equal_range()`

# Multimap
Multimap is an associative container that stores elements in sorted key-value pairs as a tuple. `Multimap can store more than one value against a key`. It is quite similar to the map, but the `difference` is that it can also contain `duplicate keys` that are `not unique`. By default, it uses the < operator to compare the keys.

We can declare a Multimap in C++ as:
~~~cpp
multimap <Key_type,Value_type> map_name;
~~~
Detail: https://www.scaler.com/topics/cpp/multimap-in-cpp/
