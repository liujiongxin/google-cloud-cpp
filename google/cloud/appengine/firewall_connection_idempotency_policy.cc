// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/firewall_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace appengine {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::internal::Idempotency;

FirewallConnectionIdempotencyPolicy::~FirewallConnectionIdempotencyPolicy() =
    default;

namespace {
class DefaultFirewallConnectionIdempotencyPolicy
    : public FirewallConnectionIdempotencyPolicy {
 public:
  ~DefaultFirewallConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<FirewallConnectionIdempotencyPolicy> clone() const override {
    return absl::make_unique<DefaultFirewallConnectionIdempotencyPolicy>(*this);
  }

  Idempotency ListIngressRules(
      google::appengine::v1::ListIngressRulesRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency BatchUpdateIngressRules(
      google::appengine::v1::BatchUpdateIngressRulesRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateIngressRule(
      google::appengine::v1::CreateIngressRuleRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetIngressRule(
      google::appengine::v1::GetIngressRuleRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency UpdateIngressRule(
      google::appengine::v1::UpdateIngressRuleRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteIngressRule(
      google::appengine::v1::DeleteIngressRuleRequest const&) override {
    return Idempotency::kNonIdempotent;
  }
};
}  // namespace

std::unique_ptr<FirewallConnectionIdempotencyPolicy>
MakeDefaultFirewallConnectionIdempotencyPolicy() {
  return absl::make_unique<DefaultFirewallConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine
}  // namespace cloud
}  // namespace google
