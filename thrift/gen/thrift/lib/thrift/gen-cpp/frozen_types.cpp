/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/lib/thrift/gen-cpp/frozen_types.h"
#include "thrift/lib/thrift/gen-cpp/frozen_data.h"

#include <algorithm>
#include <string.h>

#include <folly/Indestructible.h>

namespace apache { namespace thrift { namespace frozen { namespace schema {

bool Field::operator == (const Field & rhs) const {
  if (!(this->layoutId == rhs.layoutId))
    return false;
  if (!(this->offset == rhs.offset))
    return false;
  return true;
}

void Field::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "layoutId") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I16;
  }
  else if (_fname == "offset") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_I16;
  }
};

uint32_t Field::read(apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::protocol::TProtocolException;



  while (true)
  {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (_ftype == apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->layoutId);
          this->__isset.layoutId = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 2:
        if (_ftype == apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->offset);
          this->__isset.offset = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      default:
        xfer += iprot->skip(_ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void Field::__clear() {
  layoutId = 0;
  offset = 0;
  __isset.__clear();
}
uint32_t Field::write(apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Field");
  if (this->layoutId != 0) {
    xfer += oprot->writeFieldBegin("layoutId", apache::thrift::protocol::T_I16, 1);
    xfer += oprot->writeI16(this->layoutId);
    xfer += oprot->writeFieldEnd();
  }
  if (this->offset != 0) {
    xfer += oprot->writeFieldBegin("offset", apache::thrift::protocol::T_I16, 2);
    xfer += oprot->writeI16(this->offset);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Field &a, Field &b) {
  using ::std::swap;
  (void)a;
  (void)b;
  swap(a.layoutId, b.layoutId);
  swap(a.offset, b.offset);
  swap(a.__isset, b.__isset);
}

void merge(const Field& from, Field& to) {
  using apache::thrift::merge;
  merge(from.layoutId, to.layoutId);
  to.__isset.layoutId = to.__isset.layoutId || from.__isset.layoutId;
  merge(from.offset, to.offset);
  to.__isset.offset = to.__isset.offset || from.__isset.offset;
}

void merge(Field&& from, Field& to) {
  using apache::thrift::merge;
  merge(std::move(from.layoutId), to.layoutId);
  to.__isset.layoutId = to.__isset.layoutId || from.__isset.layoutId;
  merge(std::move(from.offset), to.offset);
  to.__isset.offset = to.__isset.offset || from.__isset.offset;
}

bool Layout::operator == (const Layout & rhs) const {
  if (!(this->size == rhs.size))
    return false;
  if (!(this->bits == rhs.bits))
    return false;
  if (!(this->fields == rhs.fields))
    return false;
  if (!(this->typeName == rhs.typeName))
    return false;
  return true;
}

void Layout::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "size") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "bits") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_I16;
  }
  else if (_fname == "fields") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_MAP;
  }
  else if (_fname == "typeName") {
    fid = 4;
    _ftype = apache::thrift::protocol::T_STRING;
  }
};

