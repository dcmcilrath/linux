/*
 *	Compression extension for SSD with ext4
 *	Douglas McIlrath 2017
 */

#include <linux/printk.h>
#include <linux/buffer_head.h>

void ext4_compression_debug(const char *fwd, ...)
{
	va_list args;
	char msg[256];

	strcpy(msg, "EXT4_COMPRESSION: ");
	strcat(msg, fwd);
	
	va_start(args, fwd);
	printk(msg, args);
	va_end(args);
}

void compress_page(struct buffer_head * bh)
{
	printk("EXT4_COMPRESSION: made it to compress_page");
	ext4_compression_debug("got page buffer with size %d\n", bh->b_size);
}
