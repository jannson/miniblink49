// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef PushPermissionDescriptor_h
#define PushPermissionDescriptor_h

#include "bindings/core/v8/Nullable.h"
#include "modules/ModulesExport.h"
#include "modules/permissions/PermissionDescriptor.h"
#include "platform/heap/Handle.h"

namespace blink {

class MODULES_EXPORT PushPermissionDescriptor : public PermissionDescriptor {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    PushPermissionDescriptor();

    bool hasUserVisibleOnly() const { return !m_userVisibleOnly.isNull(); }
    bool userVisibleOnly() const { return m_userVisibleOnly.get(); }
    void setUserVisibleOnly(bool value) { m_userVisibleOnly = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<bool> m_userVisibleOnly;

    friend class V8PushPermissionDescriptor;
};

} // namespace blink

#endif // PushPermissionDescriptor_h
