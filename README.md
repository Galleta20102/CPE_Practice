# CPE_Practice

This project just a Personal Practice of [*C*ollegiate *P*rogramming *E*xamination (CPE)](https://cpe.cse.nsysu.edu.tw/)<br>
There has list of 1★ questions : [Evironment and Tutorial](https://cpe.cse.nsysu.edu.tw/environment.php)<br>
<br>
Here is some Note below . . .

---

## String & I/O
Notice: only `cin.get()` can read non Char `''` and `\n` <br>

### set the output fixed point
```cpp
cout << fixed << setprecision(4) << 0.12345;
// Output : 0.1235
```

### find the index of substring from string
```cpp
int substr_index = str_variable.find('[substr]');
```
If nott found, then `substr_index = str_variable.npos`
### [convert string from n-base to long int (decimal)](https://blog.csdn.net/qq_41822647/article/details/102838860)
```cpp
long dec_num = strtol([string], NULL, int [base]);
// if string=0321, base=8 then output 209
```

## Data ：
### Map
- declare Map
```cpp
map<dataType, dataType> mapName;
```
- asign data : 
```cpp
mapName[index] = data;
```
- iterating :<br>
`iter->first` : index , `iter->second` : data <br>
```cpp
// forward
map<dataType, dataType>::iterator iter;
for(iter = mapName.begin(); iter != mapName.end(); iter++)

// backward
map<dataType, dataType>::reverse_iterator iter;
for(iter = mapName.rbegin(); iter != mapName.rend(); iter++)
```

### Array
declare 2d-Array by pointer
```cpp
int** arr = new int*[m];
for(int i=0;i<m;i++)
    arr[i] = new int[n];

// Don't forget release address after using!
for(int i=0;i<m;i++)
    delete [] *(arr+i);
delete [] arr;
```


### [auto](https://blog.gtwang.org/programming/cpp-auto-variable-tutorial/))
`auto` is a flexible data type
```cpp
vector<int> v = {0, 1, 2, 3};
for (auto& x : v) {
    std::cout<<x+1<<' ';
}
// Output : 1 2 3 4
```

## structure of dice
[ 2 ]  
[ 1 ][ 4 ][ 6 ][ 3 ]  
[ 5 ]  