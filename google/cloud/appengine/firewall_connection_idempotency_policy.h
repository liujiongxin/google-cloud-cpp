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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_FIREWALL_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_FIREWALL_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/appengine/v1/appengine.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace appengine {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class FirewallConnectionIdempotencyPolicy {
 public:
  virtual ~FirewallConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<FirewallConnectionIdempotencyPolicy> clone()
      const = 0;

  virtual google::cloud::internal::Idempotency ListIngressRules(
      google::appengine::v1::ListIngressRulesRequest request) = 0;

  virtual google::cloud::internal::Idempotency BatchUpdateIngressRules(
      google::appengine::v1::BatchUpdateIngressRulesRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency CreateIngressRule(
      google::appengine::v1::CreateIngressRuleRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency GetIngressRule(
      google::appengine::v1::GetIngressRuleRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency UpdateIngressRule(
      google::appengine::v1::UpdateIngressRuleRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency DeleteIngressRule(
      google::appengine::v1::DeleteIngressRuleRequest const& request) = 0;
};

std::unique_ptr<FirewallConnectionIdempotencyPolicy>
MakeDefaultFirewallConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_FIREWALL_CONNECTION_IDEMPOTENCY_POLICY_H
