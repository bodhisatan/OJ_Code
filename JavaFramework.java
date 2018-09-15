
//======================================常用方法==============================================================

//------------------------------------数组-----------------------------------------------------

//...............................java.util.Arrays.......................................

//二分查找key在a数组中的索引，若不包含则返回负数(要求a已升序排列)
int binarySearch(type[] a, type key)

//二分查找a数组中 [fromIndex, toIndex) 范围内key的索引
int binarySearch(type[] a, int fromIndex, int toIndex, type key)

//将original数组复制成一个长度为newLength的新数组，若不足newLength后补0，false，null
type[] copyOf(type[] original, int newLength)

//复制original数组[from,to)索引的元素
type[] copyOfRange(type[] original, int from, int to)

//若a1，a2长度相等，元素也一一相同，返回true，反之则非
boolean equals(type[] a1, type[] a2)

//将a数组所有元素赋值为val
void fill(type[] a, type val)

//将a数组[from, to)赋值为val
void fill(type[] a, int from, int to, type val)

//排序
void sort(type[] a)

//对a数组[from, to)排序
void sort(type[] a, int from, int to)

//将数组转换为字符串，以[1, 2, 3, 4]形式
String toString(type[] a)

//.............................java.lang.System........................................

//规定两数组的起始索引，从src赋值length个元素给dest
static void arraycopy(Object src, int srcPos, Object dest, int destPos, int length)