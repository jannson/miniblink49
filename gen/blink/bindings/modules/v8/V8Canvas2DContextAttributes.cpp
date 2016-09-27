// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8Canvas2DContextAttributes.h"

#include "bindings/core/v8/ExceptionState.h"

namespace blink {

void V8Canvas2DContextAttributes::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, Canvas2DContextAttributes& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value))
        return;
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    v8::TryCatch block;
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    {
        v8::Local<v8::Value> alphaValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "alpha")).ToLocal(&alphaValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (alphaValue.IsEmpty() || alphaValue->IsUndefined()) {
            // Do nothing.
        } else {
            bool alpha = toBoolean(isolate, alphaValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setAlpha(alpha);
        }
    }

}

v8::Local<v8::Value> toV8(const Canvas2DContextAttributes& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8Canvas2DContextAttributes(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8Canvas2DContextAttributes(const Canvas2DContextAttributes& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasAlpha()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "alpha"), v8Boolean(impl.alpha(), isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "alpha"), v8Boolean(true, isolate))))
            return false;
    }

    return true;
}

Canvas2DContextAttributes NativeValueTraits<Canvas2DContextAttributes>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    Canvas2DContextAttributes impl;
    V8Canvas2DContextAttributes::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
