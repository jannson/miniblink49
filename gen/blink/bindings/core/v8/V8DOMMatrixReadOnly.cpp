// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8DOMMatrixReadOnly.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8DOMMatrix.h"
#include "bindings/core/v8/V8Float32Array.h"
#include "bindings/core/v8/V8Float64Array.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8DOMMatrixReadOnly::wrapperTypeInfo = { gin::kEmbedderBlink, V8DOMMatrixReadOnly::domTemplate, V8DOMMatrixReadOnly::refObject, V8DOMMatrixReadOnly::derefObject, V8DOMMatrixReadOnly::trace, 0, 0, V8DOMMatrixReadOnly::preparePrototypeObject, V8DOMMatrixReadOnly::installConditionallyEnabledProperties, "DOMMatrixReadOnly", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DOMMatrixReadOnly.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& DOMMatrixReadOnly::s_wrapperTypeInfo = V8DOMMatrixReadOnly::wrapperTypeInfo;

namespace DOMMatrixReadOnlyV8Internal {

static void aAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(holder);
    v8SetReturnValue(info, impl->a());
}

static void aAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMMatrixReadOnlyV8Internal::aAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void bAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(holder);
    v8SetReturnValue(info, impl->b());
}

static void bAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMMatrixReadOnlyV8Internal::bAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void cAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(holder);
    v8SetReturnValue(info, impl->c());
}

static void cAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMMatrixReadOnlyV8Internal::cAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void dAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(holder);
    v8SetReturnValue(info, impl->d());
}

static void dAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMMatrixReadOnlyV8Internal::dAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void eAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(holder);
    v8SetReturnValue(info, impl->e());
}

static void eAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMMatrixReadOnlyV8Internal::eAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void fAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(holder);
    v8SetReturnValue(info, impl->f());
}

static void fAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMMatrixReadOnlyV8Internal::fAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void m11AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(holder);
    v8SetReturnValue(info, impl->m11());
}

static void m11AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMMatrixReadOnlyV8Internal::m11AttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void m12AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(holder);
    v8SetReturnValue(info, impl->m12());
}

static void m12AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMMatrixReadOnlyV8Internal::m12AttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void m13AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(holder);
    v8SetReturnValue(info, impl->m13());
}

static void m13AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMMatrixReadOnlyV8Internal::m13AttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void m14AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(holder);
    v8SetReturnValue(info, impl->m14());
}

static void m14AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMMatrixReadOnlyV8Internal::m14AttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void m21AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(holder);
    v8SetReturnValue(info, impl->m21());
}

static void m21AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMMatrixReadOnlyV8Internal::m21AttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void m22AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(holder);
    v8SetReturnValue(info, impl->m22());
}

static void m22AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMMatrixReadOnlyV8Internal::m22AttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void m23AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(holder);
    v8SetReturnValue(info, impl->m23());
}

static void m23AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMMatrixReadOnlyV8Internal::m23AttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void m24AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(holder);
    v8SetReturnValue(info, impl->m24());
}

static void m24AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMMatrixReadOnlyV8Internal::m24AttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void m31AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(holder);
    v8SetReturnValue(info, impl->m31());
}

static void m31AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMMatrixReadOnlyV8Internal::m31AttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void m32AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(holder);
    v8SetReturnValue(info, impl->m32());
}

static void m32AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMMatrixReadOnlyV8Internal::m32AttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void m33AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(holder);
    v8SetReturnValue(info, impl->m33());
}

static void m33AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMMatrixReadOnlyV8Internal::m33AttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void m34AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(holder);
    v8SetReturnValue(info, impl->m34());
}

static void m34AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMMatrixReadOnlyV8Internal::m34AttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void m41AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(holder);
    v8SetReturnValue(info, impl->m41());
}

static void m41AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMMatrixReadOnlyV8Internal::m41AttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void m42AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(holder);
    v8SetReturnValue(info, impl->m42());
}

static void m42AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMMatrixReadOnlyV8Internal::m42AttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void m43AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(holder);
    v8SetReturnValue(info, impl->m43());
}

