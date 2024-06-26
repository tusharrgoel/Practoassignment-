#include <bits/stdc++.h>

class Array
{
private:
    vector<int> data;

public:
    void add(int number)
    {
        data.push_back(number);
    }
    int get(int index)
    {
        if (index < 0 || index >= data.size())
        {
            throw out_of_range("Index out of bounds");
        }
        return data[index];
    }
    int remove(int index)
    {
        if (index < 0 || index >= data.size())
        {
            throw out_of_range("Index out of bounds");
        }
        int value = data[index];
        data.erase(data.begin() + index);
        return value;
    }

    int size()
    {
        return data.size();
    }
}