uint32_t Layout::read(apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::protocol::TProtocolException;



  while (true)
  {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (_ftype == apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->size);
          this->__isset.size = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 2:
        if (_ftype == apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->bits);
          this->__isset.bits = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 3:
        if (_ftype == apache::thrift::protocol::T_MAP) {
          {
            this->fields.clear();
            uint32_t _size2;
            bool _sizeUnknown3;
            apache::thrift::protocol::TType _ktype4 = apache::thrift::protocol::T_STOP;
            apache::thrift::protocol::TType _vtype5 = apache::thrift::protocol::T_STOP;
            xfer += iprot->readMapBegin(_ktype4, _vtype5, _size2, _sizeUnknown3);
            if (!_sizeUnknown3) {
              uint32_t _i8;
              for (_i8 = 0; _i8 < _size2; ++_i8)
              {
                int16_t _key9;
                xfer += iprot->readI16(_key9);
                Field& _val10 = this->fields[_key9];
                xfer += _val10.read(iprot);
              }
            } else {
              while (iprot->peekMap())
              {
                int16_t _key11;
                xfer += iprot->readI16(_key11);
                Field& _val12 = this->fields[_key11];
                xfer += _val12.read(iprot);
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.fields = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 4:
        if (_ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->typeName);
          this->__isset.typeName = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      default:
        xfer += iprot->skip(_ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void Layout::__clear() {
  size = 0;
  bits = 0;
  fields.clear();
  typeName = "";
  __isset.__clear();
}
uint32_t Layout::write(apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Layout");
  if (this->size != 0) {
    xfer += oprot->writeFieldBegin("size", apache::thrift::protocol::T_I32, 1);
    xfer += oprot->writeI32(this->size);
    xfer += oprot->writeFieldEnd();
  }
  if (this->bits != 0) {
    xfer += oprot->writeFieldBegin("bits", apache::thrift::protocol::T_I16, 2);
    xfer += oprot->writeI16(this->bits);
    xfer += oprot->writeFieldEnd();
  }
  if (!this->fields.empty()) {
    xfer += oprot->writeFieldBegin("fields", apache::thrift::protocol::T_MAP, 3);
    {
      xfer += oprot->writeMapBegin(apache::thrift::protocol::T_I16, apache::thrift::protocol::T_STRUCT, this->fields.size());
      std::map<int16_t, Field> ::const_iterator _iter13;
      for (_iter13 = this->fields.begin(); _iter13 != this->fields.end(); ++_iter13)
      {
        xfer += oprot->writeI16(_iter13->first);
        xfer += _iter13->second.write(oprot);
      }
      xfer += oprot->writeMapEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (!this->typeName.empty()) {
    xfer += oprot->writeFieldBegin("typeName", apache::thrift::protocol::T_STRING, 4);
    xfer += oprot->writeString(this->typeName);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Layout &a, Layout &b) {
  using ::std::swap;
  (void)a;
  (void)b;
  swap(a.size, b.size);
  swap(a.bits, b.bits);
  swap(a.fields, b.fields);
  swap(a.typeName, b.typeName);
  swap(a.__isset, b.__isset);
}

void merge(const Layout& from, Layout& to) {
  using apache::thrift::merge;
  merge(from.size, to.size);
  to.__isset.size = to.__isset.size || from.__isset.size;
  merge(from.bits, to.bits);
  to.__isset.bits = to.__isset.bits || from.__isset.bits;
  merge(from.fields, to.fields);
  to.__isset.fields = to.__isset.fields || from.__isset.fields;
  merge(from.typeName, to.typeName);
  to.__isset.typeName = to.__isset.typeName || from.__isset.typeName;
}

void merge(Layout&& from, Layout& to) {
  using apache::thrift::merge;
  merge(std::move(from.size), to.size);
  to.__isset.size = to.__isset.size || from.__isset.size;
  merge(std::move(from.bits), to.bits);
  to.__isset.bits = to.__isset.bits || from.__isset.bits;
  merge(std::move(from.fields), to.fields);
  to.__isset.fields = to.__isset.fields || from.__isset.fields;
  merge(std::move(from.typeName), to.typeName);
  to.__isset.typeName = to.__isset.typeName || from.__isset.typeName;
}

bool Schema::operator == (const Schema & rhs) const {
  if (!(this->fileVersion == rhs.fileVersion))
    return false;
  if (!(this->relaxTypeChecks == rhs.relaxTypeChecks))
    return false;
  if (!(this->layouts == rhs.layouts))
    return false;
  if (!(this->rootLayout == rhs.rootLayout))
    return false;
  return true;
}

void Schema::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "fileVersion") {
    fid = 4;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "relaxTypeChecks") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_BOOL;
  }
  else if (_fname == "layouts") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_MAP;
  }
  else if (_fname == "rootLayout") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_I16;
  }
};

uint32_t Schema::read(apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::protocol::TProtocolException;



  while (true)
  {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 4:
        if (_ftype == apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->fileVersion);
          this->__isset.fileVersion = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 1:
        if (_ftype == apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->relaxTypeChecks);
          this->__isset.relaxTypeChecks = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 2:
        if (_ftype == apache::thrift::protocol::T_MAP) {
          {
            this->layouts.clear();
            uint32_t _size15;
            bool _sizeUnknown16;
            apache::thrift::protocol::TType _ktype17 = apache::thrift::protocol::T_STOP;
            apache::thrift::protocol::TType _vtype18 = apache::thrift::protocol::T_STOP;
            xfer += iprot->readMapBegin(_ktype17, _vtype18, _size15, _sizeUnknown16);
            if (!_sizeUnknown16) {
              uint32_t _i21;
              for (_i21 = 0; _i21 < _size15; ++_i21)
              {
                int16_t _key22;
                xfer += iprot->readI16(_key22);
                Layout& _val23 = this->layouts[_key22];
                xfer += _val23.read(iprot);
              }
            } else {
              while (iprot->peekMap())
              {
                int16_t _key24;
                xfer += iprot->readI16(_key24);
                Layout& _val25 = this->layouts[_key24];
                xfer += _val25.read(iprot);
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.layouts = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 3:
        if (_ftype == apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->rootLayout);
          this->__isset.rootLayout = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      default:
        xfer += iprot->skip(_ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void Schema::__clear() {
  fileVersion = 0;
  relaxTypeChecks = false;
  layouts.clear();
  rootLayout = 0;
  __isset.__clear();
}
uint32_t Schema::write(apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Schema");
  if (this->relaxTypeChecks != false) {
    xfer += oprot->writeFieldBegin("relaxTypeChecks", apache::thrift::protocol::T_BOOL, 1);
    xfer += oprot->writeBool(this->relaxTypeChecks);
    xfer += oprot->writeFieldEnd();
  }
  if (!this->layouts.empty()) {
    xfer += oprot->writeFieldBegin("layouts", apache::thrift::protocol::T_MAP, 2);
    {
      xfer += oprot->writeMapBegin(apache::thrift::protocol::T_I16, apache::thrift::protocol::T_STRUCT, this->layouts.size());
      std::map<int16_t, Layout> ::const_iterator _iter26;
      for (_iter26 = this->layouts.begin(); _iter26 != this->layouts.end(); ++_iter26)
      {
        xfer += oprot->writeI16(_iter26->first);
        xfer += _iter26->second.write(oprot);
      }
      xfer += oprot->writeMapEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->rootLayout != 0) {
    xfer += oprot->writeFieldBegin("rootLayout", apache::thrift::protocol::T_I16, 3);
    xfer += oprot->writeI16(this->rootLayout);
    xfer += oprot->writeFieldEnd();
  }
  if (this->fileVersion != 0) {
    xfer += oprot->writeFieldBegin("fileVersion", apache::thrift::protocol::T_I32, 4);
    xfer += oprot->writeI32(this->fileVersion);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Schema &a, Schema &b) {
  using ::std::swap;
  (void)a;
  (void)b;
  swap(a.fileVersion, b.fileVersion);
  swap(a.relaxTypeChecks, b.relaxTypeChecks);
  swap(a.layouts, b.layouts);
  swap(a.rootLayout, b.rootLayout);
  swap(a.__isset, b.__isset);
}

void merge(const Schema& from, Schema& to) {
  using apache::thrift::merge;
  merge(from.fileVersion, to.fileVersion);
  to.__isset.fileVersion = to.__isset.fileVersion || from.__isset.fileVersion;
  merge(from.relaxTypeChecks, to.relaxTypeChecks);
  to.__isset.relaxTypeChecks = to.__isset.relaxTypeChecks || from.__isset.relaxTypeChecks;
  merge(from.layouts, to.layouts);
  to.__isset.layouts = to.__isset.layouts || from.__isset.layouts;
  merge(from.rootLayout, to.rootLayout);
  to.__isset.rootLayout = to.__isset.rootLayout || from.__isset.rootLayout;
}

void merge(Schema&& from, Schema& to) {
  using apache::thrift::merge;
  merge(std::move(from.fileVersion), to.fileVersion);
  to.__isset.fileVersion = to.__isset.fileVersion || from.__isset.fileVersion;
  merge(std::move(from.relaxTypeChecks), to.relaxTypeChecks);
  to.__isset.relaxTypeChecks = to.__isset.relaxTypeChecks || from.__isset.relaxTypeChecks;
  merge(std::move(from.layouts), to.layouts);
  to.__isset.layouts = to.__isset.layouts || from.__isset.layouts;
  merge(std::move(from.rootLayout), to.rootLayout);
  to.__isset.rootLayout = to.__isset.rootLayout || from.__isset.rootLayout;
}

}}}} // namespace
