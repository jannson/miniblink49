// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8Request.h"

#include "bindings/core/v8/Dictionary.h"
#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/UnionTypesModules.h"
#include "bindings/modules/v8/V8Headers.h"
#include "bindings/modules/v8/V8Request.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
#include "core/frame/UseCounter.h"
#include "core/inspector/ConsoleMessage.h"
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
const WrapperTypeInfo V8Request::wrapperTypeInfo = { gin::kEmbedderBlink, V8Request::domTemplate, V8Request::refObject, V8Request::derefObject, V8Request::trace, V8Request::toActiveDOMObject, 0, V8Request::preparePrototypeObject, V8Request::installConditionallyEnabledProperties, "Request", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Request.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& Request::s_wrapperTypeInfo = V8Request::wrapperTypeInfo;

namespace RequestV8Internal {

static void methodAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Request* impl = V8Request::toImpl(holder);
    v8SetReturnValueString(info, impl->method(), info.GetIsolate());
}

static void methodAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RequestV8Internal::methodAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void urlAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Request* impl = V8Request::toImpl(holder);
    v8SetReturnValueString(info, impl->url(), info.GetIsolate());
}

static void urlAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RequestV8Internal::urlAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void headersAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Request* impl = V8Request::toImpl(holder);
    RawPtr<Headers> cppValue(impl->headers());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "headers"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void headersAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RequestV8Internal::headersAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void contextAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Request* impl = V8Request::toImpl(holder);
    v8SetReturnValueString(info, impl->context(), info.GetIsolate());
}

static void contextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countDeprecationIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::FetchAPIRequestContext);
    RequestV8Internal::contextAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void referrerAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Request* impl = V8Request::toImpl(holder);
    v8SetReturnValueString(info, impl->referrer(), info.GetIsolate());
}

static void referrerAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RequestV8Internal::referrerAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void modeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Request* impl = V8Request::toImpl(holder);
    v8SetReturnValueString(info, impl->mode(), info.GetIsolate());
}

static void modeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RequestV8Internal::modeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void credentialsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Request* impl = V8Request::toImpl(holder);
    v8SetReturnValueString(info, impl->credentials(), info.GetIsolate());
}

static void credentialsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RequestV8Internal::credentialsAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void bodyUsedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Request* impl = V8Request::toImpl(holder);
    v8SetReturnValueBool(info, impl->bodyUsed());
}

static void bodyUsedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RequestV8Internal::bodyUsedAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void cloneMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "clone", "Request", info.Holder(), info.GetIsolate());
    Request* impl = V8Request::toImpl(info.Holder());
    RawPtr<Request> result = impl->clone(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void cloneMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RequestV8Internal::cloneMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void arrayBufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Request* impl = V8Request::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->arrayBuffer(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void arrayBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RequestV8Internal::arrayBufferMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void blobMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Request* impl = V8Request::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->blob(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void blobMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RequestV8Internal::blobMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void jsonMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Request* impl = V8Request::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->json(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void jsonMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RequestV8Internal::jsonMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void textMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Request* impl = V8Request::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->text(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void textMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RequestV8Internal::textMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "Request", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    RequestOrUSVString input;
    Dictionary requestInitDict;
    {
        V8RequestOrUSVString::toImpl(info.GetIsolate(), info[0], input, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        if (!isUndefinedOrNull(info[1]) && !info[1]->IsObject()) {
            exceptionState.throwTypeError("parameter 2 ('requestInitDict') is not an object.");
            exceptionState.throwIfNeeded();
            return;
        }
        requestInitDict = Dictionary(info[1], info.GetIsolate(), exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RawPtr<Request> impl = Request::create(scriptState, input, requestInitDict, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8Request::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

} // namespace RequestV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8RequestAccessors[] = {
    {"method", RequestV8Internal::methodAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"url", RequestV8Internal::urlAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"headers", RequestV8Internal::headersAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"context", RequestV8Internal::contextAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"referrer", RequestV8Internal::referrerAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"mode", RequestV8Internal::modeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"credentials", RequestV8Internal::credentialsAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"bodyUsed", RequestV8Internal::bodyUsedAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8RequestMethods[] = {
    {"clone", RequestV8Internal::cloneMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"arrayBuffer", RequestV8Internal::arrayBufferMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"blob", RequestV8Internal::blobMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"json", RequestV8Internal::jsonMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"text", RequestV8Internal::textMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

void V8Request::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SCOPED_SAMPLING_STATE("blink", "DOMConstructor");
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("Request"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    RequestV8Internal::constructor(info);
}

static void installV8RequestTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "Request", v8::Local<v8::FunctionTemplate>(), V8Request::internalFieldCount,
        0, 0,
        V8RequestAccessors, WTF_ARRAY_LENGTH(V8RequestAccessors),
        V8RequestMethods, WTF_ARRAY_LENGTH(V8RequestMethods));
    functionTemplate->SetCallHandler(V8Request::constructorCallback);
    functionTemplate->SetLength(1);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8Request::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8RequestTemplate);
}

bool V8Request::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Request::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Request* V8Request::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

ActiveDOMObject* V8Request::toActiveDOMObject(v8::Local<v8::Object> wrapper)
{
    return toImpl(wrapper);
}

void V8Request::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8Request::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
