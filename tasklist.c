//-------------------------------------------------------------------
//	tasklist.c： 本内核文件创建一个proc伪文件，'/proc/tasklist'
//	通过如下命令可以显示系统中所有进程的部分信息
//	注意：Makefile文件必须正确放置在当前目录下。
//  编译命令： make 
//  内核模块添加：$sudo insmod tasklist.ko
//  添加内核模块后读取并信息tasklist内核信息： $ cat /proc/tasklist
//  内核模块删除：$sudo rmmod tasklist
//	NOTE: Written and tested with Linux kernel version 4.15.6 
//  strace函数可用于追踪系统调用,命令格式如下所示：
//  $ strace cat /proc/tasklist
//-------------------------------------------------------------------
