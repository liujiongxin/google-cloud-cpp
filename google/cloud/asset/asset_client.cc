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
// source: google/cloud/asset/v1/asset_service.proto

#include "google/cloud/asset/asset_client.h"
#include "google/cloud/asset/internal/asset_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace asset {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AssetServiceClient::AssetServiceClient(
    std::shared_ptr<AssetServiceConnection> connection, Options options)
    : connection_(std::move(connection)),
      options_(internal::MergeOptions(
          std::move(options),
          asset_internal::AssetServiceDefaultOptions(connection_->options()))) {
}
AssetServiceClient::~AssetServiceClient() = default;

future<StatusOr<google::cloud::asset::v1::ExportAssetsResponse>>
AssetServiceClient::ExportAssets(
    google::cloud::asset::v1::ExportAssetsRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ExportAssets(request);
}

StreamRange<google::cloud::asset::v1::Asset> AssetServiceClient::ListAssets(
    std::string const& parent, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::asset::v1::ListAssetsRequest request;
  request.set_parent(parent);
  return connection_->ListAssets(request);
}

StreamRange<google::cloud::asset::v1::Asset> AssetServiceClient::ListAssets(
    google::cloud::asset::v1::ListAssetsRequest request, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ListAssets(std::move(request));
}

StatusOr<google::cloud::asset::v1::BatchGetAssetsHistoryResponse>
AssetServiceClient::BatchGetAssetsHistory(
    google::cloud::asset::v1::BatchGetAssetsHistoryRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->BatchGetAssetsHistory(request);
}

StatusOr<google::cloud::asset::v1::Feed> AssetServiceClient::CreateFeed(
    std::string const& parent, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::asset::v1::CreateFeedRequest request;
  request.set_parent(parent);
  return connection_->CreateFeed(request);
}

StatusOr<google::cloud::asset::v1::Feed> AssetServiceClient::CreateFeed(
    google::cloud::asset::v1::CreateFeedRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->CreateFeed(request);
}

StatusOr<google::cloud::asset::v1::Feed> AssetServiceClient::GetFeed(
    std::string const& name, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::asset::v1::GetFeedRequest request;
  request.set_name(name);
  return connection_->GetFeed(request);
}

StatusOr<google::cloud::asset::v1::Feed> AssetServiceClient::GetFeed(
    google::cloud::asset::v1::GetFeedRequest const& request, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GetFeed(request);
}

StatusOr<google::cloud::asset::v1::ListFeedsResponse>
AssetServiceClient::ListFeeds(std::string const& parent, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::asset::v1::ListFeedsRequest request;
  request.set_parent(parent);
  return connection_->ListFeeds(request);
}

StatusOr<google::cloud::asset::v1::ListFeedsResponse>
AssetServiceClient::ListFeeds(
    google::cloud::asset::v1::ListFeedsRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ListFeeds(request);
}

StatusOr<google::cloud::asset::v1::Feed> AssetServiceClient::UpdateFeed(
    google::cloud::asset::v1::Feed const& feed, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::asset::v1::UpdateFeedRequest request;
  *request.mutable_feed() = feed;
  return connection_->UpdateFeed(request);
}

StatusOr<google::cloud::asset::v1::Feed> AssetServiceClient::UpdateFeed(
    google::cloud::asset::v1::UpdateFeedRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->UpdateFeed(request);
}

Status AssetServiceClient::DeleteFeed(std::string const& name,
                                      Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::asset::v1::DeleteFeedRequest request;
  request.set_name(name);
  return connection_->DeleteFeed(request);
}

Status AssetServiceClient::DeleteFeed(
    google::cloud::asset::v1::DeleteFeedRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->DeleteFeed(request);
}

StreamRange<google::cloud::asset::v1::ResourceSearchResult>
AssetServiceClient::SearchAllResources(
    std::string const& scope, std::string const& query,
    std::vector<std::string> const& asset_types, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::asset::v1::SearchAllResourcesRequest request;
  request.set_scope(scope);
  request.set_query(query);
  *request.mutable_asset_types() = {asset_types.begin(), asset_types.end()};
  return connection_->SearchAllResources(request);
}

StreamRange<google::cloud::asset::v1::ResourceSearchResult>
AssetServiceClient::SearchAllResources(
    google::cloud::asset::v1::SearchAllResourcesRequest request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->SearchAllResources(std::move(request));
}

StreamRange<google::cloud::asset::v1::IamPolicySearchResult>
AssetServiceClient::SearchAllIamPolicies(std::string const& scope,
                                         std::string const& query,
                                         Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::asset::v1::SearchAllIamPoliciesRequest request;
  request.set_scope(scope);
  request.set_query(query);
  return connection_->SearchAllIamPolicies(request);
}

StreamRange<google::cloud::asset::v1::IamPolicySearchResult>
AssetServiceClient::SearchAllIamPolicies(
    google::cloud::asset::v1::SearchAllIamPoliciesRequest request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->SearchAllIamPolicies(std::move(request));
}

StatusOr<google::cloud::asset::v1::AnalyzeIamPolicyResponse>
AssetServiceClient::AnalyzeIamPolicy(
    google::cloud::asset::v1::AnalyzeIamPolicyRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->AnalyzeIamPolicy(request);
}

future<StatusOr<google::cloud::asset::v1::AnalyzeIamPolicyLongrunningResponse>>
AssetServiceClient::AnalyzeIamPolicyLongrunning(
    google::cloud::asset::v1::AnalyzeIamPolicyLongrunningRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->AnalyzeIamPolicyLongrunning(request);
}

StatusOr<google::cloud::asset::v1::AnalyzeMoveResponse>
AssetServiceClient::AnalyzeMove(
    google::cloud::asset::v1::AnalyzeMoveRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->AnalyzeMove(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace asset
}  // namespace cloud
}  // namespace google
