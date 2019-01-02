// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: raft.proto

#include "raft.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

class VoteRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<VoteRequest>
      _instance;
} _VoteRequest_default_instance_;
class VoteReplyDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<VoteReply>
      _instance;
} _VoteReply_default_instance_;
class LeaderBeatDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<LeaderBeat>
      _instance;
} _LeaderBeat_default_instance_;
namespace protobuf_raft_2eproto {
static void InitDefaultsVoteRequest() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_VoteRequest_default_instance_;
    new (ptr) ::VoteRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::VoteRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_VoteRequest =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsVoteRequest}, {}};

static void InitDefaultsVoteReply() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_VoteReply_default_instance_;
    new (ptr) ::VoteReply();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::VoteReply::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_VoteReply =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsVoteReply}, {}};

static void InitDefaultsLeaderBeat() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_LeaderBeat_default_instance_;
    new (ptr) ::LeaderBeat();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::LeaderBeat::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_LeaderBeat =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsLeaderBeat}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_VoteRequest.base);
  ::google::protobuf::internal::InitSCC(&scc_info_VoteReply.base);
  ::google::protobuf::internal::InitSCC(&scc_info_LeaderBeat.base);
}

::google::protobuf::Metadata file_level_metadata[3];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::VoteRequest, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::VoteRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::VoteRequest, term_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::VoteRequest, candidateid_),
  0,
  1,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::VoteReply, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::VoteReply, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::VoteReply, term_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::VoteReply, votegranted_),
  0,
  1,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::LeaderBeat, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::LeaderBeat, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::LeaderBeat, term_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::LeaderBeat, leaderid_),
  0,
  1,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::VoteRequest)},
  { 9, 16, sizeof(::VoteReply)},
  { 18, 25, sizeof(::LeaderBeat)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_VoteRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::_VoteReply_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::_LeaderBeat_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "raft.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 3);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\nraft.proto\"0\n\013VoteRequest\022\014\n\004term\030\001 \002("
      "\r\022\023\n\013candidateId\030\002 \002(\r\".\n\tVoteReply\022\014\n\004t"
      "erm\030\001 \002(\r\022\023\n\013voteGranted\030\002 \002(\010\",\n\nLeader"
      "Beat\022\014\n\004term\030\001 \002(\r\022\020\n\010leaderId\030\002 \002(\r"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 156);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "raft.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_raft_2eproto

// ===================================================================

void VoteRequest::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VoteRequest::kTermFieldNumber;
const int VoteRequest::kCandidateIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VoteRequest::VoteRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_raft_2eproto::scc_info_VoteRequest.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:VoteRequest)
}
VoteRequest::VoteRequest(const VoteRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&term_, &from.term_,
    static_cast<size_t>(reinterpret_cast<char*>(&candidateid_) -
    reinterpret_cast<char*>(&term_)) + sizeof(candidateid_));
  // @@protoc_insertion_point(copy_constructor:VoteRequest)
}

void VoteRequest::SharedCtor() {
  ::memset(&term_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&candidateid_) -
      reinterpret_cast<char*>(&term_)) + sizeof(candidateid_));
}

VoteRequest::~VoteRequest() {
  // @@protoc_insertion_point(destructor:VoteRequest)
  SharedDtor();
}

void VoteRequest::SharedDtor() {
}

void VoteRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* VoteRequest::descriptor() {
  ::protobuf_raft_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_raft_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const VoteRequest& VoteRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_raft_2eproto::scc_info_VoteRequest.base);
  return *internal_default_instance();
}


void VoteRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:VoteRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    ::memset(&term_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&candidateid_) -
        reinterpret_cast<char*>(&term_)) + sizeof(candidateid_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool VoteRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VoteRequest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 term = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_term();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &term_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required uint32 candidateId = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_candidateid();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &candidateid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VoteRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VoteRequest)
  return false;
#undef DO_
}

void VoteRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VoteRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 term = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->term(), output);
  }

  // required uint32 candidateId = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->candidateid(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:VoteRequest)
}

