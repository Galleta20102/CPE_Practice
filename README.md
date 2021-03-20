# CPE_Practice

# 注意! cin.get()才可以讀空白字元' '跟換行'\n'，一般cin只能讀個個資料

# 宣告map : map<dataType, dataType> mapName;
# insert : mapName[index] = data;
# 尋訪 : 
# map<dataType, dataType>::iterator iter;
# for(iter=mapName.begin();iter!=mapName.end();iter++)
# index為iter->first，data為iter->second

# 找出string中的index可用string.find('string',起始位址(0));

# 設定輸出小數點
# cout << fixed << setprecision(4) << 0.12345
# Output : 0.1235

# 用指標宣告二維陣列
# int** arr = new int*[m];
# for(int i=0;i<m;i++)
#   arr[i] = new int*[n];
# 別忘了釋放位址
# for(int i=0;i<m;i++)
#   delete [] *(arr+i);
# delete [] arr;

# 將值以特定進制轉換為十進制
# strtol(char[], NULL, int base);