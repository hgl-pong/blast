// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: NvBlastExtTkSerialization-capn

#ifndef CAPNP_INCLUDED_affe4498f275ee58_
#define CAPNP_INCLUDED_affe4498f275ee58_

#include <capnp/generated-header-support.h>

#if CAPNP_VERSION != 6001
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif

#include "NvBlastExtLlSerialization-capn.h"

namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(ffd67c4b7067dde6);
CAPNP_DECLARE_SCHEMA(b7dbad810488a897);
CAPNP_DECLARE_SCHEMA(bf661e95794f2749);

}  // namespace schemas
}  // namespace capnp

namespace Nv {
namespace Blast {
namespace Serialization {

struct TkAsset {
  TkAsset() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(ffd67c4b7067dde6, 0, 2)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct TkAssetJointDesc {
  TkAssetJointDesc() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(b7dbad810488a897, 0, 2)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct NvVec3 {
  NvVec3() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(bf661e95794f2749, 2, 0)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class TkAsset::Reader {
public:
  typedef TkAsset Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline bool hasAssetLL() const;
  inline  ::Nv::Blast::Serialization::Asset::Reader getAssetLL() const;

  inline bool hasJointDescs() const;
  inline  ::capnp::List< ::Nv::Blast::Serialization::TkAssetJointDesc>::Reader getJointDescs() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class TkAsset::Builder {
public:
  typedef TkAsset Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool hasAssetLL();
  inline  ::Nv::Blast::Serialization::Asset::Builder getAssetLL();
  inline void setAssetLL( ::Nv::Blast::Serialization::Asset::Reader value);
  inline  ::Nv::Blast::Serialization::Asset::Builder initAssetLL();
  inline void adoptAssetLL(::capnp::Orphan< ::Nv::Blast::Serialization::Asset>&& value);
  inline ::capnp::Orphan< ::Nv::Blast::Serialization::Asset> disownAssetLL();

  inline bool hasJointDescs();
  inline  ::capnp::List< ::Nv::Blast::Serialization::TkAssetJointDesc>::Builder getJointDescs();
  inline void setJointDescs( ::capnp::List< ::Nv::Blast::Serialization::TkAssetJointDesc>::Reader value);
  inline  ::capnp::List< ::Nv::Blast::Serialization::TkAssetJointDesc>::Builder initJointDescs(unsigned int size);
  inline void adoptJointDescs(::capnp::Orphan< ::capnp::List< ::Nv::Blast::Serialization::TkAssetJointDesc>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::Nv::Blast::Serialization::TkAssetJointDesc>> disownJointDescs();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class TkAsset::Pipeline {
public:
  typedef TkAsset Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

  inline  ::Nv::Blast::Serialization::Asset::Pipeline getAssetLL();
private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class TkAssetJointDesc::Reader {
public:
  typedef TkAssetJointDesc Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline bool hasNodeIndices() const;
  inline  ::capnp::List< ::uint32_t>::Reader getNodeIndices() const;

  inline bool hasAttachPositions() const;
  inline  ::capnp::List< ::Nv::Blast::Serialization::NvVec3>::Reader getAttachPositions() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class TkAssetJointDesc::Builder {
public:
  typedef TkAssetJointDesc Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool hasNodeIndices();
  inline  ::capnp::List< ::uint32_t>::Builder getNodeIndices();
  inline void setNodeIndices( ::capnp::List< ::uint32_t>::Reader value);
  inline void setNodeIndices(::kj::ArrayPtr<const  ::uint32_t> value);
  inline  ::capnp::List< ::uint32_t>::Builder initNodeIndices(unsigned int size);
  inline void adoptNodeIndices(::capnp::Orphan< ::capnp::List< ::uint32_t>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::uint32_t>> disownNodeIndices();

  inline bool hasAttachPositions();
  inline  ::capnp::List< ::Nv::Blast::Serialization::NvVec3>::Builder getAttachPositions();
  inline void setAttachPositions( ::capnp::List< ::Nv::Blast::Serialization::NvVec3>::Reader value);
  inline  ::capnp::List< ::Nv::Blast::Serialization::NvVec3>::Builder initAttachPositions(unsigned int size);
  inline void adoptAttachPositions(::capnp::Orphan< ::capnp::List< ::Nv::Blast::Serialization::NvVec3>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::Nv::Blast::Serialization::NvVec3>> disownAttachPositions();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class TkAssetJointDesc::Pipeline {
public:
  typedef TkAssetJointDesc Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class NvVec3::Reader {
public:
  typedef NvVec3 Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline float getX() const;

  inline float getY() const;

  inline float getZ() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class NvVec3::Builder {
public:
  typedef NvVec3 Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline float getX();
  inline void setX(float value);

  inline float getY();
  inline void setY(float value);

  inline float getZ();
  inline void setZ(float value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class NvVec3::Pipeline {
public:
  typedef NvVec3 Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline bool TkAsset::Reader::hasAssetLL() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool TkAsset::Builder::hasAssetLL() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::Nv::Blast::Serialization::Asset::Reader TkAsset::Reader::getAssetLL() const {
  return ::capnp::_::PointerHelpers< ::Nv::Blast::Serialization::Asset>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::Nv::Blast::Serialization::Asset::Builder TkAsset::Builder::getAssetLL() {
  return ::capnp::_::PointerHelpers< ::Nv::Blast::Serialization::Asset>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::Nv::Blast::Serialization::Asset::Pipeline TkAsset::Pipeline::getAssetLL() {
  return  ::Nv::Blast::Serialization::Asset::Pipeline(_typeless.getPointerField(0));
}
#endif  // !CAPNP_LITE
inline void TkAsset::Builder::setAssetLL( ::Nv::Blast::Serialization::Asset::Reader value) {
  ::capnp::_::PointerHelpers< ::Nv::Blast::Serialization::Asset>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::Nv::Blast::Serialization::Asset::Builder TkAsset::Builder::initAssetLL() {
  return ::capnp::_::PointerHelpers< ::Nv::Blast::Serialization::Asset>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void TkAsset::Builder::adoptAssetLL(
    ::capnp::Orphan< ::Nv::Blast::Serialization::Asset>&& value) {
  ::capnp::_::PointerHelpers< ::Nv::Blast::Serialization::Asset>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::Nv::Blast::Serialization::Asset> TkAsset::Builder::disownAssetLL() {
  return ::capnp::_::PointerHelpers< ::Nv::Blast::Serialization::Asset>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline bool TkAsset::Reader::hasJointDescs() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool TkAsset::Builder::hasJointDescs() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::Nv::Blast::Serialization::TkAssetJointDesc>::Reader TkAsset::Reader::getJointDescs() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::Nv::Blast::Serialization::TkAssetJointDesc>>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::Nv::Blast::Serialization::TkAssetJointDesc>::Builder TkAsset::Builder::getJointDescs() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::Nv::Blast::Serialization::TkAssetJointDesc>>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void TkAsset::Builder::setJointDescs( ::capnp::List< ::Nv::Blast::Serialization::TkAssetJointDesc>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::Nv::Blast::Serialization::TkAssetJointDesc>>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::Nv::Blast::Serialization::TkAssetJointDesc>::Builder TkAsset::Builder::initJointDescs(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::Nv::Blast::Serialization::TkAssetJointDesc>>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), size);
}
inline void TkAsset::Builder::adoptJointDescs(
    ::capnp::Orphan< ::capnp::List< ::Nv::Blast::Serialization::TkAssetJointDesc>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::Nv::Blast::Serialization::TkAssetJointDesc>>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::Nv::Blast::Serialization::TkAssetJointDesc>> TkAsset::Builder::disownJointDescs() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::Nv::Blast::Serialization::TkAssetJointDesc>>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}

inline bool TkAssetJointDesc::Reader::hasNodeIndices() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool TkAssetJointDesc::Builder::hasNodeIndices() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::uint32_t>::Reader TkAssetJointDesc::Reader::getNodeIndices() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint32_t>>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::uint32_t>::Builder TkAssetJointDesc::Builder::getNodeIndices() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint32_t>>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void TkAssetJointDesc::Builder::setNodeIndices( ::capnp::List< ::uint32_t>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::uint32_t>>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline void TkAssetJointDesc::Builder::setNodeIndices(::kj::ArrayPtr<const  ::uint32_t> value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::uint32_t>>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::uint32_t>::Builder TkAssetJointDesc::Builder::initNodeIndices(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint32_t>>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void TkAssetJointDesc::Builder::adoptNodeIndices(
    ::capnp::Orphan< ::capnp::List< ::uint32_t>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::uint32_t>>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::uint32_t>> TkAssetJointDesc::Builder::disownNodeIndices() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint32_t>>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline bool TkAssetJointDesc::Reader::hasAttachPositions() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool TkAssetJointDesc::Builder::hasAttachPositions() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::Nv::Blast::Serialization::NvVec3>::Reader TkAssetJointDesc::Reader::getAttachPositions() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::Nv::Blast::Serialization::NvVec3>>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::Nv::Blast::Serialization::NvVec3>::Builder TkAssetJointDesc::Builder::getAttachPositions() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::Nv::Blast::Serialization::NvVec3>>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void TkAssetJointDesc::Builder::setAttachPositions( ::capnp::List< ::Nv::Blast::Serialization::NvVec3>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::Nv::Blast::Serialization::NvVec3>>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::Nv::Blast::Serialization::NvVec3>::Builder TkAssetJointDesc::Builder::initAttachPositions(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::Nv::Blast::Serialization::NvVec3>>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), size);
}
inline void TkAssetJointDesc::Builder::adoptAttachPositions(
    ::capnp::Orphan< ::capnp::List< ::Nv::Blast::Serialization::NvVec3>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::Nv::Blast::Serialization::NvVec3>>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::Nv::Blast::Serialization::NvVec3>> TkAssetJointDesc::Builder::disownAttachPositions() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::Nv::Blast::Serialization::NvVec3>>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}

inline float NvVec3::Reader::getX() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline float NvVec3::Builder::getX() {
  return _builder.getDataField<float>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void NvVec3::Builder::setX(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline float NvVec3::Reader::getY() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}

inline float NvVec3::Builder::getY() {
  return _builder.getDataField<float>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}
inline void NvVec3::Builder::setY(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS, value);
}

inline float NvVec3::Reader::getZ() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}

inline float NvVec3::Builder::getZ() {
  return _builder.getDataField<float>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}
inline void NvVec3::Builder::setZ(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS, value);
}

}  // namespace
}  // namespace
}  // namespace

#endif  // CAPNP_INCLUDED_affe4498f275ee58_
