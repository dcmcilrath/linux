/*
 *	Compression extension for SSD with ext4
 *	Douglas McIlrath 2017
 */

#include <linux/printk.h>
#include <linux/buffer_head.h>
#include <linux/lzo.h>

char workspace[LZO1X_MEM_COMPRESS];

void ext4c_debug(const char *fwd, ...)
{
	va_list args;
	char msg[256];

	strcpy(msg, "EXT4C: ");
	strcat(msg, fwd);
	
	va_start(args, fwd);
	printk(msg, args);
	va_end(args);
}

void compress_page(struct buffer_head * bh)
{
	ext4c_debug("got page buffer with size %lu\n", bh->b_size);	
}
