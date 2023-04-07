// Copyright 2023 Google LLC
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
// source: google/cloud/workstations/v1/workstations.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKSTATIONS_V1_INTERNAL_WORKSTATIONS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKSTATIONS_V1_INTERNAL_WORKSTATIONS_CONNECTION_IMPL_H

#include "google/cloud/workstations/v1/internal/workstations_retry_traits.h"
#include "google/cloud/workstations/v1/internal/workstations_stub.h"
#include "google/cloud/workstations/v1/workstations_connection.h"
#include "google/cloud/workstations/v1/workstations_connection_idempotency_policy.h"
#include "google/cloud/workstations/v1/workstations_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace workstations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class WorkstationsConnectionImpl
    : public workstations_v1::WorkstationsConnection {
 public:
  ~WorkstationsConnectionImpl() override = default;

  WorkstationsConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<workstations_v1_internal::WorkstationsStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::workstations::v1::WorkstationCluster>
  GetWorkstationCluster(
      google::cloud::workstations::v1::GetWorkstationClusterRequest const&
          request) override;

  StreamRange<google::cloud::workstations::v1::WorkstationCluster>
  ListWorkstationClusters(
      google::cloud::workstations::v1::ListWorkstationClustersRequest request)
      override;

  future<StatusOr<google::cloud::workstations::v1::WorkstationCluster>>
  CreateWorkstationCluster(
      google::cloud::workstations::v1::CreateWorkstationClusterRequest const&
          request) override;

  future<StatusOr<google::cloud::workstations::v1::WorkstationCluster>>
  UpdateWorkstationCluster(
      google::cloud::workstations::v1::UpdateWorkstationClusterRequest const&
          request) override;

  future<StatusOr<google::cloud::workstations::v1::WorkstationCluster>>
  DeleteWorkstationCluster(
      google::cloud::workstations::v1::DeleteWorkstationClusterRequest const&
          request) override;

  StatusOr<google::cloud::workstations::v1::WorkstationConfig>
  GetWorkstationConfig(
      google::cloud::workstations::v1::GetWorkstationConfigRequest const&
          request) override;

  StreamRange<google::cloud::workstations::v1::WorkstationConfig>
  ListWorkstationConfigs(
      google::cloud::workstations::v1::ListWorkstationConfigsRequest request)
      override;

  StreamRange<google::cloud::workstations::v1::WorkstationConfig>
  ListUsableWorkstationConfigs(
      google::cloud::workstations::v1::ListUsableWorkstationConfigsRequest
          request) override;

  future<StatusOr<google::cloud::workstations::v1::WorkstationConfig>>
  CreateWorkstationConfig(
      google::cloud::workstations::v1::CreateWorkstationConfigRequest const&
          request) override;

  future<StatusOr<google::cloud::workstations::v1::WorkstationConfig>>
  UpdateWorkstationConfig(
      google::cloud::workstations::v1::UpdateWorkstationConfigRequest const&
          request) override;

  future<StatusOr<google::cloud::workstations::v1::WorkstationConfig>>
  DeleteWorkstationConfig(
      google::cloud::workstations::v1::DeleteWorkstationConfigRequest const&
          request) override;

  StatusOr<google::cloud::workstations::v1::Workstation> GetWorkstation(
      google::cloud::workstations::v1::GetWorkstationRequest const& request)
      override;

  StreamRange<google::cloud::workstations::v1::Workstation> ListWorkstations(
      google::cloud::workstations::v1::ListWorkstationsRequest request)
      override;

  StreamRange<google::cloud::workstations::v1::Workstation>
  ListUsableWorkstations(
      google::cloud::workstations::v1::ListUsableWorkstationsRequest request)
      override;

  future<StatusOr<google::cloud::workstations::v1::Workstation>>
  CreateWorkstation(
      google::cloud::workstations::v1::CreateWorkstationRequest const& request)
      override;

  future<StatusOr<google::cloud::workstations::v1::Workstation>>
  UpdateWorkstation(
      google::cloud::workstations::v1::UpdateWorkstationRequest const& request)
      override;

  future<StatusOr<google::cloud::workstations::v1::Workstation>>
  DeleteWorkstation(
      google::cloud::workstations::v1::DeleteWorkstationRequest const& request)
      override;

  future<StatusOr<google::cloud::workstations::v1::Workstation>>
  StartWorkstation(
      google::cloud::workstations::v1::StartWorkstationRequest const& request)
      override;

  future<StatusOr<google::cloud::workstations::v1::Workstation>>
  StopWorkstation(google::cloud::workstations::v1::StopWorkstationRequest const&
                      request) override;

  StatusOr<google::cloud::workstations::v1::GenerateAccessTokenResponse>
  GenerateAccessToken(
      google::cloud::workstations::v1::GenerateAccessTokenRequest const&
          request) override;

 private:
  std::unique_ptr<workstations_v1::WorkstationsRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<workstations_v1::WorkstationsRetryPolicyOption>()) {
      return options.get<workstations_v1::WorkstationsRetryPolicyOption>()
          ->clone();
    }
    return options_.get<workstations_v1::WorkstationsRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<workstations_v1::WorkstationsBackoffPolicyOption>()) {
      return options.get<workstations_v1::WorkstationsBackoffPolicyOption>()
          ->clone();
    }
    return options_.get<workstations_v1::WorkstationsBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<workstations_v1::WorkstationsConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            workstations_v1::WorkstationsConnectionIdempotencyPolicyOption>()) {
      return options
          .get<workstations_v1::WorkstationsConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<workstations_v1::WorkstationsConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<workstations_v1::WorkstationsPollingPolicyOption>()) {
      return options.get<workstations_v1::WorkstationsPollingPolicyOption>()
          ->clone();
    }
    return options_.get<workstations_v1::WorkstationsPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<workstations_v1_internal::WorkstationsStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workstations_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKSTATIONS_V1_INTERNAL_WORKSTATIONS_CONNECTION_IMPL_H
