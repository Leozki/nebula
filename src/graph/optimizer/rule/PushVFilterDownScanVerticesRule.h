/* Copyright (c) 2021 vesoft inc. All rights reserved.
 *
 * This source code is licensed under Apache 2.0 License.
 */

#ifndef GRAPH_OPTIMIZER_RULE_PUSHVFILTERDOWNSCANVERTICESRULE_H
#define GRAPH_OPTIMIZER_RULE_PUSHVFILTERDOWNSCANVERTICESRULE_H

#include <memory>

#include "graph/optimizer/OptRule.h"

namespace nebula {
namespace opt {

class PushVFilterDownScanVerticesRule final : public OptRule {
 public:
  const Pattern &pattern() const override;

  bool match(OptContext *ctx, const MatchedResult &matched) const override;
  StatusOr<TransformResult> transform(OptContext *ctx, const MatchedResult &matched) const override;

  std::string toString() const override;

 private:
  PushVFilterDownScanVerticesRule();

  static std::unique_ptr<OptRule> kInstance;
};

}  // namespace opt
}  // namespace nebula
#endif
