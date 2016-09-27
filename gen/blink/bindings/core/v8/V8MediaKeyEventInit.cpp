// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8MediaKeyEventInit.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8EventInit.h"
#include "bindings/core/v8/V8MediaKeyError.h"
#include "bindings/core/v8/V8Uint8Array.h"

namespace blink {

void V8MediaKeyEventInit::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MediaKeyEventInit& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value))
        return;
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    V8EventInit::toImpl(isolate, v8Value, impl, exceptionState);
    if (exceptionState.hadException())
        return;

    v8::TryCatch block;
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    {
        v8::Local<v8::Value> defaultURLValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "defaultURL")).ToLocal(&defaultURLValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (defaultURLValue.IsEmpty() || defaultURLValue->IsUndefined()) {
            // Do nothing.
        } else {
            V8StringResource<> defaultURL = defaultURLValue;
            if (!defaultURL.prepare(exceptionState))
                return;
            impl.setDefaultURL(defaultURL);
        }
    }

    {
        v8::Local<v8::Value> errorCodeValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "errorCode")).ToLocal(&errorCodeValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (errorCodeValue.IsEmpty() || errorCodeValue->IsUndefined()) {
            // Do nothing.
        } else if (errorCodeValue->IsNull()) {
            impl.setErrorCodeToNull();
        } else {
            MediaKeyError* errorCode = V8MediaKeyError::toImplWithTypeCheck(isolate, errorCodeValue);
            if (!errorCode && !errorCodeValue->IsNull()) {
                exceptionState.throwTypeError("member errorCode is not of type MediaKeyError.");
                return;
            }
            impl.setErrorCode(errorCode);
        }
    }

    {
        v8::Local<v8::Value> initDataValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "initData")).ToLocal(&initDataValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (initDataValue.IsEmpty() || initDataValue->IsUndefined()) {
            // Do nothing.
        } else {
            DOMUint8Array* initData = initDataValue->IsUint8Array() ? V8Uint8Array::toImpl(v8::Local<v8::Uint8Array>::Cast(initDataValue)) : 0;
            if (!initData && !initDataValue->IsNull()) {
                exceptionState.throwTypeError("member initData is not of type Uint8Array.");
                return;
            }
            impl.setInitData(initData);
        }
    }

    {
        v8::Local<v8::Value> keySystemValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "keySystem")).ToLocal(&keySystemValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (keySystemValue.IsEmpty() || keySystemValue->IsUndefined()) {
            // Do nothing.
        } else {
            V8StringResource<> keySystem = keySystemValue;
            if (!keySystem.prepare(exceptionState))
                return;
            impl.setKeySystem(keySystem);
        }
    }

    {
        v8::Local<v8::Value> messageValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "message")).ToLocal(&messageValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (messageValue.IsEmpty() || messageValue->IsUndefined()) {
            // Do nothing.
        } else {
            DOMUint8Array* message = messageValue->IsUint8Array() ? V8Uint8Array::toImpl(v8::Local<v8::Uint8Array>::Cast(messageValue)) : 0;
            if (!message && !messageValue->IsNull()) {
                exceptionState.throwTypeError("member message is not of type Uint8Array.");
                return;
            }
            impl.setMessage(message);
        }
    }

    {
        v8::Local<v8::Value> sessionIdValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "sessionId")).ToLocal(&sessionIdValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (sessionIdValue.IsEmpty() || sessionIdValue->IsUndefined()) {
            // Do nothing.
        } else {
            V8StringResource<> sessionId = sessionIdValue;
            if (!sessionId.prepare(exceptionState))
                return;
            impl.setSessionId(sessionId);
        }
    }

    {
        v8::Local<v8::Value> systemCodeValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "systemCode")).ToLocal(&systemCodeValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (systemCodeValue.IsEmpty() || systemCodeValue->IsUndefined()) {
            // Do nothing.
        } else {
            unsigned systemCode = toUInt16(isolate, systemCodeValue, NormalConversion, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setSystemCode(systemCode);
        }
    }

}

v8::Local<v8::Value> toV8(const MediaKeyEventInit& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8EventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    if (!toV8MediaKeyEventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8MediaKeyEventInit(const MediaKeyEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasDefaultURL()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "defaultURL"), v8String(isolate, impl.defaultURL()))))
            return false;
    }

    if (impl.hasErrorCode()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "errorCode"), toV8(impl.errorCode(), creationContext, isolate))))
            return false;
    }

    if (impl.hasInitData()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "initData"), toV8(impl.initData(), creationContext, isolate))))
            return false;
    }

    if (impl.hasKeySystem()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "keySystem"), v8String(isolate, impl.keySystem()))))
            return false;
    }

    if (impl.hasMessage()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "message"), toV8(impl.message(), creationContext, isolate))))
            return false;
    }

    if (impl.hasSessionId()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "sessionId"), v8String(isolate, impl.sessionId()))))
            return false;
    }

    if (impl.hasSystemCode()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "systemCode"), v8::Integer::NewFromUnsigned(isolate, impl.systemCode()))))
            return false;
    }

    return true;
}

MediaKeyEventInit NativeValueTraits<MediaKeyEventInit>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    MediaKeyEventInit impl;
    V8MediaKeyEventInit::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
