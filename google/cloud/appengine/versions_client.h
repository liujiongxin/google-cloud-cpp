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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_VERSIONS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_VERSIONS_CLIENT_H

#include "google/cloud/appengine/versions_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace appengine {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Manages versions of a service.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class VersionsClient {
 public:
  explicit VersionsClient(std::shared_ptr<VersionsConnection> connection,
                          Options options = {});
  ~VersionsClient();

  //@{
  // @name Copy and move support
  VersionsClient(VersionsClient const&) = default;
  VersionsClient& operator=(VersionsClient const&) = default;
  VersionsClient(VersionsClient&&) = default;
  VersionsClient& operator=(VersionsClient&&) = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(VersionsClient const& a, VersionsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(VersionsClient const& a, VersionsClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Lists the versions of a service.
  ///
  /// @param request
  /// @googleapis_link{google::appengine::v1::ListVersionsRequest,google/appengine/v1/appengine.proto#L344}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::appengine::v1::Version,google/appengine/v1/version.proto#L36}
  ///
  /// [google.appengine.v1.ListVersionsRequest]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L344}
  /// [google.appengine.v1.Version]:
  /// @googleapis_reference_link{google/appengine/v1/version.proto#L36}
  ///
  StreamRange<google::appengine::v1::Version> ListVersions(
      google::appengine::v1::ListVersionsRequest request, Options options = {});

  ///
  /// Gets the specified Version resource.
  /// By default, only a `BASIC_VIEW` will be returned.
  /// Specify the `FULL_VIEW` parameter to get the full resource.
  ///
  /// @param request
  /// @googleapis_link{google::appengine::v1::GetVersionRequest,google/appengine/v1/appengine.proto#L369}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::appengine::v1::Version,google/appengine/v1/version.proto#L36}
  ///
  /// [google.appengine.v1.GetVersionRequest]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L369}
  /// [google.appengine.v1.Version]:
  /// @googleapis_reference_link{google/appengine/v1/version.proto#L36}
  ///
  StatusOr<google::appengine::v1::Version> GetVersion(
      google::appengine::v1::GetVersionRequest const& request,
      Options options = {});

  ///
  /// Deploys code and resource files to a new version.
  ///
  /// @param request
  /// @googleapis_link{google::appengine::v1::CreateVersionRequest,google/appengine/v1/appengine.proto#L379}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::appengine::v1::Version,google/appengine/v1/version.proto#L36}
  ///
  /// [google.appengine.v1.CreateVersionRequest]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L379}
  /// [google.appengine.v1.Version]:
  /// @googleapis_reference_link{google/appengine/v1/version.proto#L36}
  ///
  future<StatusOr<google::appengine::v1::Version>> CreateVersion(
      google::appengine::v1::CreateVersionRequest const& request,
      Options options = {});

  ///
  /// Updates the specified Version resource.
  /// You can specify the following fields depending on the App Engine
  /// environment and type of scaling that the version resource uses:
  ///
  /// **Standard environment**
  ///
  /// * [`instance_class`](https://cloud.google.com/appengine/docs/admin-api/reference/rest/v1/apps.services.versions#Version.FIELDS.instance_class)
  ///
  /// *automatic scaling* in the standard environment:
  ///
  /// * [`automatic_scaling.min_idle_instances`](https://cloud.google.com/appengine/docs/admin-api/reference/rest/v1/apps.services.versions#Version.FIELDS.automatic_scaling)
  /// * [`automatic_scaling.max_idle_instances`](https://cloud.google.com/appengine/docs/admin-api/reference/rest/v1/apps.services.versions#Version.FIELDS.automatic_scaling)
  /// * [`automaticScaling.standard_scheduler_settings.max_instances`](https://cloud.google.com/appengine/docs/admin-api/reference/rest/v1/apps.services.versions#StandardSchedulerSettings)
  /// * [`automaticScaling.standard_scheduler_settings.min_instances`](https://cloud.google.com/appengine/docs/admin-api/reference/rest/v1/apps.services.versions#StandardSchedulerSettings)
  /// * [`automaticScaling.standard_scheduler_settings.target_cpu_utilization`](https://cloud.google.com/appengine/docs/admin-api/reference/rest/v1/apps.services.versions#StandardSchedulerSettings)
  /// * [`automaticScaling.standard_scheduler_settings.target_throughput_utilization`](https://cloud.google.com/appengine/docs/admin-api/reference/rest/v1/apps.services.versions#StandardSchedulerSettings)
  ///
  /// *basic scaling* or *manual scaling* in the standard environment:
  ///
  /// * [`serving_status`](https://cloud.google.com/appengine/docs/admin-api/reference/rest/v1/apps.services.versions#Version.FIELDS.serving_status)
  /// * [`manual_scaling.instances`](https://cloud.google.com/appengine/docs/admin-api/reference/rest/v1/apps.services.versions#manualscaling)
  ///
  /// **Flexible environment**
  ///
  /// * [`serving_status`](https://cloud.google.com/appengine/docs/admin-api/reference/rest/v1/apps.services.versions#Version.FIELDS.serving_status)
  ///
  /// *automatic scaling* in the flexible environment:
  ///
  /// * [`automatic_scaling.min_total_instances`](https://cloud.google.com/appengine/docs/admin-api/reference/rest/v1/apps.services.versions#Version.FIELDS.automatic_scaling)
  /// * [`automatic_scaling.max_total_instances`](https://cloud.google.com/appengine/docs/admin-api/reference/rest/v1/apps.services.versions#Version.FIELDS.automatic_scaling)
  /// * [`automatic_scaling.cool_down_period_sec`](https://cloud.google.com/appengine/docs/admin-api/reference/rest/v1/apps.services.versions#Version.FIELDS.automatic_scaling)
  /// * [`automatic_scaling.cpu_utilization.target_utilization`](https://cloud.google.com/appengine/docs/admin-api/reference/rest/v1/apps.services.versions#Version.FIELDS.automatic_scaling)
  ///
  /// *manual scaling* in the flexible environment:
  ///
  /// * [`manual_scaling.instances`](https://cloud.google.com/appengine/docs/admin-api/reference/rest/v1/apps.services.versions#manualscaling)
  ///
  /// @param request
  /// @googleapis_link{google::appengine::v1::UpdateVersionRequest,google/appengine/v1/appengine.proto#L389}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::appengine::v1::Version,google/appengine/v1/version.proto#L36}
  ///
  /// [google.appengine.v1.UpdateVersionRequest]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L389}
  /// [google.appengine.v1.Version]:
  /// @googleapis_reference_link{google/appengine/v1/version.proto#L36}
  ///
  future<StatusOr<google::appengine::v1::Version>> UpdateVersion(
      google::appengine::v1::UpdateVersionRequest const& request,
      Options options = {});

  ///
  /// Deletes an existing Version resource.
  ///
  /// @param request
  /// @googleapis_link{google::appengine::v1::DeleteVersionRequest,google/appengine/v1/appengine.proto#L416}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::appengine::v1::OperationMetadataV1,google/appengine/v1/operation.proto#L32}
  ///
  /// [google.appengine.v1.DeleteVersionRequest]:
  /// @googleapis_reference_link{google/appengine/v1/appengine.proto#L416}
  /// [google.appengine.v1.OperationMetadataV1]:
  /// @googleapis_reference_link{google/appengine/v1/operation.proto#L32}
  ///
  future<StatusOr<google::appengine::v1::OperationMetadataV1>> DeleteVersion(
      google::appengine::v1::DeleteVersionRequest const& request,
      Options options = {});

 private:
  std::shared_ptr<VersionsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_VERSIONS_CLIENT_H
