void print(char* str,int row,int col,int len,int style);    //在屏幕上某个位置打印字符串(包装WriteStr支持滚屏)                                               //等待键盘输入,返回输入字符的ASCII
void Disk(void* addr,int cylinker,int head,int sector,int num,int command);                                  //从磁盘某个扇区加载数据