// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: biyunLevel.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "biyunLevel.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* biyunLevel_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  biyunLevel_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_biyunLevel_2eproto() {
  protobuf_AddDesc_biyunLevel_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "biyunLevel.proto");
  GOOGLE_CHECK(file != NULL);
  biyunLevel_descriptor_ = file->message_type(0);
  static const int biyunLevel_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(biyunLevel, level_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(biyunLevel, star1_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(biyunLevel, star2_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(biyunLevel, star3_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(biyunLevel, star4_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(biyunLevel, star5_),
  };
  biyunLevel_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      biyunLevel_descriptor_,
      biyunLevel::default_instance_,
      biyunLevel_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(biyunLevel, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(biyunLevel, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(biyunLevel));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_biyunLevel_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    biyunLevel_descriptor_, &biyunLevel::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_biyunLevel_2eproto() {
  delete biyunLevel::default_instance_;
  delete biyunLevel_reflection_;
}

void protobuf_AddDesc_biyunLevel_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020biyunLevel.proto\"f\n\nbiyunLevel\022\r\n\005leve"
    "l\030\001 \001(\r\022\r\n\005star1\030\002 \001(\r\022\r\n\005star2\030\003 \001(\r\022\r\n"
    "\005star3\030\004 \001(\r\022\r\n\005star4\030\005 \001(\r\022\r\n\005star5\030\006 \001"
    "(\rB\021\n\017wang.gnim.excel", 141);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "biyunLevel.proto", &protobuf_RegisterTypes);
  biyunLevel::default_instance_ = new biyunLevel();
  biyunLevel::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_biyunLevel_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_biyunLevel_2eproto {
  StaticDescriptorInitializer_biyunLevel_2eproto() {
    protobuf_AddDesc_biyunLevel_2eproto();
  }
} static_descriptor_initializer_biyunLevel_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int biyunLevel::kLevelFieldNumber;
const int biyunLevel::kStar1FieldNumber;
const int biyunLevel::kStar2FieldNumber;
const int biyunLevel::kStar3FieldNumber;
const int biyunLevel::kStar4FieldNumber;
const int biyunLevel::kStar5FieldNumber;
#endif  // !_MSC_VER

biyunLevel::biyunLevel()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:biyunLevel)
}

void biyunLevel::InitAsDefaultInstance() {
}

biyunLevel::biyunLevel(const biyunLevel& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:biyunLevel)
}

void biyunLevel::SharedCtor() {
  _cached_size_ = 0;
  level_ = 0u;
  star1_ = 0u;
  star2_ = 0u;
  star3_ = 0u;
  star4_ = 0u;
  star5_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

biyunLevel::~biyunLevel() {
  // @@protoc_insertion_point(destructor:biyunLevel)
  SharedDtor();
}

void biyunLevel::SharedDtor() {
  if (this != default_instance_) {
  }
}

void biyunLevel::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* biyunLevel::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return biyunLevel_descriptor_;
}

const biyunLevel& biyunLevel::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_biyunLevel_2eproto();
  return *default_instance_;
}

biyunLevel* biyunLevel::default_instance_ = NULL;

biyunLevel* biyunLevel::New() const {
  return new biyunLevel;
}

void biyunLevel::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<biyunLevel*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 63) {
    ZR_(level_, star5_);
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool biyunLevel::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:biyunLevel)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 level = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &level_)));
          set_has_level();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_star1;
        break;
      }

      // optional uint32 star1 = 2;
      case 2: {
        if (tag == 16) {
         parse_star1:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &star1_)));
          set_has_star1();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_star2;
        break;
      }

      // optional uint32 star2 = 3;
      case 3: {
        if (tag == 24) {
         parse_star2:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &star2_)));
          set_has_star2();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_star3;
        break;
      }

      // optional uint32 star3 = 4;
      case 4: {
        if (tag == 32) {
         parse_star3:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &star3_)));
          set_has_star3();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_star4;
        break;
      }

      // optional uint32 star4 = 5;
      case 5: {
        if (tag == 40) {
         parse_star4:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &star4_)));
          set_has_star4();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_star5;
        break;
      }

      // optional uint32 star5 = 6;
      case 6: {
        if (tag == 48) {
         parse_star5:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &star5_)));
          set_has_star5();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:biyunLevel)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:biyunLevel)
  return false;
#undef DO_
}

void biyunLevel::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:biyunLevel)
  // optional uint32 level = 1;
  if (has_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->level(), output);
  }

  // optional uint32 star1 = 2;
  if (has_star1()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->star1(), output);
  }

  // optional uint32 star2 = 3;
  if (has_star2()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->star2(), output);
  }

  // optional uint32 star3 = 4;
  if (has_star3()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->star3(), output);
  }

  // optional uint32 star4 = 5;
  if (has_star4()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->star4(), output);
  }

  // optional uint32 star5 = 6;
  if (has_star5()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->star5(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:biyunLevel)
}

::google::protobuf::uint8* biyunLevel::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:biyunLevel)
  // optional uint32 level = 1;
  if (has_level()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->level(), target);
  }

  // optional uint32 star1 = 2;
  if (has_star1()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->star1(), target);
  }

  // optional uint32 star2 = 3;
  if (has_star2()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->star2(), target);
  }

  // optional uint32 star3 = 4;
  if (has_star3()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->star3(), target);
  }

  // optional uint32 star4 = 5;
  if (has_star4()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->star4(), target);
  }

  // optional uint32 star5 = 6;
  if (has_star5()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->star5(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:biyunLevel)
  return target;
}

int biyunLevel::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint32 level = 1;
    if (has_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->level());
    }

    // optional uint32 star1 = 2;
    if (has_star1()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->star1());
    }

    // optional uint32 star2 = 3;
    if (has_star2()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->star2());
    }

    // optional uint32 star3 = 4;
    if (has_star3()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->star3());
    }

    // optional uint32 star4 = 5;
    if (has_star4()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->star4());
    }

    // optional uint32 star5 = 6;
    if (has_star5()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->star5());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void biyunLevel::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const biyunLevel* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const biyunLevel*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void biyunLevel::MergeFrom(const biyunLevel& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_level()) {
      set_level(from.level());
    }
    if (from.has_star1()) {
      set_star1(from.star1());
    }
    if (from.has_star2()) {
      set_star2(from.star2());
    }
    if (from.has_star3()) {
      set_star3(from.star3());
    }
    if (from.has_star4()) {
      set_star4(from.star4());
    }
    if (from.has_star5()) {
      set_star5(from.star5());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void biyunLevel::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void biyunLevel::CopyFrom(const biyunLevel& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool biyunLevel::IsInitialized() const {

  return true;
}

void biyunLevel::Swap(biyunLevel* other) {
  if (other != this) {
    std::swap(level_, other->level_);
    std::swap(star1_, other->star1_);
    std::swap(star2_, other->star2_);
    std::swap(star3_, other->star3_);
    std::swap(star4_, other->star4_);
    std::swap(star5_, other->star5_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata biyunLevel::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = biyunLevel_descriptor_;
  metadata.reflection = biyunLevel_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
