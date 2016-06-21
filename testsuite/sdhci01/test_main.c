/*
 *  This is the body of the test. It does not do much except ensure
 *  that the target is alive after initializing the TCP/IP stack.
 */

#include <assert.h>
#include <inttypes.h>
#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
//#include <bsp/nexus-devices.h>

#include <rtems.h>
#include <rtems/media.h>
#include <rtems/chain.h>
#include <rtems/libio_.h>
#include <rtems/shell.h>
#include <rtems/console.h>
#include <rtems/diskdevs.h>
#include <rtems/bsd/bsd.h>

#define TEST_NAME "LIBBSD SDHCI 01"
#define ASSERT_SC(sc) assert((sc) == RTEMS_SUCCESSFUL)

static void test_main(void)
{
  rtems_status_code sc = RTEMS_SUCCESSFUL;
  sc = rtems_disk_io_initialize();
  ASSERT_SC(sc);

  sc = rtems_shell_init(
    "SHLL",
    16 * 1024,
    10,
    CONSOLE_DEVICE_NAME,
    false,
    true,
    NULL
  );
  ASSERT_SC(sc);
  exit( 0 );
}

/* for old configuration structure */
#include <rtems/rtems_bsdnet.h>

/*
 * Network configuration
 */
struct rtems_bsdnet_config rtems_bsdnet_config = {
    NULL,                   /* Network interface */
    NULL,                   /* Use fixed network configuration */
    0,                      /* Default network task priority */
    0,                      /* Default mbuf capacity */
    0,                      /* Default mbuf cluster capacity */
    "testSystem",           /* Host name */
    "nowhere.com",          /* Domain name */
    "127.0.0.1",            /* Gateway */
    "127.0.0.1",            /* Log host */
    {"127.0.0.1" },         /* Name server(s) */
    {"127.0.0.1" },         /* NTP server(s) */
    0,
    0,
    0,
    0,
    0
};


#define CONFIGURE_APPLICATION_NEEDS_CLOCK_DRIVER
#define CONFIGURE_APPLICATION_NEEDS_CONSOLE_DRIVER
#define CONFIGURE_APPLICATION_NEEDS_LIBBLOCK

#define CONFIGURE_USE_IMFS_AS_BASE_FILESYSTEM

#define CONFIGURE_FILESYSTEM_IMFS
#define CONFIGURE_FILESYSTEM_DOSFS

#define CONFIGURE_LIBIO_MAXIMUM_FILE_DESCRIPTORS 32

#define CONFIGURE_MAXIMUM_USER_EXTENSIONS 1

#define CONFIGURE_UNLIMITED_OBJECTS

#define CONFIGURE_UNIFIED_WORK_AREAS

#define CONFIGURE_RTEMS_INIT_TASKS_TABLE

#define CONFIGURE_INIT_TASK_ATTRIBUTES RTEMS_FLOATING_POINT

#define CONFIGURE_STACK_CHECKER_ENABLED

#define CONFIGURE_INIT

#include <rtems/confdefs.h>

#define CONFIGURE_SHELL_COMMANDS_INIT

#include "demo-shell.h"
#include "demo-shell-block-devices.h"
#include <rtems/shellconfig.h>

#include <rtems/bsd/test/default-init.h>
