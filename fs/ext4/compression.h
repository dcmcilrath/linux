/*
 *	Compression extension for SSD with ext4
 *	Douglas McIlrath 2017
 */

#ifndef EXT4_COMPRESSION
#define EXT4_COMPRESSION

#define COMPRESSION_GROUP_SIZE 4	// TBD

/*
 *	Structure for keeping track of ext4 compression
 */
struct compression_group
{
	struct inode * parent_inode;

	unsigned int pg_count;
	unsigned int pg_count_compressed;

	unsigned long size;
	unsigned long size_compressed;
};

/*
 *	Need to add:
 *		function to build structure from page request
 *		functions for deflation/inflation
 *
 */


#endif
