// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8TouchEvent.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8TouchList.h"
#include "bindings/core/v8/V8Window.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/UseCounter.h"
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
const WrapperTypeInfo V8TouchEvent::wrapperTypeInfo = { gin::kEmbedderBlink, V8TouchEvent::domTemplate, V8TouchEvent::refObject, V8TouchEvent::derefObject, V8TouchEvent::trace, 0, 0, V8TouchEvent::preparePrototypeObject, V8TouchEvent::installConditionallyEnabledProperties, "TouchEvent", &V8UIEvent::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in TouchEvent.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& TouchEvent::s_wrapperTypeInfo = V8TouchEvent::wrapperTypeInfo;

namespace TouchEventV8Internal {

static void touchesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TouchEvent* impl = V8TouchEvent::toImpl(holder);
    RefPtrWillBeRawPtr<TouchList> cppValue(impl->touches());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "touches"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void touchesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    TouchEventV8Internal::touchesAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void targetTouchesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TouchEvent* impl = V8TouchEvent::toImpl(holder);
    RefPtrWillBeRawPtr<TouchList> cppValue(impl->targetTouches());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "targetTouches"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void targetTouchesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    TouchEventV8Internal::targetTouchesAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void changedTouchesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TouchEvent* impl = V8TouchEvent::toImpl(holder);
    RefPtrWillBeRawPtr<TouchList> cppValue(impl->changedTouches());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "changedTouches"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void changedTouchesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    TouchEventV8Internal::changedTouchesAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void altKeyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TouchEvent* impl = V8TouchEvent::toImpl(holder);
    v8SetReturnValueBool(info, impl->altKey());
}

static void altKeyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    TouchEventV8Internal::altKeyAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void metaKeyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TouchEvent* impl = V8TouchEvent::toImpl(holder);
    v8SetReturnValueBool(info, impl->metaKey());
}

static void metaKeyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    TouchEventV8Internal::metaKeyAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void ctrlKeyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TouchEvent* impl = V8TouchEvent::toImpl(holder);
    v8SetReturnValueBool(info, impl->ctrlKey());
}

static void ctrlKeyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    TouchEventV8Internal::ctrlKeyAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void shiftKeyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TouchEvent* impl = V8TouchEvent::toImpl(holder);
    v8SetReturnValueBool(info, impl->shiftKey());
}

static void shiftKeyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    TouchEventV8Internal::shiftKeyAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void initTouchEventMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "initTouchEvent", "TouchEvent", info.Holder(), info.GetIsolate());
    TouchEvent* impl = V8TouchEvent::toImpl(info.Holder());
    TouchList* touches;
    TouchList* targetTouches;
    TouchList* changedTouches;
    V8StringResource<> type;
    DOMWindow* view;
    int unused1;
    int unused2;
    int unused3;
    int unused4;
    bool ctrlKey;
    bool altKey;
    bool shiftKey;
    bool metaKey;
    {
        touches = V8TouchList::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        targetTouches = V8TouchList::toImplWithTypeCheck(info.GetIsolate(), info[1]);
        changedTouches = V8TouchList::toImplWithTypeCheck(info.GetIsolate(), info[2]);
        type = info[3];
        if (!type.prepare())
            return;
        view = toDOMWindow(info.GetIsolate(), info[4]);
        unused1 = toInt32(info.GetIsolate(), info[5], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        unused2 = toInt32(info.GetIsolate(), info[6], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        unused3 = toInt32(info.GetIsolate(), info[7], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        unused4 = toInt32(info.GetIsolate(), info[8], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        ctrlKey = toBoolean(info.GetIsolate(), info[9], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        altKey = toBoolean(info.GetIsolate(), info[10], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        shiftKey = toBoolean(info.GetIsolate(), info[11], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        metaKey = toBoolean(info.GetIsolate(), info[12], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    impl->initTouchEvent(scriptState, touches, targetTouches, changedTouches, type, view, unused1, unused2, unused3, unused4, ctrlKey, altKey, shiftKey, metaKey);
}

static void initTouchEventMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::V8TouchEvent_InitTouchEvent_Method);
    TouchEventV8Internal::initTouchEventMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace TouchEventV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8TouchEventAccessors[] = {
    {"touches", TouchEventV8Internal::touchesAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"targetTouches", TouchEventV8Internal::targetTouchesAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"changedTouches", TouchEventV8Internal::changedTouchesAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"altKey", TouchEventV8Internal::altKeyAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"metaKey", TouchEventV8Internal::metaKeyAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"ctrlKey", TouchEventV8Internal::ctrlKeyAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"shiftKey", TouchEventV8Internal::shiftKeyAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8TouchEventMethods[] = {
    {"initTouchEvent", TouchEventV8Internal::initTouchEventMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8TouchEventTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "TouchEvent", V8UIEvent::domTemplate(isolate), V8TouchEvent::internalFieldCount,
        0, 0,
        V8TouchEventAccessors, WTF_ARRAY_LENGTH(V8TouchEventAccessors),
        V8TouchEventMethods, WTF_ARRAY_LENGTH(V8TouchEventMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8TouchEvent::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8TouchEventTemplate);
}

bool V8TouchEvent::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8TouchEvent::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

TouchEvent* V8TouchEvent::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8TouchEvent::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<TouchEvent>()->ref();
#endif
}

void V8TouchEvent::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<TouchEvent>()->deref();
#endif
}

} // namespace blink
