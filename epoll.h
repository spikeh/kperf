/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright Meta Platforms, Inc. and affiliates */

#include "worker.h"

#ifndef EPOLL_H
#define EPOLL_H 1

void worker_epoll_init(struct worker_state *state);

#endif /* EPOLL_H */
