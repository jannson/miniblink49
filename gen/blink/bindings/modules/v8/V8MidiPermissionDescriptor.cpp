// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8MidiPermissionDescriptor.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/modules/v8/V8PermissionDescriptor.h"

namespace blink {

void V8MidiPermissionDescriptor::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MidiPermissionDescriptor& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value))
        return;
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    V8PermissionDescriptor::toImpl(isolate, v8Value, impl, exceptionState);
    if (exceptionState.hadException())
        return;

    v8::TryCatch block;
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    {
        v8::Local<v8::Value> sysexValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "sysex")).ToLocal(&sysexValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (sysexValue.IsEmpty() || sysexValue->IsUndefined()) {
            // Do nothing.
        } else {
            bool sysex = toBoolean(isolate, sysexValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setSysex(sysex);
        }
    }

}

v8::Local<v8::Value> toV8(const MidiPermissionDescriptor& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8PermissionDescriptor(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    if (!toV8MidiPermissionDescriptor(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8MidiPermissionDescriptor(const MidiPermissionDescriptor& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasSysex()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "sysex"), v8Boolean(impl.sysex(), isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "sysex"), v8Boolean(false, isolate))))
            return false;
    }

    return true;
}

MidiPermissionDescriptor NativeValueTraits<MidiPermissionDescriptor>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    MidiPermissionDescriptor impl;
    V8MidiPermissionDescriptor::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