::google::protobuf::uint8* VoteRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VoteRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 term = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->term(), target);
  }

  // required uint32 candidateId = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->candidateid(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:VoteRequest)
  return target;
}

size_t VoteRequest::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:VoteRequest)
  size_t total_size = 0;

  if (has_term()) {
    // required uint32 term = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->term());
  }

  if (has_candidateid()) {
    // required uint32 candidateId = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->candidateid());
  }

  return total_size;
}
size_t VoteRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VoteRequest)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required uint32 term = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->term());

    // required uint32 candidateId = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->candidateid());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void VoteRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VoteRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const VoteRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VoteRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VoteRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VoteRequest)
    MergeFrom(*source);
  }
}

void VoteRequest::MergeFrom(const VoteRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VoteRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      term_ = from.term_;
    }
    if (cached_has_bits & 0x00000002u) {
      candidateid_ = from.candidateid_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void VoteRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VoteRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VoteRequest::CopyFrom(const VoteRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VoteRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VoteRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void VoteRequest::Swap(VoteRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VoteRequest::InternalSwap(VoteRequest* other) {
  using std::swap;
  swap(term_, other->term_);
  swap(candidateid_, other->candidateid_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata VoteRequest::GetMetadata() const {
  protobuf_raft_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_raft_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void VoteReply::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VoteReply::kTermFieldNumber;
const int VoteReply::kVoteGrantedFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VoteReply::VoteReply()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_raft_2eproto::scc_info_VoteReply.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:VoteReply)
}
VoteReply::VoteReply(const VoteReply& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&term_, &from.term_,
    static_cast<size_t>(reinterpret_cast<char*>(&votegranted_) -
    reinterpret_cast<char*>(&term_)) + sizeof(votegranted_));
  // @@protoc_insertion_point(copy_constructor:VoteReply)
}

void VoteReply::SharedCtor() {
  ::memset(&term_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&votegranted_) -
      reinterpret_cast<char*>(&term_)) + sizeof(votegranted_));
}

VoteReply::~VoteReply() {
  // @@protoc_insertion_point(destructor:VoteReply)
  SharedDtor();
}

void VoteReply::SharedDtor() {
}

void VoteReply::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* VoteReply::descriptor() {
  ::protobuf_raft_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_raft_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const VoteReply& VoteReply::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_raft_2eproto::scc_info_VoteReply.base);
  return *internal_default_instance();
}


void VoteReply::Clear() {
// @@protoc_insertion_point(message_clear_start:VoteReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    ::memset(&term_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&votegranted_) -
        reinterpret_cast<char*>(&term_)) + sizeof(votegranted_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool VoteReply::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VoteReply)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 term = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_term();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &term_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required bool voteGranted = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_votegranted();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &votegranted_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VoteReply)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VoteReply)
  return false;
#undef DO_
}

void VoteReply::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VoteReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 term = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->term(), output);
  }

  // required bool voteGranted = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->votegranted(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:VoteReply)
}

::google::protobuf::uint8* VoteReply::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VoteReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 term = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->term(), target);
  }

  // required bool voteGranted = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->votegranted(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:VoteReply)
  return target;
}

size_t VoteReply::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:VoteReply)
  size_t total_size = 0;

  if (has_term()) {
    // required uint32 term = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->term());
  }

  if (has_votegranted()) {
    // required bool voteGranted = 2;
    total_size += 1 + 1;
  }

  return total_size;
}
size_t VoteReply::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VoteReply)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required uint32 term = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->term());

    // required bool voteGranted = 2;
    total_size += 1 + 1;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void VoteReply::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VoteReply)
  GOOGLE_DCHECK_NE(&from, this);
  const VoteReply* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VoteReply>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VoteReply)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VoteReply)
    MergeFrom(*source);
  }
}

