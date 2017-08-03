#include <linux/kernel.h>
#include <linux/syscalls.h>

asmlinkage long osp_syscall_hu(void)
{
    printk("Hello world from Ming Hu's system call!");
    return 0;
}
