# CPE_Practice

注意! cin.get()才可以讀空白字元' '跟換行'\n'，一般cin只能讀個個資料

宣告map : map<dataType, dataType> mapName;
insert : mapName[index] = data;
尋訪 : 
map<dataType, dataType>::iterator iter;
for(iter=mapName.begin();iter!=mapName.end();iter++)
index為iter->first，data為iter->second

找出string中的index可用string.find('string',起始位址(0));