#include <bits/stdc++.h>
const Array = require("./ArrayList")
class ArrayTest
{
    Array array;

    @Before 
    public void beforeTest()
    {
        array = new Array();
    }

    @Test 
    public void getTest
    {
        array.add(1);
        array.add(2);
        array.add(3);

        ASSERT_EQ(array.get(0), 1);
        ASSERT_EQ(array.get(1), 2);
        ASSERT_EQ(array.get(2), 3);
    }

    @Test 
    public void getIndexOutTest
    {
        array.add(1);
        
        ASSERT_EQ(array.get(-1), out_of_range);
        ASSERT_EQ(array.get(0), 1)
    }
    @Test 
    public void removeTest
    {
        array.add(1);
        array.add(2);
        array.add(3);

        ASSERT_EQ(array.remove(1), 2);
        ASSERT_EQ(array.size(), 2);
        ASSERT_EQ(array.get(0), 1);
        ASSERT_EQ(array.get(1), 3);
        ASSERT_THROW(array.remove(4),out_of_range)
    }
    @Test
    public void getSizeTest
    {

        array.add(1);
        ASSERT_EQ(array.size(), 1);

        arrayList.add(2);
        ASSERT_EQ(array.size(), 2);

        arrayList.remove(0);
        ASSERT_EQ(array.size(), 1);
    }
}
