/* Copyright (c) 2021 vesoft inc. All rights reserved.
 *
 * This source code is licensed under Apache 2.0 License.
 */

#ifndef GRAPH_EXECUTOR_ADMIN_DROP_HOST_EXECUTOR_H_
#define GRAPH_EXECUTOR_ADMIN_DROP_HOST_EXECUTOR_H_

#include "graph/executor/Executor.h"

namespace nebula {
namespace graph {

class DropHostsExecutor final : public Executor {
 public:
  DropHostsExecutor(const PlanNode *node, QueryContext *qctx)
      : Executor("DropHostsExecutor", node, qctx) {}

  folly::Future<Status> execute() override;
};

}  // namespace graph
}  // namespace nebula

#endif  // GRAPH_EXECUTOR_ADMIN_DROP_HOST_EXECUTOR_H_