static void m43AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMMatrixReadOnlyV8Internal::m43AttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void m44AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(holder);
    v8SetReturnValue(info, impl->m44());
}

static void m44AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMMatrixReadOnlyV8Internal::m44AttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void is2DAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(holder);
    v8SetReturnValueBool(info, impl->is2D());
}

static void is2DAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMMatrixReadOnlyV8Internal::is2DAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void isIdentityAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(holder);
    v8SetReturnValueBool(info, impl->isIdentity());
}

static void isIdentityAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMMatrixReadOnlyV8Internal::isIdentityAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void translateMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "translate", "DOMMatrixReadOnly", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(info.Holder());
    double tx;
    double ty;
    double tz;
    {
        tx = toDouble(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        ty = toDouble(info.GetIsolate(), info[1], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        if (!info[2]->IsUndefined()) {
            tz = toDouble(info.GetIsolate(), info[2], exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            tz = 0;
        }
    }
    v8SetReturnValue(info, impl->translate(tx, ty, tz));
}

static void translateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DOMMatrixReadOnlyV8Internal::translateMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void scaleMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "scale", "DOMMatrixReadOnly", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(info.Holder());
    double scale;
    double originX;
    double originY;
    {
        scale = toDouble(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        if (!info[1]->IsUndefined()) {
            originX = toDouble(info.GetIsolate(), info[1], exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            originX = 0;
        }
        if (!info[2]->IsUndefined()) {
            originY = toDouble(info.GetIsolate(), info[2], exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            originY = 0;
        }
    }
    v8SetReturnValue(info, impl->scale(scale, originX, originY));
}

static void scaleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DOMMatrixReadOnlyV8Internal::scaleMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void scale3dMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "scale3d", "DOMMatrixReadOnly", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(info.Holder());
    double scale;
    double originX;
    double originY;
    double originZ;
    {
        scale = toDouble(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        if (!info[1]->IsUndefined()) {
            originX = toDouble(info.GetIsolate(), info[1], exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            originX = 0;
        }
        if (!info[2]->IsUndefined()) {
            originY = toDouble(info.GetIsolate(), info[2], exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            originY = 0;
        }
        if (!info[3]->IsUndefined()) {
            originZ = toDouble(info.GetIsolate(), info[3], exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            originZ = 0;
        }
    }
    v8SetReturnValue(info, impl->scale3d(scale, originX, originY, originZ));
}

static void scale3dMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DOMMatrixReadOnlyV8Internal::scale3dMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void scaleNonUniformMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "scaleNonUniform", "DOMMatrixReadOnly", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(info.Holder());
    double scaleX;
    double scaleY;
    double scaleZn;
    double originX;
    double originY;
    double originZ;
    {
        scaleX = toDouble(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        if (!info[1]->IsUndefined()) {
            scaleY = toDouble(info.GetIsolate(), info[1], exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            scaleY = 1;
        }
        if (!info[2]->IsUndefined()) {
            scaleZn = toDouble(info.GetIsolate(), info[2], exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            scaleZn = 1;
        }
        if (!info[3]->IsUndefined()) {
            originX = toDouble(info.GetIsolate(), info[3], exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            originX = 0;
        }
        if (!info[4]->IsUndefined()) {
            originY = toDouble(info.GetIsolate(), info[4], exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            originY = 0;
        }
        if (!info[5]->IsUndefined()) {
            originZ = toDouble(info.GetIsolate(), info[5], exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            originZ = 0;
        }
    }
    v8SetReturnValue(info, impl->scaleNonUniform(scaleX, scaleY, scaleZn, originX, originY, originZ));
}

static void scaleNonUniformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DOMMatrixReadOnlyV8Internal::scaleNonUniformMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void multiplyMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "multiply", "DOMMatrixReadOnly", 1, info.Length()), info.GetIsolate());
        return;
    }
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(info.Holder());
    DOMMatrix* other;
    {
        other = V8DOMMatrix::toImplWithTypeCheck(info.GetIsolate(), info[0]);
    }
    v8SetReturnValue(info, impl->multiply(other));
}

static void multiplyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DOMMatrixReadOnlyV8Internal::multiplyMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void toFloat32ArrayMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(info.Holder());
    v8SetReturnValue(info, impl->toFloat32Array());
}

static void toFloat32ArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DOMMatrixReadOnlyV8Internal::toFloat32ArrayMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void toFloat64ArrayMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::toImpl(info.Holder());
    v8SetReturnValue(info, impl->toFloat64Array());
}

static void toFloat64ArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DOMMatrixReadOnlyV8Internal::toFloat64ArrayMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace DOMMatrixReadOnlyV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8DOMMatrixReadOnlyAccessors[] = {
    {"a", DOMMatrixReadOnlyV8Internal::aAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"b", DOMMatrixReadOnlyV8Internal::bAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"c", DOMMatrixReadOnlyV8Internal::cAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"d", DOMMatrixReadOnlyV8Internal::dAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"e", DOMMatrixReadOnlyV8Internal::eAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"f", DOMMatrixReadOnlyV8Internal::fAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"m11", DOMMatrixReadOnlyV8Internal::m11AttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"m12", DOMMatrixReadOnlyV8Internal::m12AttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"m13", DOMMatrixReadOnlyV8Internal::m13AttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"m14", DOMMatrixReadOnlyV8Internal::m14AttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"m21", DOMMatrixReadOnlyV8Internal::m21AttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"m22", DOMMatrixReadOnlyV8Internal::m22AttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"m23", DOMMatrixReadOnlyV8Internal::m23AttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"m24", DOMMatrixReadOnlyV8Internal::m24AttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"m31", DOMMatrixReadOnlyV8Internal::m31AttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"m32", DOMMatrixReadOnlyV8Internal::m32AttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"m33", DOMMatrixReadOnlyV8Internal::m33AttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"m34", DOMMatrixReadOnlyV8Internal::m34AttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"m41", DOMMatrixReadOnlyV8Internal::m41AttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"m42", DOMMatrixReadOnlyV8Internal::m42AttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"m43", DOMMatrixReadOnlyV8Internal::m43AttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"m44", DOMMatrixReadOnlyV8Internal::m44AttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"is2D", DOMMatrixReadOnlyV8Internal::is2DAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"isIdentity", DOMMatrixReadOnlyV8Internal::isIdentityAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8DOMMatrixReadOnlyMethods[] = {
    {"translate", DOMMatrixReadOnlyV8Internal::translateMethodCallback, 0, 2, V8DOMConfiguration::ExposedToAllScripts},
    {"scale", DOMMatrixReadOnlyV8Internal::scaleMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"scale3d", DOMMatrixReadOnlyV8Internal::scale3dMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"scaleNonUniform", DOMMatrixReadOnlyV8Internal::scaleNonUniformMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"multiply", DOMMatrixReadOnlyV8Internal::multiplyMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"toFloat32Array", DOMMatrixReadOnlyV8Internal::toFloat32ArrayMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"toFloat64Array", DOMMatrixReadOnlyV8Internal::toFloat64ArrayMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8DOMMatrixReadOnlyTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::geometryInterfacesEnabled())
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "DOMMatrixReadOnly", v8::Local<v8::FunctionTemplate>(), V8DOMMatrixReadOnly::internalFieldCount, 0, 0, 0, 0, 0, 0);
    else
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "DOMMatrixReadOnly", v8::Local<v8::FunctionTemplate>(), V8DOMMatrixReadOnly::internalFieldCount,
            0, 0,
            V8DOMMatrixReadOnlyAccessors, WTF_ARRAY_LENGTH(V8DOMMatrixReadOnlyAccessors),
            V8DOMMatrixReadOnlyMethods, WTF_ARRAY_LENGTH(V8DOMMatrixReadOnlyMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8DOMMatrixReadOnly::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8DOMMatrixReadOnlyTemplate);
}

bool V8DOMMatrixReadOnly::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8DOMMatrixReadOnly::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DOMMatrixReadOnly* V8DOMMatrixReadOnly::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8DOMMatrixReadOnly::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8DOMMatrixReadOnly::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
