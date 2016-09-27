// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8History.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/SerializedScriptValue.h"
#include "bindings/core/v8/SerializedScriptValueFactory.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8StateOptions.h"
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
const WrapperTypeInfo V8History::wrapperTypeInfo = { gin::kEmbedderBlink, V8History::domTemplate, V8History::refObject, V8History::derefObject, V8History::trace, 0, 0, V8History::preparePrototypeObject, V8History::installConditionallyEnabledProperties, "History", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in History.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& History::s_wrapperTypeInfo = V8History::wrapperTypeInfo;

namespace HistoryV8Internal {

static void lengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    History* impl = V8History::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->length());
}

static void lengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HistoryV8Internal::lengthAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void stateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    v8::Local<v8::String> propertyName = v8AtomicString(info.GetIsolate(), "state");
    History* impl = V8History::toImpl(holder);
    if (!impl->stateChanged()) {
        v8::Local<v8::Value> v8Value = V8HiddenValue::getHiddenValue(info.GetIsolate(), holder, propertyName);
        if (!v8Value.IsEmpty()) {
            v8SetReturnValue(info, v8Value);
            return;
        }
    }
    RefPtr<SerializedScriptValue> cppValue(impl->state());
    v8::Local<v8::Value> v8Value(cppValue ? cppValue->deserialize() : v8::Local<v8::Value>(v8::Null(info.GetIsolate())));
    V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, propertyName, v8Value);
    v8SetReturnValue(info, v8Value);
}

static void stateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HistoryV8Internal::stateAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void optionsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    History* impl = V8History::toImpl(holder);
    StateOptions result;
    impl->options(result);
    v8SetReturnValue(info, result);
}

static void optionsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HistoryV8Internal::optionsAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void goMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "go", "History", info.Holder(), info.GetIsolate());
    History* impl = V8History::toImpl(info.Holder());
    int delta;
    {
        if (!info[0]->IsUndefined()) {
            delta = toInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            delta = 0;
        }
    }
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    impl->go(executionContext, delta);
}

static void goMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    HistoryV8Internal::goMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void backMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    History* impl = V8History::toImpl(info.Holder());
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    impl->back(executionContext);
}

static void backMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    HistoryV8Internal::backMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void forwardMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    History* impl = V8History::toImpl(info.Holder());
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    impl->forward(executionContext);
}

static void forwardMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    HistoryV8Internal::forwardMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void pushStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "pushState", "History", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    History* impl = V8History::toImpl(info.Holder());
    RefPtr<SerializedScriptValue> data;
    V8StringResource<TreatNullAndUndefinedAsNullString> title;
    V8StringResource<TreatNullAsNullString> url;
    StateOptions options;
    {
        data = SerializedScriptValueFactory::instance().create(info.GetIsolate(), info[0], 0, 0, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        title = info[1];
        if (!title.prepare())
            return;
        if (!info[2]->IsUndefined()) {
            url = info[2];
            if (!url.prepare())
                return;
        } else {
            url = nullptr;
        }
        if (!isUndefinedOrNull(info[3]) && !info[3]->IsObject()) {
            exceptionState.throwTypeError("parameter 4 ('options') is not an object.");
            exceptionState.throwIfNeeded();
            return;
        }
        V8StateOptions::toImpl(info.GetIsolate(), info[3], options, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->pushState(data, title, url, options, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void pushStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    HistoryV8Internal::pushStateMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void replaceStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "replaceState", "History", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    History* impl = V8History::toImpl(info.Holder());
    RefPtr<SerializedScriptValue> data;
    V8StringResource<TreatNullAndUndefinedAsNullString> title;
    V8StringResource<TreatNullAsNullString> url;
    StateOptions options;
    {
        data = SerializedScriptValueFactory::instance().create(info.GetIsolate(), info[0], 0, 0, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        title = info[1];
        if (!title.prepare())
            return;
        if (!info[2]->IsUndefined()) {
            url = info[2];
            if (!url.prepare())
                return;
        } else {
            url = nullptr;
        }
        if (!isUndefinedOrNull(info[3]) && !info[3]->IsObject()) {
            exceptionState.throwTypeError("parameter 4 ('options') is not an object.");
            exceptionState.throwIfNeeded();
            return;
        }
        V8StateOptions::toImpl(info.GetIsolate(), info[3], options, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->replaceState(data, title, url, options, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void replaceStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    HistoryV8Internal::replaceStateMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace HistoryV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8HistoryAccessors[] = {
    {"length", HistoryV8Internal::lengthAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"state", HistoryV8Internal::stateAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8HistoryMethods[] = {
    {"go", HistoryV8Internal::goMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"back", HistoryV8Internal::backMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"forward", HistoryV8Internal::forwardMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"pushState", HistoryV8Internal::pushStateMethodCallback, 0, 2, V8DOMConfiguration::ExposedToAllScripts},
    {"replaceState", HistoryV8Internal::replaceStateMethodCallback, 0, 2, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8HistoryTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "History", v8::Local<v8::FunctionTemplate>(), V8History::internalFieldCount,
        0, 0,
        V8HistoryAccessors, WTF_ARRAY_LENGTH(V8HistoryAccessors),
        V8HistoryMethods, WTF_ARRAY_LENGTH(V8HistoryMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    if (RuntimeEnabledFeatures::scrollRestorationEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"options", HistoryV8Internal::optionsAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8History::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8HistoryTemplate);
}

bool V8History::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8History::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

History* V8History::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8History::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8History::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
