/*
 * This file is produced automatically.
 * Do not modify anything in here by hand.
 *
 * Created from source file
 *   sdhci/sdhci_if.m
 * with
 *   makeobjops.awk
 *
 * See the source file for legal information
 */

#ifndef _sdhci_if_h_
#define _sdhci_if_h_

extern struct kobjop_desc sdhci_read_1_desc;
typedef uint8_t sdhci_read_1_t(device_t brdev, struct sdhci_slot *slot,
                               bus_size_t off);
static __inline uint8_t SDHCI_READ_1(device_t brdev, struct sdhci_slot *slot,
                     bus_size_t off)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)brdev)->ops,sdhci_read_1);
	return ((sdhci_read_1_t *) _m)(brdev, slot, off);
}

extern struct kobjop_desc sdhci_read_2_desc;
typedef uint16_t sdhci_read_2_t(device_t brdev, struct sdhci_slot *slot,
                                bus_size_t off);
static __inline uint16_t SDHCI_READ_2(device_t brdev, struct sdhci_slot *slot,
                      bus_size_t off)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)brdev)->ops,sdhci_read_2);
	return ((sdhci_read_2_t *) _m)(brdev, slot, off);
}

extern struct kobjop_desc sdhci_read_4_desc;
typedef uint32_t sdhci_read_4_t(device_t brdev, struct sdhci_slot *slot,
                                bus_size_t off);
static __inline uint32_t SDHCI_READ_4(device_t brdev, struct sdhci_slot *slot,
                      bus_size_t off)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)brdev)->ops,sdhci_read_4);
	return ((sdhci_read_4_t *) _m)(brdev, slot, off);
}

extern struct kobjop_desc sdhci_read_multi_4_desc;
typedef void sdhci_read_multi_4_t(device_t brdev, struct sdhci_slot *slot,
                                  bus_size_t off, uint32_t *data,
                                  bus_size_t count);
static __inline void SDHCI_READ_MULTI_4(device_t brdev, struct sdhci_slot *slot,
                        bus_size_t off, uint32_t *data, bus_size_t count)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)brdev)->ops,sdhci_read_multi_4);
	((sdhci_read_multi_4_t *) _m)(brdev, slot, off, data, count);
}

extern struct kobjop_desc sdhci_write_1_desc;
typedef void sdhci_write_1_t(device_t brdev, struct sdhci_slot *slot,
                             bus_size_t off, uint8_t val);
static __inline void SDHCI_WRITE_1(device_t brdev, struct sdhci_slot *slot,
                   bus_size_t off, uint8_t val)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)brdev)->ops,sdhci_write_1);
	((sdhci_write_1_t *) _m)(brdev, slot, off, val);
}

extern struct kobjop_desc sdhci_write_2_desc;
typedef void sdhci_write_2_t(device_t brdev, struct sdhci_slot *slot,
                             bus_size_t off, uint16_t val);
static __inline void SDHCI_WRITE_2(device_t brdev, struct sdhci_slot *slot,
                   bus_size_t off, uint16_t val)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)brdev)->ops,sdhci_write_2);
	((sdhci_write_2_t *) _m)(brdev, slot, off, val);
}

extern struct kobjop_desc sdhci_write_4_desc;
typedef void sdhci_write_4_t(device_t brdev, struct sdhci_slot *slot,
                             bus_size_t off, uint32_t val);
static __inline void SDHCI_WRITE_4(device_t brdev, struct sdhci_slot *slot,
                   bus_size_t off, uint32_t val)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)brdev)->ops,sdhci_write_4);
	((sdhci_write_4_t *) _m)(brdev, slot, off, val);
}

extern struct kobjop_desc sdhci_write_multi_4_desc;
typedef void sdhci_write_multi_4_t(device_t brdev, struct sdhci_slot *slot,
                                   bus_size_t off, uint32_t *data,
                                   bus_size_t count);
static __inline void SDHCI_WRITE_MULTI_4(device_t brdev,
                         struct sdhci_slot *slot, bus_size_t off,
                         uint32_t *data, bus_size_t count)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)brdev)->ops,sdhci_write_multi_4);
	((sdhci_write_multi_4_t *) _m)(brdev, slot, off, data, count);
}

extern struct kobjop_desc sdhci_platform_will_handle_desc;
typedef int sdhci_platform_will_handle_t(device_t brdev,
                                         struct sdhci_slot *slot);
static __inline int SDHCI_PLATFORM_WILL_HANDLE(device_t brdev,
                               struct sdhci_slot *slot)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)brdev)->ops,sdhci_platform_will_handle);
	return ((sdhci_platform_will_handle_t *) _m)(brdev, slot);
}

extern struct kobjop_desc sdhci_platform_start_transfer_desc;
typedef void sdhci_platform_start_transfer_t(device_t brdev,
                                             struct sdhci_slot *slot,
                                             uint32_t *intmask);
static __inline void SDHCI_PLATFORM_START_TRANSFER(device_t brdev,
                                   struct sdhci_slot *slot, uint32_t *intmask)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)brdev)->ops,sdhci_platform_start_transfer);
	((sdhci_platform_start_transfer_t *) _m)(brdev, slot, intmask);
}

extern struct kobjop_desc sdhci_platform_finish_transfer_desc;
typedef void sdhci_platform_finish_transfer_t(device_t brdev,
                                              struct sdhci_slot *slot);
static __inline void SDHCI_PLATFORM_FINISH_TRANSFER(device_t brdev,
                                    struct sdhci_slot *slot)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)brdev)->ops,sdhci_platform_finish_transfer);
	((sdhci_platform_finish_transfer_t *) _m)(brdev, slot);
}

extern struct kobjop_desc sdhci_min_freq_desc;
typedef uint32_t sdhci_min_freq_t(device_t brdev, struct sdhci_slot *slot);
static __inline uint32_t SDHCI_MIN_FREQ(device_t brdev, struct sdhci_slot *slot)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)brdev)->ops,sdhci_min_freq);
	return ((sdhci_min_freq_t *) _m)(brdev, slot);
}

#endif /* _sdhci_if_h_ */