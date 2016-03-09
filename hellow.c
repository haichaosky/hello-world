#include <linux/init.h>
#include <linux/module.h>

static int hello_init(void)
{
	printk(KERN_INFO, "helloaa world enter.\n");
	return 0;
}

static int hello_exit(void)
{
	printk(KERN_INFO, "hello world exit.\n");
	return 0;
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_AUTHOR("wanghaichao <wanghaichao@hisense.com>");
MODULE_LISENSE("Dual BSD/GPL");
MODULE_DESCRIPTION("a hello world");
MODULE_ALIAS("a simple module");
