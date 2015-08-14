#include <machine/rtems-bsd-kernel-space.h>

#include <rtems/bsd/sys/param.h>
#include <sys/queue.h>
#include <sys/kernel.h>
#include <sys/kobj.h>
#include <rtems/bsd/sys/types.h>
#include <sys/systm.h>
#include <rtems/bsd/sys/lock.h>
#include <sys/mutex.h>
#include <sys/sysctl.h>
#include <sys/taskqueue.h>
#include <machine/bus.h>
#include <dev/mmc/bridge.h>
#include <dev/mmc/mmcreg.h>
#include <dev/sdhci/sdhci.h>

struct sdhci_slot;

#include <rtems/bsd/local/sdhci_if.h>

struct kobjop_desc sdhci_read_1_desc = {
	0, (kobjop_t) 0
};

struct kobjop_desc sdhci_read_2_desc = {
	0, (kobjop_t) 0
};

struct kobjop_desc sdhci_read_4_desc = {
	0, (kobjop_t) 0
};

struct kobjop_desc sdhci_read_multi_4_desc = {
	0, (kobjop_t) 0
};

struct kobjop_desc sdhci_write_1_desc = {
	0, (kobjop_t) 0
};

struct kobjop_desc sdhci_write_2_desc = {
	0, (kobjop_t) 0
};

struct kobjop_desc sdhci_write_4_desc = {
	0, (kobjop_t) 0
};

struct kobjop_desc sdhci_write_multi_4_desc = {
	0, (kobjop_t) 0
};

struct kobjop_desc sdhci_platform_will_handle_desc = {
	0, (kobjop_t) 0
};

struct kobjop_desc sdhci_platform_start_transfer_desc = {
	0, (kobjop_t) 0
};

struct kobjop_desc sdhci_platform_finish_transfer_desc = {
	0, (kobjop_t) 0
};

struct kobjop_desc sdhci_min_freq_desc = {
	0, (kobjop_t) sdhci_generic_min_freq
};

