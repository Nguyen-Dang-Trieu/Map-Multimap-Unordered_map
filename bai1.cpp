#include <iostream>
#include <map>

using namespace std;

int main(void)
{
  map<string, int> _map;
  //Insert some values into the map
  _map["one"] = 1;
  _map["two"] = 2;
  _map["three"] = 3;

  //Get an iterator pointing to the first element in the map
  map<string, int>::iterator itr = _map.begin();

  //Iterate through the map and print the elements
  while(itr != _map.end())
  {
    cout<<"key: " << itr->first << ", value: " << itr->second << endl;
    ++itr;
  }
  
  // Print the size of the map
  cout << "Size of map: " << map.size() << endl;
  return 0;
}
