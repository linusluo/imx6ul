


#include <linux/module.h>
#include <linux/types.h>
#include <linux/kobject.h>
#include <linux/io.h>


int kat_gpio_control_init(void)
{

	printk("kat_gpio_control_init .....\n");
}

int kat_gpio_control_exit(void)
{

}


MODULE_AUTHOR("linus luo");
MODULE_LICENSE("Dual BSD/GPL");
module_init(kat_gpio_control_init);
module_exit(kat_gpio_control_exit);
