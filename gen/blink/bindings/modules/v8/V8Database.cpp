// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8Database.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8VoidCallback.h"
#include "bindings/modules/v8/V8SQLTransactionCallback.h"
#include "bindings/modules/v8/V8SQLTransactionErrorCallback.h"
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
const WrapperTypeInfo V8Database::wrapperTypeInfo = { gin::kEmbedderBlink, V8Database::domTemplate, V8Database::refObject, V8Database::derefObject, V8Database::trace, 0, 0, V8Database::preparePrototypeObject, V8Database::installConditionallyEnabledProperties, "Database", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Database.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& Database::s_wrapperTypeInfo = V8Database::wrapperTypeInfo;

namespace DatabaseV8Internal {

static void versionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Database* impl = V8Database::toImpl(holder);
    v8SetReturnValueString(info, impl->version(), info.GetIsolate());
}

static void versionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DatabaseV8Internal::versionAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void changeVersionMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 2)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "changeVersion", "Database", 2, info.Length()), info.GetIsolate());
        return;
    }
    Database* impl = V8Database::toImpl(info.Holder());
    V8StringResource<> oldVersion;
    V8StringResource<> newVersion;
    SQLTransactionCallback* callback;
    SQLTransactionErrorCallback* errorCallback;
    VoidCallback* successCallback;
    {
        oldVersion = info[0];
        if (!oldVersion.prepare())
            return;
        newVersion = info[1];
        if (!newVersion.prepare())
            return;
        if (!isUndefinedOrNull(info[2])) {
            if (!info[2]->IsFunction()) {
                V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("changeVersion", "Database", "The callback provided as parameter 3 is not a function."));
                return;
            }
            callback = V8SQLTransactionCallback::create(v8::Local<v8::Function>::Cast(info[2]), ScriptState::current(info.GetIsolate()));
        } else {
            callback = nullptr;
        }
        if (!isUndefinedOrNull(info[3])) {
            if (!info[3]->IsFunction()) {
                V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("changeVersion", "Database", "The callback provided as parameter 4 is not a function."));
                return;
            }
            errorCallback = V8SQLTransactionErrorCallback::create(v8::Local<v8::Function>::Cast(info[3]), ScriptState::current(info.GetIsolate()));
        } else {
            errorCallback = nullptr;
        }
        if (!isUndefinedOrNull(info[4])) {
            if (!info[4]->IsFunction()) {
                V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("changeVersion", "Database", "The callback provided as parameter 5 is not a function."));
                return;
            }
            successCallback = V8VoidCallback::create(v8::Local<v8::Function>::Cast(info[4]), ScriptState::current(info.GetIsolate()));
        } else {
            successCallback = nullptr;
        }
    }
    impl->changeVersion(oldVersion, newVersion, callback, errorCallback, successCallback);
}

static void changeVersionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DatabaseV8Internal::changeVersionMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void transactionMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "transaction", "Database", 1, info.Length()), info.GetIsolate());
        return;
    }
    Database* impl = V8Database::toImpl(info.Holder());
    SQLTransactionCallback* callback;
    SQLTransactionErrorCallback* errorCallback;
    VoidCallback* successCallback;
    {
        if (info.Length() <= 0 || !info[0]->IsFunction()) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("transaction", "Database", "The callback provided as parameter 1 is not a function."));
            return;
        }
        callback = V8SQLTransactionCallback::create(v8::Local<v8::Function>::Cast(info[0]), ScriptState::current(info.GetIsolate()));
        if (!isUndefinedOrNull(info[1])) {
            if (!info[1]->IsFunction()) {
                V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("transaction", "Database", "The callback provided as parameter 2 is not a function."));
                return;
            }
            errorCallback = V8SQLTransactionErrorCallback::create(v8::Local<v8::Function>::Cast(info[1]), ScriptState::current(info.GetIsolate()));
        } else {
            errorCallback = nullptr;
        }
        if (!isUndefinedOrNull(info[2])) {
            if (!info[2]->IsFunction()) {
                V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("transaction", "Database", "The callback provided as parameter 3 is not a function."));
                return;
            }
            successCallback = V8VoidCallback::create(v8::Local<v8::Function>::Cast(info[2]), ScriptState::current(info.GetIsolate()));
        } else {
            successCallback = nullptr;
        }
    }
    impl->transaction(callback, errorCallback, successCallback);
}

static void transactionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DatabaseV8Internal::transactionMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void readTransactionMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "readTransaction", "Database", 1, info.Length()), info.GetIsolate());
        return;
    }
    Database* impl = V8Database::toImpl(info.Holder());
    SQLTransactionCallback* callback;
    SQLTransactionErrorCallback* errorCallback;
    VoidCallback* successCallback;
    {
        if (info.Length() <= 0 || !info[0]->IsFunction()) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("readTransaction", "Database", "The callback provided as parameter 1 is not a function."));
            return;
        }
        callback = V8SQLTransactionCallback::create(v8::Local<v8::Function>::Cast(info[0]), ScriptState::current(info.GetIsolate()));
        if (!isUndefinedOrNull(info[1])) {
            if (!info[1]->IsFunction()) {
                V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("readTransaction", "Database", "The callback provided as parameter 2 is not a function."));
                return;
            }
            errorCallback = V8SQLTransactionErrorCallback::create(v8::Local<v8::Function>::Cast(info[1]), ScriptState::current(info.GetIsolate()));
        } else {
            errorCallback = nullptr;
        }
        if (!isUndefinedOrNull(info[2])) {
            if (!info[2]->IsFunction()) {
                V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("readTransaction", "Database", "The callback provided as parameter 3 is not a function."));
                return;
            }
            successCallback = V8VoidCallback::create(v8::Local<v8::Function>::Cast(info[2]), ScriptState::current(info.GetIsolate()));
        } else {
            successCallback = nullptr;
        }
    }
    impl->readTransaction(callback, errorCallback, successCallback);
}

static void readTransactionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DatabaseV8Internal::readTransactionMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace DatabaseV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8DatabaseAccessors[] = {
    {"version", DatabaseV8Internal::versionAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8DatabaseMethods[] = {
    {"changeVersion", DatabaseV8Internal::changeVersionMethodCallback, 0, 2, V8DOMConfiguration::ExposedToAllScripts},
    {"transaction", DatabaseV8Internal::transactionMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"readTransaction", DatabaseV8Internal::readTransactionMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8DatabaseTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "Database", v8::Local<v8::FunctionTemplate>(), V8Database::internalFieldCount,
        0, 0,
        V8DatabaseAccessors, WTF_ARRAY_LENGTH(V8DatabaseAccessors),
        V8DatabaseMethods, WTF_ARRAY_LENGTH(V8DatabaseMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8Database::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8DatabaseTemplate);
}

bool V8Database::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Database::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Database* V8Database::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8Database::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8Database::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
