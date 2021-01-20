// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: enum-example.proto

#include "enum-example.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
class PersonDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Person> _instance;
} _Person_default_instance_;
static void InitDefaultsscc_info_Person_enum_2dexample_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Person_default_instance_;
    new (ptr) ::Person();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Person_enum_2dexample_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Person_enum_2dexample_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_enum_2dexample_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_enum_2dexample_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_enum_2dexample_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_enum_2dexample_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Person, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Person, age_),
  PROTOBUF_FIELD_OFFSET(::Person, fname_),
  PROTOBUF_FIELD_OFFSET(::Person, lname_),
  PROTOBUF_FIELD_OFFSET(::Person, profile_verified_),
  PROTOBUF_FIELD_OFFSET(::Person, height_),
  PROTOBUF_FIELD_OFFSET(::Person, image_),
  PROTOBUF_FIELD_OFFSET(::Person, phone_numbers_),
  PROTOBUF_FIELD_OFFSET(::Person, eye_color_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Person)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_Person_default_instance_),
};

const char descriptor_table_protodef_enum_2dexample_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022enum-example.proto\"\333\001\n\006Person\022\013\n\003age\030\001"
  " \001(\005\022\r\n\005fname\030\002 \001(\t\022\r\n\005lname\030\003 \001(\t\022\030\n\020pr"
  "ofile_verified\030\004 \001(\010\022\016\n\006height\030\005 \001(\001\022\r\n\005"
  "image\030\006 \001(\014\022\025\n\rphone_numbers\030\007 \003(\t\022#\n\tey"
  "e_color\030\010 \001(\0162\020.Person.EyeColor\"1\n\010EyeCo"
  "lor\022\020\n\014Unknow_Color\020\000\022\t\n\005Green\020\001\022\010\n\004Blue"
  "\020\002b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_enum_2dexample_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_enum_2dexample_2eproto_sccs[1] = {
  &scc_info_Person_enum_2dexample_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_enum_2dexample_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_enum_2dexample_2eproto = {
  false, false, descriptor_table_protodef_enum_2dexample_2eproto, "enum-example.proto", 250,
  &descriptor_table_enum_2dexample_2eproto_once, descriptor_table_enum_2dexample_2eproto_sccs, descriptor_table_enum_2dexample_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_enum_2dexample_2eproto::offsets,
  file_level_metadata_enum_2dexample_2eproto, 1, file_level_enum_descriptors_enum_2dexample_2eproto, file_level_service_descriptors_enum_2dexample_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_enum_2dexample_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_enum_2dexample_2eproto)), true);
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Person_EyeColor_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_enum_2dexample_2eproto);
  return file_level_enum_descriptors_enum_2dexample_2eproto[0];
}
bool Person_EyeColor_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr Person_EyeColor Person::Unknow_Color;
constexpr Person_EyeColor Person::Green;
constexpr Person_EyeColor Person::Blue;
constexpr Person_EyeColor Person::EyeColor_MIN;
constexpr Person_EyeColor Person::EyeColor_MAX;
constexpr int Person::EyeColor_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

class Person::_Internal {
 public:
};

Person::Person(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  phone_numbers_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:Person)
}
Person::Person(const Person& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      phone_numbers_(from.phone_numbers_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  fname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_fname().empty()) {
    fname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_fname(), 
      GetArena());
  }
  lname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_lname().empty()) {
    lname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_lname(), 
      GetArena());
  }
  image_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_image().empty()) {
    image_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_image(), 
      GetArena());
  }
  ::memcpy(&age_, &from.age_,
    static_cast<size_t>(reinterpret_cast<char*>(&eye_color_) -
    reinterpret_cast<char*>(&age_)) + sizeof(eye_color_));
  // @@protoc_insertion_point(copy_constructor:Person)
}

void Person::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Person_enum_2dexample_2eproto.base);
  fname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  lname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  image_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&age_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&eye_color_) -
      reinterpret_cast<char*>(&age_)) + sizeof(eye_color_));
}

Person::~Person() {
  // @@protoc_insertion_point(destructor:Person)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Person::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  fname_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  lname_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  image_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Person::ArenaDtor(void* object) {
  Person* _this = reinterpret_cast< Person* >(object);
  (void)_this;
}
void Person::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Person::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Person& Person::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Person_enum_2dexample_2eproto.base);
  return *internal_default_instance();
}


