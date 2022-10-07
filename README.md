# CPE_Practice ： 個人 CPE 檢定練習

## 個人筆記

注意! cin.get()才可以讀空白字元' '跟換行'\n'，一般cin只能讀個個資料

### map 使用：
#### 宣告 map
```Cpp
map<dataType, dataType> mapName;
```
#### 賦值 : 
```cpp=
mapName[index] = data;
```
#### 尋訪(前往後) :
```cpp=
map<dataType, dataType>::iterator iter;
for(iter = mapName.begin(); iter != mapName.end(); iter++)
```
index 為 `iter->first`，data 為 `iter->seCpp=ond`
#### 尋訪(後往前) : 
```cpp=
map<dataType, dataType>::reverse_iterator iter;
for(iter = mapName.**rbegin()**; iter != mapName**.rend()**; iter++)
```
index 為 `iter->first`，data 為 `iter->second`

#### 找出 string 中某個 string 的 index 值
```cpp=
stringName.find('[string]');
```

#### 設定輸出時的小數點位數
```cpp=
cout << fixed << setprecision(4) << 0.12345;
// Output : 0.1235
```

#### 用指標宣告二維陣列空間
```cpp=
int** arr = new int*[m];
for(int i=0;i<m;i++)
    arr[i] = new int[n];

// 使用完畢後別忘了釋放位址
for(int i=0;i<m;i++)
    delete [] *(arr+i);
delete [] arr;
```

#### 將值以特定進制轉換為十進制
```cpp=
strtol(char[], NULL, int base);
```

#### 骰子構造
[ 2 ]
[ 1 ][ 4 ][ 6 ][ 3 ]
[ 5 ]