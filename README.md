# Map
Overview
Maps in C++ are container structures that store elements in `key-value pairs`.This means that for every `unique key`, there is a `data value mapped` to it, that can be easily accessed if we know the key.

This is why every key has to be unique, and `no two keys can be the same`(but the values associated to keys can be the same).

Maps in C++ store the key-value pairs in `sorted order` by default so that the search for any key-value pair can be very quick.

Chi tiết: `https://www.scaler.com/topics/cpp/map-in-cpp/`

# Member Functions
## Element Access:

- Both the functions are `operator []` and `at` are used to `access/retrieve` the `element/value` associated with the key.

- The major difference between the two is that at-will throw an exception if the `key-value pair` is `not present in the map` whereas the `operator []` will `insert` a key-value pair if the key is not present in the map.
- 
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
