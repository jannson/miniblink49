// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8TestInterfaceConstructor.h"

#include "bindings/core/v8/Dictionary.h"
#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/UnionTypesCore.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8TestDictionary.h"
#include "bindings/core/v8/V8TestInterfaceEmpty.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
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
const WrapperTypeInfo V8TestInterfaceConstructor::wrapperTypeInfo = { gin::kEmbedderBlink, V8TestInterfaceConstructor::domTemplate, V8TestInterfaceConstructor::refObject, V8TestInterfaceConstructor::derefObject, V8TestInterfaceConstructor::trace, 0, 0, V8TestInterfaceConstructor::preparePrototypeObject, V8TestInterfaceConstructor::installConditionallyEnabledProperties, "TestInterfaceConstructor", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::RefCountedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in TestInterfaceConstructor.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& TestInterfaceConstructor::s_wrapperTypeInfo = V8TestInterfaceConstructor::wrapperTypeInfo;

namespace TestInterfaceConstructorV8Internal {

static void constructor1(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "TestInterfaceConstructor", info.Holder(), info.GetIsolate());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    Document& document = *toDocument(currentExecutionContext(info.GetIsolate()));
    RefPtr<TestInterfaceConstructor> impl = TestInterfaceConstructor::create(scriptState, executionContext, document, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8TestInterfaceConstructor::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

static void constructor2(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "TestInterfaceConstructor", info.Holder(), info.GetIsolate());
    double doubleArg;
    V8StringResource<> stringArg;
    TestInterfaceEmpty* testInterfaceEmptyArg;
    Dictionary dictionaryArg;
    Vector<String> sequenceStringArg;
    Vector<Dictionary> sequenceDictionaryArg;
    HeapVector<LongOrTestDictionary> sequenceLongOrTestDictionaryArg;
    Dictionary optionalDictionaryArg;
    TestInterfaceEmpty* optionalTestInterfaceEmptyArg;
    {
        doubleArg = toRestrictedDouble(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        stringArg = info[1];
        if (!stringArg.prepare())
            return;
        testInterfaceEmptyArg = V8TestInterfaceEmpty::toImplWithTypeCheck(info.GetIsolate(), info[2]);
        if (!isUndefinedOrNull(info[3]) && !info[3]->IsObject()) {
            exceptionState.throwTypeError("parameter 4 ('dictionaryArg') is not an object.");
            exceptionState.throwIfNeeded();
            return;
        }
        dictionaryArg = Dictionary(info[3], info.GetIsolate(), exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        sequenceStringArg = toImplArray<Vector<String>>(info[4], 5, info.GetIsolate(), exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        sequenceDictionaryArg = toImplArray<Vector<Dictionary>>(info[5], 6, info.GetIsolate(), exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        sequenceLongOrTestDictionaryArg = toImplArray<HeapVector<LongOrTestDictionary>>(info[6], 7, info.GetIsolate(), exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        if (!isUndefinedOrNull(info[7]) && !info[7]->IsObject()) {
            exceptionState.throwTypeError("parameter 8 ('optionalDictionaryArg') is not an object.");
            exceptionState.throwIfNeeded();
            return;
        }
        optionalDictionaryArg = Dictionary(info[7], info.GetIsolate(), exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        optionalTestInterfaceEmptyArg = V8TestInterfaceEmpty::toImplWithTypeCheck(info.GetIsolate(), info[8]);
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    Document& document = *toDocument(currentExecutionContext(info.GetIsolate()));
    RefPtr<TestInterfaceConstructor> impl = TestInterfaceConstructor::create(scriptState, executionContext, document, doubleArg, stringArg, testInterfaceEmptyArg, dictionaryArg, sequenceStringArg, sequenceDictionaryArg, sequenceLongOrTestDictionaryArg, optionalDictionaryArg, optionalTestInterfaceEmptyArg, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8TestInterfaceConstructor::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

static void constructor3(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "TestInterfaceConstructor", info.Holder(), info.GetIsolate());
    V8StringResource<> arg;
    V8StringResource<> optArg;
    {
        arg = info[0];
        if (!arg.prepare())
            return;
        if (UNLIKELY(info.Length() <= 1)) {
            ScriptState* scriptState = ScriptState::current(info.GetIsolate());
            ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
            Document& document = *toDocument(currentExecutionContext(info.GetIsolate()));
            RefPtr<TestInterfaceConstructor> impl = TestInterfaceConstructor::create(scriptState, executionContext, document, arg, exceptionState);
            if (exceptionState.hadException()) {
                exceptionState.throwIfNeeded();
                return;
            }
            v8::Local<v8::Object> wrapper = info.Holder();
            wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8TestInterfaceConstructor::wrapperTypeInfo, wrapper);
            v8SetReturnValue(info, wrapper);
            return;
        }
        optArg = info[1];
        if (!optArg.prepare())
            return;
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    Document& document = *toDocument(currentExecutionContext(info.GetIsolate()));
    RefPtr<TestInterfaceConstructor> impl = TestInterfaceConstructor::create(scriptState, executionContext, document, arg, optArg, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8TestInterfaceConstructor::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

static void constructor4(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "TestInterfaceConstructor", info.Holder(), info.GetIsolate());
    V8StringResource<> arg;
    V8StringResource<> arg2;
    V8StringResource<> arg3;
    {
        arg = info[0];
        if (!arg.prepare())
            return;
        arg2 = info[1];
        if (!arg2.prepare())
            return;
        arg3 = info[2];
        if (!arg3.prepare())
            return;
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    Document& document = *toDocument(currentExecutionContext(info.GetIsolate()));
    RefPtr<TestInterfaceConstructor> impl = TestInterfaceConstructor::create(scriptState, executionContext, document, arg, arg2, arg3, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8TestInterfaceConstructor::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "TestInterfaceConstructor", info.Holder(), info.GetIsolate());
    switch (std::min(9, info.Length())) {
    case 0:
        if (true) {
            TestInterfaceConstructorV8Internal::constructor1(info);
            return;
        }
        break;
    case 1:
        if (true) {
            TestInterfaceConstructorV8Internal::constructor3(info);
            return;
        }
        break;
    case 2:
        if (true) {
            TestInterfaceConstructorV8Internal::constructor3(info);
            return;
        }
        break;
    case 3:
        if (true) {
            TestInterfaceConstructorV8Internal::constructor4(info);
            return;
        }
        break;
    case 7:
        if (true) {
            TestInterfaceConstructorV8Internal::constructor2(info);
            return;
        }
        break;
    case 8:
        if (true) {
            TestInterfaceConstructorV8Internal::constructor2(info);
            return;
        }
        break;
    case 9:
        if (true) {
            TestInterfaceConstructorV8Internal::constructor2(info);
            return;
        }
        break;
    default:
        if (info.Length() >= 0) {
            throwArityTypeError(exceptionState, "[0, 1, 2, 3, 7, 8, 9]", info.Length());
            return;
        }
        exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(0, info.Length()));
        exceptionState.throwIfNeeded();
        return;
    }
    exceptionState.throwTypeError("No matching constructor signature.");
    exceptionState.throwIfNeeded();
}

} // namespace TestInterfaceConstructorV8Internal

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8TestInterfaceConstructorConstructor::wrapperTypeInfo = { gin::kEmbedderBlink, V8TestInterfaceConstructorConstructor::domTemplate, V8TestInterfaceConstructor::refObject, V8TestInterfaceConstructor::derefObject, V8TestInterfaceConstructor::trace, 0, 0, V8TestInterfaceConstructor::preparePrototypeObject, V8TestInterfaceConstructor::installConditionallyEnabledProperties, "TestInterfaceConstructor", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::RefCountedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

static void V8TestInterfaceConstructorConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("Audio"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "TestInterfaceConstructor", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    V8StringResource<> arg;
    V8StringResource<> optArg;
    {
        arg = info[0];
        if (!arg.prepare())
            return;
        if (UNLIKELY(info.Length() <= 1)) {
            ScriptState* scriptState = ScriptState::current(info.GetIsolate());
            ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
            Document& document = *toDocument(currentExecutionContext(info.GetIsolate()));
            RefPtr<TestInterfaceConstructor> impl = TestInterfaceConstructor::createForJSConstructor(scriptState, executionContext, document, arg, exceptionState);
            if (exceptionState.hadException()) {
                exceptionState.throwIfNeeded();
                return;
            }
            v8::Local<v8::Object> wrapper = info.Holder();
            wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8TestInterfaceConstructorConstructor::wrapperTypeInfo, wrapper);
            v8SetReturnValue(info, wrapper);
            return;
        }
        optArg = info[1];
        if (!optArg.prepare())
            return;
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    Document& document = *toDocument(currentExecutionContext(info.GetIsolate()));
    RefPtr<TestInterfaceConstructor> impl = TestInterfaceConstructor::createForJSConstructor(scriptState, executionContext, document, arg, optArg, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8TestInterfaceConstructorConstructor::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

v8::Local<v8::FunctionTemplate> V8TestInterfaceConstructorConstructor::domTemplate(v8::Isolate* isolate)
{
    static int domTemplateKey; // This address is used for a key to look up the dom template.
    V8PerIsolateData* data = V8PerIsolateData::from(isolate);
    v8::Local<v8::FunctionTemplate> result = data->existingDOMTemplate(&domTemplateKey);
    if (!result.IsEmpty())
        return result;

    TRACE_EVENT_SCOPED_SAMPLING_STATE("blink", "BuildDOMTemplate");
    result = v8::FunctionTemplate::New(isolate, V8TestInterfaceConstructorConstructorCallback);
    v8::Local<v8::ObjectTemplate> instanceTemplate = result->InstanceTemplate();
    instanceTemplate->SetInternalFieldCount(V8TestInterfaceConstructor::internalFieldCount);
    result->SetClassName(v8AtomicString(isolate, "TestInterfaceConstructor"));
    result->Inherit(V8TestInterfaceConstructor::domTemplate(isolate));
    data->setDOMTemplate(&domTemplateKey, result);
    return result;
}

void V8TestInterfaceConstructor::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SCOPED_SAMPLING_STATE("blink", "DOMConstructor");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::TestFeature);
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("TestInterfaceConstructor"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    TestInterfaceConstructorV8Internal::constructor(info);
}

static void installV8TestInterfaceConstructorTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "TestInterfaceConstructor", v8::Local<v8::FunctionTemplate>(), V8TestInterfaceConstructor::internalFieldCount,
        0, 0,
        0, 0,
        0, 0);
    functionTemplate->SetCallHandler(V8TestInterfaceConstructor::constructorCallback);
    functionTemplate->SetLength(0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8TestInterfaceConstructor::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8TestInterfaceConstructorTemplate);
}

bool V8TestInterfaceConstructor::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8TestInterfaceConstructor::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

TestInterfaceConstructor* V8TestInterfaceConstructor::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8TestInterfaceConstructor::refObject(ScriptWrappable* scriptWrappable)
{
    scriptWrappable->toImpl<TestInterfaceConstructor>()->ref();
}

void V8TestInterfaceConstructor::derefObject(ScriptWrappable* scriptWrappable)
{
    scriptWrappable->toImpl<TestInterfaceConstructor>()->deref();
}

} // namespace blink
