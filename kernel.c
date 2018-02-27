#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

int __init hello_start(void){
    printk(KERN_INFO "Loading\n");
    printk(KERN_INFO "kernel\n");
    return 0;
}
void __exit hello_end(void){
    printk(KERN_INFO "bye\n");
}

module_init(hello_start);
module_exit(hello_end);
