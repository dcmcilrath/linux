/*
 *	Compression extension for SSD with ext4
 *	Douglas McIlrath 2017
 */

#include <linux/printk.h>
#include <linux/buffer_head.h>
#include <linux/lzo.h>

char workspace[LZO1X_MEM_COMPRESS];
char compression_buffer[4096*COMPRESSION_GROUP_SIZE];
