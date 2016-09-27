// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8DOMParser.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Document.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
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
const WrapperTypeInfo V8DOMParser::wrapperTypeInfo = { gin::kEmbedderBlink, V8DOMParser::domTemplate, V8DOMParser::refObject, V8DOMParser::derefObject, V8DOMParser::trace, 0, 0, V8DOMParser::preparePrototypeObject, V8DOMParser::installConditionallyEnabledProperties, "DOMParser", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DOMParser.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& DOMParser::s_wrapperTypeInfo = V8DOMParser::wrapperTypeInfo;

namespace DOMParserV8Internal {

static void parseFromStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "parseFromString", "DOMParser", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    DOMParser* impl = V8DOMParser::toImpl(info.Holder());
    V8StringResource<> str;
    V8StringResource<> type;
    {
        str = info[0];
        if (!str.prepare())
            return;
        type = info[1];
        if (!type.prepare())
            return;
        static const char* validValues[] = {
            "text/html",
            "text/xml",
            "application/xml",
            "application/xhtml+xml",
            "image/svg+xml",
        };
        if (!isValidEnum(type, validValues, WTF_ARRAY_LENGTH(validValues), "SupportedType", exceptionState)) {
            exceptionState.throwIfNeeded();
            return;
        }
    }
    v8SetReturnValue(info, impl->parseFromString(str, type));
}

static void parseFromStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DOMParserV8Internal::parseFromStringMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Document& document = *toDocument(currentExecutionContext(info.GetIsolate()));
    RawPtr<DOMParser> impl = DOMParser::create(document);
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8DOMParser::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

} // namespace DOMParserV8Internal

static const V8DOMConfiguration::MethodConfiguration V8DOMParserMethods[] = {
    {"parseFromString", DOMParserV8Internal::parseFromStringMethodCallback, 0, 2, V8DOMConfiguration::ExposedToAllScripts},
};

void V8DOMParser::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SCOPED_SAMPLING_STATE("blink", "DOMConstructor");
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("DOMParser"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    DOMParserV8Internal::constructor(info);
}

static void installV8DOMParserTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "DOMParser", v8::Local<v8::FunctionTemplate>(), V8DOMParser::internalFieldCount,
        0, 0,
        0, 0,
        V8DOMParserMethods, WTF_ARRAY_LENGTH(V8DOMParserMethods));
    functionTemplate->SetCallHandler(V8DOMParser::constructorCallback);
    functionTemplate->SetLength(0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8DOMParser::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8DOMParserTemplate);
}

bool V8DOMParser::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8DOMParser::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DOMParser* V8DOMParser::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8DOMParser::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8DOMParser::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
