#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xf230cadf, "module_layout" },
	{ 0x4998222d, "hrtimer_cancel" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x8574ca6c, "gpio_request_array" },
	{ 0xe549e5f5, "__register_chrdev" },
	{ 0x5b586cbc, "hrtimer_init" },
	{ 0x2f548802, "ns_to_timeval" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x17ae16c5, "device_destroy" },
	{ 0xd64795cd, "class_destroy" },
	{ 0xabe5f4f7, "device_create" },
	{ 0x4751a8ae, "__class_create" },
	{ 0x89ab7bf8, "cdev_add" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x2b68ed92, "cdev_init" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0x9dfdf722, "gpio_free_array" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xc04ebd1, "gpiod_to_irq" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x5f754e5a, "memset" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xe2df5c3d, "gpiod_direction_output_raw" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf720264e, "gpiod_direction_input" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x924948ef, "gpiod_get_raw_value" },
	{ 0xe851e37e, "gpio_to_desc" },
	{ 0x4a16dd15, "hrtimer_start_range_ns" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "693459D477B3D9FADDD5B41");
