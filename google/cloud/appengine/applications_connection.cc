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

#include "google/cloud/appengine/applications_connection.h"
#include "google/cloud/appengine/applications_options.h"
#include "google/cloud/appengine/internal/applications_option_defaults.h"
#include "google/cloud/appengine/internal/applications_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace appengine {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ApplicationsConnection::~ApplicationsConnection() = default;

StatusOr<google::appengine::v1::Application>
ApplicationsConnection::GetApplication(
    google::appengine::v1::GetApplicationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::appengine::v1::Application>>
ApplicationsConnection::CreateApplication(
    google::appengine::v1::CreateApplicationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::appengine::v1::Application>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::appengine::v1::Application>>
ApplicationsConnection::UpdateApplication(
    google::appengine::v1::UpdateApplicationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::appengine::v1::Application>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::appengine::v1::Application>>
ApplicationsConnection::RepairApplication(
    google::appengine::v1::RepairApplicationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::appengine::v1::Application>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

namespace {
class ApplicationsConnectionImpl : public ApplicationsConnection {
 public:
  ApplicationsConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<appengine_internal::ApplicationsStub> stub,
      Options const& options)
      : background_(std::move(background)),
        stub_(std::move(stub)),
        retry_policy_prototype_(
            options.get<ApplicationsRetryPolicyOption>()->clone()),
        backoff_policy_prototype_(
            options.get<ApplicationsBackoffPolicyOption>()->clone()),
        polling_policy_prototype_(
            options.get<ApplicationsPollingPolicyOption>()->clone()),
        idempotency_policy_(
            options.get<ApplicationsConnectionIdempotencyPolicyOption>()
                ->clone()) {}

  ~ApplicationsConnectionImpl() override = default;

  StatusOr<google::appengine::v1::Application> GetApplication(
      google::appengine::v1::GetApplicationRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetApplication(request),
        [this](grpc::ClientContext& context,
               google::appengine::v1::GetApplicationRequest const& request) {
          return stub_->GetApplication(context, request);
        },
        request, __func__);
  }

  future<StatusOr<google::appengine::v1::Application>> CreateApplication(
      google::appengine::v1::CreateApplicationRequest const& request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::appengine::v1::Application>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::appengine::v1::CreateApplicationRequest const& request) {
          return stub->AsyncCreateApplication(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::GetOperationRequest const& request) {
          return stub->AsyncGetOperation(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::CancelOperationRequest const& request) {
          return stub->AsyncCancelOperation(cq, std::move(context), request);
        },
        &google::cloud::internal::ExtractLongRunningResultResponse<
            google::appengine::v1::Application>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->CreateApplication(request),
        polling_policy_prototype_->clone(), __func__);
  }

  future<StatusOr<google::appengine::v1::Application>> UpdateApplication(
      google::appengine::v1::UpdateApplicationRequest const& request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::appengine::v1::Application>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::appengine::v1::UpdateApplicationRequest const& request) {
          return stub->AsyncUpdateApplication(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::GetOperationRequest const& request) {
          return stub->AsyncGetOperation(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::CancelOperationRequest const& request) {
          return stub->AsyncCancelOperation(cq, std::move(context), request);
        },
        &google::cloud::internal::ExtractLongRunningResultResponse<
            google::appengine::v1::Application>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->UpdateApplication(request),
        polling_policy_prototype_->clone(), __func__);
  }

  future<StatusOr<google::appengine::v1::Application>> RepairApplication(
      google::appengine::v1::RepairApplicationRequest const& request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::appengine::v1::Application>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::appengine::v1::RepairApplicationRequest const& request) {
          return stub->AsyncRepairApplication(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::GetOperationRequest const& request) {
          return stub->AsyncGetOperation(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::CancelOperationRequest const& request) {
          return stub->AsyncCancelOperation(cq, std::move(context), request);
        },
        &google::cloud::internal::ExtractLongRunningResultResponse<
            google::appengine::v1::Application>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->RepairApplication(request),
        polling_policy_prototype_->clone(), __func__);
  }

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<appengine_internal::ApplicationsStub> stub_;
  std::unique_ptr<ApplicationsRetryPolicy const> retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<PollingPolicy const> polling_policy_prototype_;
  std::unique_ptr<ApplicationsConnectionIdempotencyPolicy> idempotency_policy_;
};
}  // namespace

std::shared_ptr<ApplicationsConnection> MakeApplicationsConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 ApplicationsPolicyOptionList>(options,
                                                               __func__);
  options = appengine_internal::ApplicationsDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = appengine_internal::CreateDefaultApplicationsStub(
      background->cq(), options);
  return std::make_shared<ApplicationsConnectionImpl>(std::move(background),
                                                      std::move(stub), options);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace appengine_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<appengine::ApplicationsConnection> MakeApplicationsConnection(
    std::shared_ptr<ApplicationsStub> stub, Options options) {
  options = ApplicationsDefaultOptions(std::move(options));
  return std::make_shared<appengine::ApplicationsConnectionImpl>(
      internal::MakeBackgroundThreadsFactory(options)(), std::move(stub),
      std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_internal
}  // namespace cloud
}  // namespace google
