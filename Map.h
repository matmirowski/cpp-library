#include <vector>
#include <iostream>

using namespace std;

template <typename Key, typename Value>
class Record
{
public:
    Key key;
    Value value;
    Record() = default;
    Record(const Key& k, const Value& val) : key(k), value(val) {}
};

template <typename Key, typename Value>
class Map
{
private:
    vector<Record<Key, Value>> Data;

public:
    Value* find(const Key &k) {
        for (unsigned int i = 0; i < Data.size(); i++) {
            if (Data[i].key == k) {
                return &Data[i].value;
            }
        }
        return nullptr;
    }
    
    void add(Key keyToAdd, Value valueToAdd) {
        for (unsigned int i = 0; i < Data.size(); i++) {
            if (Data[i].key == keyToAdd) {
                Data[i].value = valueToAdd;
                return;
            }
        }
        Data.push_back(Record<Key, Value>(keyToAdd, valueToAdd));
    }

    friend ostream &operator<<(ostream &out, const Map<Key, Value> &map)
    {
		for (size_t i = 0; i < map.Data.size(); i++) {
			out << "Key: " << map.Data[i].key << ", Value: " << map.Data[i].value << "\n";
		}
        return out;
    }
};
