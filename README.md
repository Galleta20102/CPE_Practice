# CPE_Practice

This project just a Personal Practice of [*C*ollegiate *P*rogramming *E*xamination (CPE)](https://cpe.cse.nsysu.edu.tw/)<br>
There has list of 1★ questions : [Evironment and Tutorial](https://cpe.cse.nsysu.edu.tw/environment.php)<br>
<br>
Here is some Note below . . .

---

## I/O
Notice: only `cin.get()` can read non Char `''` and `\n` <br>
### set the output fixed point
```cpp
cout << fixed << setprecision(4) << 0.12345;
// Output : 0.1235
```

## String

### find the index of substring from string
```cpp
int substr_index = str_variable.find('[substr]');
```
If not found, then `substr_index = str_variable.npos`

### [convert string to int/long/float](https://skylinelimit.blogspot.com/2018/03/c-6-atoiatolatof.html)
```cpp
// method 1
int str2int =  atoi( const char *str);
long str2long = atol( const char *str);
double str2f =  atof( const char *str);
//method 2
int sum=0;
for(int i=0;i<str.length();i++){
	sum += (str[i]-'0');
}
```

### [convert string from n-base to long int (decimal)](https://blog.csdn.net/qq_41822647/article/details/102838860)
```cpp
long dec_num = strtol([string], NULL, int [base]);
// if string=0321, base=8 then output 209
```

## Data ：
### Map
- declare
```cpp
map<dataType, dataType> mapName;
```
- asign data : 
```cpp
mapName[index] = data;
```
- get size : 
```cpp
int mapSize = mapName.size();
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
- find key in map
```cpp
bool isExit = mapName.count(key);
// 1 if key exist, 0 otherwise
```

### [Vector](https://shengyu7697.github.io/std-vector/) :
- declare
```cpp
//1d
vecotr<dataType> vector1dName;
// 2d
vecotr<vector<dataType>> vector2dName;
// initial
vector<dataType> vectorName = {data1, data2, data3};
// initial with same value
vector<dataType> vectorName(int size, dataType value);
```
- asign data : 
```cpp
// method 1
vectorName.push_back(data);
// method 2
vectorName[index] = data;
// erase the last
vectorName.pop_back();
```
- get size : 
```cpp
int vecSize = vectorName.size();
```

### Array :
- declare 2d-Array by pointer
```cpp
int** arr = new int*[m];
for(int i=0;i<m;i++)
    arr[i] = new int[n];

// Don't forget release address after using!
for(int i=0;i<m;i++)
    delete [] *(arr+i);
delete [] arr;
```

### [auto](https://blog.gtwang.org/programming/cpp-auto-variable-tutorial/) :
`auto` is a flexible data type
```cpp
vector<int> v = {0, 1, 2, 3};
for (auto& x : v) {
    std::cout<<x+1<<' ';
}
// Output : 1 2 3 4
```
## Function
### max/min value :
`INT_MAX` is a max value of integer.
`INT_MIN` is a max value of integer.

### [Sort](https://shengyu7697.github.io/std-sort/) :
- array
```cpp
int arr[] = {4, 5, 8, 3, 7, 1, 2, 6, 10, 9};
// method 1
sort(arr, arr+10 /*, less<int>*/);
// method 1
sort(begin(arr), end(arr) /*, greater<int>*/);
```
> `less<Type>` with `<` ; `less_equal<Type>` with `<=` <br>
> `greater<Type>` with `>` ; `greater_equal<Type>` with `>=` <br>
> `Type` also can use `char` to sort string
vector
- sort (less first)
```cpp
int vector<int> v = {5, 4, 1, 7, 3, 8, 9, 10, 6, 2};
sort(v.begin(), v.begin()+10);
```
- reverse 
```cpp
//method 1
sort(v.rbegin(), v.rend());

// method 2
bool mycompare(int a, int b) {
    return a > b; // large first
}
sort(v.begin(), v.end(), mycompare);
```

### [Random](https://blog.gtwang.org/programming/c-cpp-rand-random-number-generation-tutorial-examples/) :
`rand()` will output a integer from 0 to `RAND_MAX`
```cpp
// seed
srand(time(NULL));

// x domain [0, RAND_MAX]
int x = rand();
// x domain [0, 1)
doubel x = (double) rand()/(RAND_MAX+1.0);
// x domain fixed in [min, max]
int min = 4;
int max = 10;
int x = rand() % (max - min + 1) + min; // [4, 10]
// x domain fixed in [3.6, 7.8)
double min = 3.6;
double max = 7.8;
double x = (max - min) * rand() / (RAND_MAX + 1.0) + min;
```
>  RAND_MAX = 32767

## Algorithm
### Euclidean algorithm (get GCD)
```cpp
int gcd(int a, int b){
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
cout<<gcd(a, b);
```

## structure of dice
[ 2 ]  
[ 1 ][ 4 ][ 6 ][ 3 ]  
[ 5 ]  