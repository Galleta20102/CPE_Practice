# CPE_Practice

This project just a Personal Practice of [*C*ollegiate *P*rogramming *E*xamination (CPE)](https://cpe.cse.nsysu.edu.tw/)<br>
There has list of 1★ questions : [Evironment and Tutorial](https://cpe.cse.nsysu.edu.tw/environment.php)<br>

> Here is some Note below

Notice: only `cin.get()` can read non Char `''` and `\n` <br>

### Map ：
#### declare Map
```cpp
map<dataType, dataType> mapName;
```
#### asign data : 
```cpp
mapName[index] = data;
```
#### iterating :
`iter->first` : index <br>
`iter->second` : data <br>
- forward
```cpp
map<dataType, dataType>::iterator iter;
for(iter = mapName.begin(); iter != mapName.end(); iter++)
```
- backward
```cpp
map<dataType, dataType>::reverse_iterator iter;
for(iter = mapName.rbegin(); iter != mapName.rend(); iter++)
```

#### find the index of substring from string
```cpp
stringName.find('[string]');
```

#### set the output fixed point
```cpp
cout << fixed << setprecision(4) << 0.12345;
// Output : 0.1235
```

#### declare 2d-Array by pointer
```cpp
int** arr = new int*[m];
for(int i=0;i<m;i++)
    arr[i] = new int[n];

// Don't forget release address after using!

for(int i=0;i<m;i++)
    delete [] *(arr+i);
delete [] arr;
```

#### convert value from n-base to decimal
```cpp=
strtol(char[], NULL, int base);
```

#### structure of dice
[ 2 ]  
[ 1 ][ 4 ][ 6 ][ 3 ]  
[ 5 ]  