void Person::Clear() {
// @@protoc_insertion_point(message_clear_start:Person)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  phone_numbers_.Clear();
  fname_.ClearToEmpty();
  lname_.ClearToEmpty();
  image_.ClearToEmpty();
  ::memset(&age_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&eye_color_) -
      reinterpret_cast<char*>(&age_)) + sizeof(eye_color_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Person::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 age = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          age_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string fname = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_fname();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Person.fname"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string lname = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_lname();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Person.lname"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool profile_verified = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          profile_verified_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // double height = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 41)) {
          height_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // bytes image = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          auto str = _internal_mutable_image();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated string phone_numbers = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_phone_numbers();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Person.phone_numbers"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<58>(ptr));
        } else goto handle_unusual;
        continue;
      // .Person.EyeColor eye_color = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 64)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_eye_color(static_cast<::Person_EyeColor>(val));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Person::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Person)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 age = 1;
  if (this->age() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_age(), target);
  }

  // string fname = 2;
  if (this->fname().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_fname().data(), static_cast<int>(this->_internal_fname().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Person.fname");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_fname(), target);
  }

  // string lname = 3;
  if (this->lname().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_lname().data(), static_cast<int>(this->_internal_lname().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Person.lname");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_lname(), target);
  }

  // bool profile_verified = 4;
  if (this->profile_verified() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(4, this->_internal_profile_verified(), target);
  }

  // double height = 5;
  if (!(this->height() <= 0 && this->height() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(5, this->_internal_height(), target);
  }

  // bytes image = 6;
  if (this->image().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        6, this->_internal_image(), target);
  }

  // repeated string phone_numbers = 7;
  for (int i = 0, n = this->_internal_phone_numbers_size(); i < n; i++) {
    const auto& s = this->_internal_phone_numbers(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Person.phone_numbers");
    target = stream->WriteString(7, s, target);
  }

  // .Person.EyeColor eye_color = 8;
  if (this->eye_color() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      8, this->_internal_eye_color(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Person)
  return target;
}

size_t Person::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Person)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string phone_numbers = 7;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(phone_numbers_.size());
  for (int i = 0, n = phone_numbers_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      phone_numbers_.Get(i));
  }

  // string fname = 2;
  if (this->fname().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_fname());
  }

  // string lname = 3;
  if (this->lname().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_lname());
  }

  // bytes image = 6;
  if (this->image().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_image());
  }

  // int32 age = 1;
  if (this->age() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_age());
  }

  // bool profile_verified = 4;
  if (this->profile_verified() != 0) {
    total_size += 1 + 1;
  }

  // double height = 5;
  if (!(this->height() <= 0 && this->height() >= 0)) {
    total_size += 1 + 8;
  }

  // .Person.EyeColor eye_color = 8;
  if (this->eye_color() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_eye_color());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Person::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Person)
  GOOGLE_DCHECK_NE(&from, this);
  const Person* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Person>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Person)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Person)
    MergeFrom(*source);
  }
}

void Person::MergeFrom(const Person& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Person)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  phone_numbers_.MergeFrom(from.phone_numbers_);
  if (from.fname().size() > 0) {
    _internal_set_fname(from._internal_fname());
  }
  if (from.lname().size() > 0) {
    _internal_set_lname(from._internal_lname());
  }
  if (from.image().size() > 0) {
    _internal_set_image(from._internal_image());
  }
  if (from.age() != 0) {
    _internal_set_age(from._internal_age());
  }
  if (from.profile_verified() != 0) {
    _internal_set_profile_verified(from._internal_profile_verified());
  }
  if (!(from.height() <= 0 && from.height() >= 0)) {
    _internal_set_height(from._internal_height());
  }
  if (from.eye_color() != 0) {
    _internal_set_eye_color(from._internal_eye_color());
  }
}

void Person::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Person)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Person::CopyFrom(const Person& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Person)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Person::IsInitialized() const {
  return true;
}

void Person::InternalSwap(Person* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  phone_numbers_.InternalSwap(&other->phone_numbers_);
  fname_.Swap(&other->fname_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  lname_.Swap(&other->lname_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  image_.Swap(&other->image_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Person, eye_color_)
      + sizeof(Person::eye_color_)
      - PROTOBUF_FIELD_OFFSET(Person, age_)>(
          reinterpret_cast<char*>(&age_),
          reinterpret_cast<char*>(&other->age_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Person::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Person* Arena::CreateMaybeMessage< ::Person >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Person >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
