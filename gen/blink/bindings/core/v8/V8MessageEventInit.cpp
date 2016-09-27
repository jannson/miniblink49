// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8MessageEventInit.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/V8EventInit.h"
#include "bindings/core/v8/V8EventTarget.h"
#include "bindings/core/v8/V8MessagePort.h"

namespace blink {

void V8MessageEventInit::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MessageEventInit& impl, ExceptionState& exceptionState)
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
        v8::Local<v8::Value> dataValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "data")).ToLocal(&dataValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (dataValue.IsEmpty() || dataValue->IsUndefined()) {
            // Do nothing.
        } else {
            ScriptValue data = ScriptValue(ScriptState::current(isolate), dataValue);
            impl.setData(data);
        }
    }

    {
        v8::Local<v8::Value> lastEventIdValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "lastEventId")).ToLocal(&lastEventIdValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (lastEventIdValue.IsEmpty() || lastEventIdValue->IsUndefined()) {
            // Do nothing.
        } else {
            V8StringResource<> lastEventId = lastEventIdValue;
            if (!lastEventId.prepare(exceptionState))
                return;
            impl.setLastEventId(lastEventId);
        }
    }

    {
        v8::Local<v8::Value> originValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "origin")).ToLocal(&originValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (originValue.IsEmpty() || originValue->IsUndefined()) {
            // Do nothing.
        } else {
            V8StringResource<> origin = originValue;
            if (!origin.prepare(exceptionState))
                return;
            impl.setOrigin(origin);
        }
    }

    {
        v8::Local<v8::Value> portsValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "ports")).ToLocal(&portsValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (portsValue.IsEmpty() || portsValue->IsUndefined()) {
            // Do nothing.
        } else if (portsValue->IsNull()) {
            impl.setPortsToNull();
        } else {
            HeapVector<Member<MessagePort>> ports = (toMemberNativeArray<MessagePort, V8MessagePort>(portsValue, 0, isolate, exceptionState));
            if (exceptionState.hadException())
                return;
            impl.setPorts(ports);
        }
    }

    {
        v8::Local<v8::Value> sourceValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "source")).ToLocal(&sourceValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (sourceValue.IsEmpty() || sourceValue->IsUndefined()) {
            // Do nothing.
        } else {
            EventTarget* source = toEventTarget(isolate, sourceValue);
            if (!source && !sourceValue->IsNull()) {
                exceptionState.throwTypeError("member source is not of type EventTarget.");
                return;
            }
            impl.setSource(source);
        }
    }

}

v8::Local<v8::Value> toV8(const MessageEventInit& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8EventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    if (!toV8MessageEventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8MessageEventInit(const MessageEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasData()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "data"), impl.data().v8Value())))
            return false;
    }

    if (impl.hasLastEventId()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "lastEventId"), v8String(isolate, impl.lastEventId()))))
            return false;
    }

    if (impl.hasOrigin()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "origin"), v8String(isolate, impl.origin()))))
            return false;
    }

    if (impl.hasPorts()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "ports"), toV8(impl.ports(), creationContext, isolate))))
            return false;
    }

    if (impl.hasSource()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "source"), toV8(impl.source(), creationContext, isolate))))
            return false;
    }

    return true;
}

MessageEventInit NativeValueTraits<MessageEventInit>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    MessageEventInit impl;
    V8MessageEventInit::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
