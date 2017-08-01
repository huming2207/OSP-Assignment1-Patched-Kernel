#include <linux/kernel.h>
#include <linux/syscalls.h>
#include <linux/init.h>
#include <linux/sched.h>
#include "syscall_module_minghu.h"

asmlinkage long osp_syscall_hu(void)
{
    printk("Hello world from Ming Hu's system call!");
    return 0;
}