void VoteReply::MergeFrom(const VoteReply& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VoteReply)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      term_ = from.term_;
    }
    if (cached_has_bits & 0x00000002u) {
      votegranted_ = from.votegranted_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void VoteReply::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VoteReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VoteReply::CopyFrom(const VoteReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VoteReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VoteReply::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void VoteReply::Swap(VoteReply* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VoteReply::InternalSwap(VoteReply* other) {
  using std::swap;
  swap(term_, other->term_);
  swap(votegranted_, other->votegranted_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata VoteReply::GetMetadata() const {
  protobuf_raft_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_raft_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void LeaderBeat::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LeaderBeat::kTermFieldNumber;
const int LeaderBeat::kLeaderIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LeaderBeat::LeaderBeat()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_raft_2eproto::scc_info_LeaderBeat.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:LeaderBeat)
}
LeaderBeat::LeaderBeat(const LeaderBeat& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&term_, &from.term_,
    static_cast<size_t>(reinterpret_cast<char*>(&leaderid_) -
    reinterpret_cast<char*>(&term_)) + sizeof(leaderid_));
  // @@protoc_insertion_point(copy_constructor:LeaderBeat)
}

void LeaderBeat::SharedCtor() {
  ::memset(&term_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&leaderid_) -
      reinterpret_cast<char*>(&term_)) + sizeof(leaderid_));
}

LeaderBeat::~LeaderBeat() {
  // @@protoc_insertion_point(destructor:LeaderBeat)
  SharedDtor();
}

void LeaderBeat::SharedDtor() {
}

void LeaderBeat::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* LeaderBeat::descriptor() {
  ::protobuf_raft_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_raft_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const LeaderBeat& LeaderBeat::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_raft_2eproto::scc_info_LeaderBeat.base);
  return *internal_default_instance();
}


void LeaderBeat::Clear() {
// @@protoc_insertion_point(message_clear_start:LeaderBeat)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    ::memset(&term_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&leaderid_) -
        reinterpret_cast<char*>(&term_)) + sizeof(leaderid_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool LeaderBeat::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LeaderBeat)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 term = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_term();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &term_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required uint32 leaderId = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_leaderid();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &leaderid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:LeaderBeat)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LeaderBeat)
  return false;
#undef DO_
}

void LeaderBeat::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LeaderBeat)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 term = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->term(), output);
  }

  // required uint32 leaderId = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->leaderid(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:LeaderBeat)
}

::google::protobuf::uint8* LeaderBeat::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LeaderBeat)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 term = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->term(), target);
  }

  // required uint32 leaderId = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->leaderid(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LeaderBeat)
  return target;
}

size_t LeaderBeat::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:LeaderBeat)
  size_t total_size = 0;

  if (has_term()) {
    // required uint32 term = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->term());
  }

  if (has_leaderid()) {
    // required uint32 leaderId = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->leaderid());
  }

  return total_size;
}
size_t LeaderBeat::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LeaderBeat)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required uint32 term = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->term());

    // required uint32 leaderId = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->leaderid());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LeaderBeat::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LeaderBeat)
  GOOGLE_DCHECK_NE(&from, this);
  const LeaderBeat* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LeaderBeat>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LeaderBeat)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LeaderBeat)
    MergeFrom(*source);
  }
}

void LeaderBeat::MergeFrom(const LeaderBeat& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LeaderBeat)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      term_ = from.term_;
    }
    if (cached_has_bits & 0x00000002u) {
      leaderid_ = from.leaderid_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void LeaderBeat::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LeaderBeat)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LeaderBeat::CopyFrom(const LeaderBeat& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LeaderBeat)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LeaderBeat::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void LeaderBeat::Swap(LeaderBeat* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LeaderBeat::InternalSwap(LeaderBeat* other) {
  using std::swap;
  swap(term_, other->term_);
  swap(leaderid_, other->leaderid_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata LeaderBeat::GetMetadata() const {
  protobuf_raft_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_raft_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::VoteRequest* Arena::CreateMaybeMessage< ::VoteRequest >(Arena* arena) {
  return Arena::CreateInternal< ::VoteRequest >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::VoteReply* Arena::CreateMaybeMessage< ::VoteReply >(Arena* arena) {
  return Arena::CreateInternal< ::VoteReply >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::LeaderBeat* Arena::CreateMaybeMessage< ::LeaderBeat >(Arena* arena) {
  return Arena::CreateInternal< ::LeaderBeat >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)