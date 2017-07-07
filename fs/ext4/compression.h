/*
 *	Compression extension for SSD with ext4
 *	Douglas McIlrath 2017
 */

#ifndef EXT4_COMPRESSION
#define EXT4_COMPRESSION

extern void compress_page(struct buffer_head *);

#endif
