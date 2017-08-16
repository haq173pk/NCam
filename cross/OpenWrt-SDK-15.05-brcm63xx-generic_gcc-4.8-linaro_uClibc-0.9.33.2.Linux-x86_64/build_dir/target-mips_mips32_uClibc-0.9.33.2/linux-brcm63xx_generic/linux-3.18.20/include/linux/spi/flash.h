#ifndef LINUX_SPI_FLASH_H
#define LINUX_SPI_FLASH_H

struct mtd_partition;
struct mtd_part_parser_data;
/**
 * struct flash_platform_data: board-specific flash data
 * @name: optional flash device name (eg, as used with mtdparts=)
 * @parts: optional array of mtd_partitions for static partitioning
 * @nr_parts: number of mtd_partitions for static partitoning
 * @type: optional flash device type (e.g. m25p80 vs m25p64), for use
 *	with chips that can't be queried for JEDEC or other IDs
 * @part_probe_types: optional list of MTD parser names to use for
 *	partitioning
 * @pp_data: optional partition parser data.
 *
 * @max_transfer_len: option maximum read/write length limitation for
 *	SPI controllers not able to transfer any length commands.
 * Board init code (in arch/.../mach-xxx/board-yyy.c files) can
 * provide information about SPI flash parts (such as DataFlash) to
 * help set up the device and its appropriate default partitioning.
 *
 * Note that for DataFlash, sizes for pages, blocks, and sectors are
 * rarely powers of two; and partitions should be sector-aligned.
 */
struct flash_platform_data {
	char		*name;
	struct mtd_partition *parts;
	unsigned int	nr_parts;

	char		*type;

	const char	**part_probe_types;
	struct mtd_part_parser_data *pp_data;

	unsigned int	max_transfer_len;
	/* we'll likely add more ... use JEDEC IDs, etc */
};

#endif