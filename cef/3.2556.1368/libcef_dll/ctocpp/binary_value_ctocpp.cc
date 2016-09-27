// Copyright (c) 2015 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/ctocpp/binary_value_ctocpp.h"


// STATIC METHODS - Body may be edited by hand.

#ifndef INSIDE_BLINK

CefRefPtr<CefBinaryValue> CefBinaryValue::Create(const void* data,
    size_t data_size) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: data; type: simple_byaddr
  DCHECK(data);
  if (!data)
    return NULL;

  // Execute
  cef_binary_value_t* _retval = cef_binary_value_create(
      data,
      data_size);

  // Return type: refptr_same
  return CefBinaryValueCToCpp::Wrap(_retval);
}

#endif

// VIRTUAL METHODS - Body may be edited by hand.

bool CefBinaryValueCToCpp::IsValid() {
  cef_binary_value_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_valid))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_valid(_struct);

  // Return type: bool
  return _retval?true:false;
}

bool CefBinaryValueCToCpp::IsOwned() {
  cef_binary_value_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_owned))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_owned(_struct);

  // Return type: bool
  return _retval?true:false;
}

bool CefBinaryValueCToCpp::IsSame(CefRefPtr<CefBinaryValue> that) {
  cef_binary_value_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_same))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: that; type: refptr_same
  DCHECK(that.get());
  if (!that.get())
    return false;

  // Execute
  int _retval = _struct->is_same(_struct,
      CefBinaryValueCToCpp::Unwrap(that));

  // Return type: bool
  return _retval?true:false;
}

bool CefBinaryValueCToCpp::IsEqual(CefRefPtr<CefBinaryValue> that) {
  cef_binary_value_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_equal))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: that; type: refptr_same
  DCHECK(that.get());
  if (!that.get())
    return false;

  // Execute
  int _retval = _struct->is_equal(_struct,
      CefBinaryValueCToCpp::Unwrap(that));

  // Return type: bool
  return _retval?true:false;
}

CefRefPtr<CefBinaryValue> CefBinaryValueCToCpp::Copy() {
  cef_binary_value_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, copy))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_binary_value_t* _retval = _struct->copy(_struct);

  // Return type: refptr_same
  return CefBinaryValueCToCpp::Wrap(_retval);
}

size_t CefBinaryValueCToCpp::GetSize() {
  cef_binary_value_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_size))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  size_t _retval = _struct->get_size(_struct);

  // Return type: simple
  return _retval;
}

size_t CefBinaryValueCToCpp::GetData(void* buffer, size_t buffer_size,
    size_t data_offset) {
  cef_binary_value_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_data))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: buffer; type: simple_byaddr
  DCHECK(buffer);
  if (!buffer)
    return 0;

  // Execute
  size_t _retval = _struct->get_data(_struct,
      buffer,
      buffer_size,
      data_offset);

  // Return type: simple
  return _retval;
}


// CONSTRUCTOR - Do not edit by hand.

CefBinaryValueCToCpp::CefBinaryValueCToCpp() {
}

template<> cef_binary_value_t* CefCToCpp<CefBinaryValueCToCpp, CefBinaryValue,
    cef_binary_value_t>::UnwrapDerived(CefWrapperType type,
    CefBinaryValue* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#ifndef NDEBUG
template<> base::AtomicRefCount CefCToCpp<CefBinaryValueCToCpp, CefBinaryValue,
    cef_binary_value_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCToCpp<CefBinaryValueCToCpp, CefBinaryValue,
    cef_binary_value_t>::kWrapperType = WT_BINARY_VALUE;
