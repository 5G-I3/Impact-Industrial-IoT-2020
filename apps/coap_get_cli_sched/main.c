/*
 * Copyright (C) 2015 Freie Universität Berlin
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     examples
 * @{
 *
 * @file
 * @brief       Example application for demonstrating the RIOT network stack
 *
 * @author      Hauke Petersen <hauke.petersen@fu-berlin.de>
 *
 * @}
 */

#include <stdio.h>

#include "shell.h"
#include "msg.h"
#include "pktcnt.h"

#define MAIN_QUEUE_SIZE     (8)
static msg_t _main_msg_queue[MAIN_QUEUE_SIZE];

extern void gcoap_cli_init(void);

#ifdef MODULE_PKTCNT_FAST
static int pktcnt_fast(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    pktcnt_fast_print();
    return 0;
}
#endif

static int pktcnt_start(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    /* init pktcnt */
#ifndef MODULE_PKTCNT_FAST
    if (pktcnt_init() != PKTCNT_OK) {
        puts("error: unable to initialize pktcnt");
        return 1;
    }
#endif
    gcoap_cli_init();
    return 0;
}

static const shell_command_t shell_commands[] = {
    { "pktcnt", "Start pktcnt", pktcnt_start },
#ifdef MODULE_PKTCNT_FAST
    { "pktcnt_fast", "Fast counters", pktcnt_fast },
#endif
    { NULL, NULL, NULL }
};

int main(void)
{
    /* we need a message queue for the thread running the shell in order to
     * receive potentially fast incoming networking packets */
    msg_init_queue(_main_msg_queue, MAIN_QUEUE_SIZE);
    puts("RIOT border router example application");

    /* start shell */
    puts("All up, running the shell now");
    char line_buf[SHELL_DEFAULT_BUFSIZE];
    shell_run(shell_commands, line_buf, SHELL_DEFAULT_BUFSIZE);

    /* should be never reached */
    return 0;
}
