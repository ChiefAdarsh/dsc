#ifndef _DSCMOD_H
#define _DSCMOD_H

static int format_dsc_msg(char *outbuf, char *text_msg, int len);
static int dsc_msg_to_fifo(struct kfifo *, char *msg, int msg_len);

#endif
