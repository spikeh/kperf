/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright Meta Platforms, Inc. and affiliates */

#include "worker.h"

#ifndef IOU_H
#define IOU_H 1

struct session_state_iou {
	char ifname[IFNAMSIZ];
	int rss_context;
	int queue_id;
};

void worker_iou_init(struct worker_state *state);

int iou_zerocopy_rx_setup(struct session_state_iou *iou, int fd,
			  int num_queues);
int iou_zerocopy_rx_teardown(struct session_state_iou *iou);

#endif /* IOU_H */
