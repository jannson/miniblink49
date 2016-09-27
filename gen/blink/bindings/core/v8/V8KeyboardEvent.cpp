// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8KeyboardEvent.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8KeyboardEventInit.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8Window.h"
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
const WrapperTypeInfo V8KeyboardEvent::wrapperTypeInfo = { gin::kEmbedderBlink, V8KeyboardEvent::domTemplate, V8KeyboardEvent::refObject, V8KeyboardEvent::derefObject, V8KeyboardEvent::trace, 0, 0, V8KeyboardEvent::preparePrototypeObject, V8KeyboardEvent::installConditionallyEnabledProperties, "KeyboardEvent", &V8UIEvent::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in KeyboardEvent.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& KeyboardEvent::s_wrapperTypeInfo = V8KeyboardEvent::wrapperTypeInfo;

namespace KeyboardEventV8Internal {

static void keyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    KeyboardEvent* impl = V8KeyboardEvent::toImpl(holder);
    v8SetReturnValueString(info, impl->key(), info.GetIsolate());
}

static void keyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    KeyboardEventV8Internal::keyAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void codeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    KeyboardEvent* impl = V8KeyboardEvent::toImpl(holder);
    v8SetReturnValueString(info, impl->code(), info.GetIsolate());
}

static void codeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    KeyboardEventV8Internal::codeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void locationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    KeyboardEvent* impl = V8KeyboardEvent::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->location());
}

static void locationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    KeyboardEventV8Internal::locationAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void ctrlKeyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    KeyboardEvent* impl = V8KeyboardEvent::toImpl(holder);
    v8SetReturnValueBool(info, impl->ctrlKey());
}

static void ctrlKeyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    KeyboardEventV8Internal::ctrlKeyAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void shiftKeyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    KeyboardEvent* impl = V8KeyboardEvent::toImpl(holder);
    v8SetReturnValueBool(info, impl->shiftKey());
}

static void shiftKeyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    KeyboardEventV8Internal::shiftKeyAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void altKeyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    KeyboardEvent* impl = V8KeyboardEvent::toImpl(holder);
    v8SetReturnValueBool(info, impl->altKey());
}

static void altKeyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    KeyboardEventV8Internal::altKeyAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void metaKeyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    KeyboardEvent* impl = V8KeyboardEvent::toImpl(holder);
    v8SetReturnValueBool(info, impl->metaKey());
}

static void metaKeyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    KeyboardEventV8Internal::metaKeyAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void repeatAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    KeyboardEvent* impl = V8KeyboardEvent::toImpl(holder);
    v8SetReturnValueBool(info, impl->repeat());
}

static void repeatAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    KeyboardEventV8Internal::repeatAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void charCodeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    KeyboardEvent* impl = V8KeyboardEvent::toImpl(holder);
    v8SetReturnValueInt(info, impl->charCode());
}

static void charCodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    KeyboardEventV8Internal::charCodeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void keyCodeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    KeyboardEvent* impl = V8KeyboardEvent::toImpl(holder);
    v8SetReturnValueInt(info, impl->keyCode());
}

static void keyCodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    KeyboardEventV8Internal::keyCodeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void whichAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    KeyboardEvent* impl = V8KeyboardEvent::toImpl(holder);
    v8SetReturnValueInt(info, impl->which());
}

static void whichAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    KeyboardEventV8Internal::whichAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void keyIdentifierAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    KeyboardEvent* impl = V8KeyboardEvent::toImpl(holder);
    v8SetReturnValueString(info, impl->keyIdentifier(), info.GetIsolate());
}

static void keyIdentifierAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::V8KeyboardEvent_KeyIdentifier_AttributeGetter);
    KeyboardEventV8Internal::keyIdentifierAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void keyLocationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    KeyboardEvent* impl = V8KeyboardEvent::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->location());
}

static void keyLocationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countDeprecationIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::KeyboardEventKeyLocation);
    KeyboardEventV8Internal::keyLocationAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getModifierStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "getModifierState", "KeyboardEvent", 1, info.Length()), info.GetIsolate());
        return;
    }
    KeyboardEvent* impl = V8KeyboardEvent::toImpl(info.Holder());
    V8StringResource<> keyArg;
    {
        keyArg = info[0];
        if (!keyArg.prepare())
            return;
    }
    v8SetReturnValueBool(info, impl->getModifierState(keyArg));
}

static void getModifierStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    KeyboardEventV8Internal::getModifierStateMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void initKeyboardEventMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "initKeyboardEvent", "KeyboardEvent", info.Holder(), info.GetIsolate());
    KeyboardEvent* impl = V8KeyboardEvent::toImpl(info.Holder());
    V8StringResource<> type;
    bool bubbles;
    bool cancelable;
    DOMWindow* view;
    V8StringResource<> keyIdentifier;
    unsigned location;
    bool ctrlKey;
    bool altKey;
    bool shiftKey;
    bool metaKey;
    {
        type = info[0];
        if (!type.prepare())
            return;
        bubbles = toBoolean(info.GetIsolate(), info[1], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        cancelable = toBoolean(info.GetIsolate(), info[2], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        view = toDOMWindow(info.GetIsolate(), info[3]);
        keyIdentifier = info[4];
        if (!keyIdentifier.prepare())
            return;
        location = toUInt32(info.GetIsolate(), info[5], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        ctrlKey = toBoolean(info.GetIsolate(), info[6], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        altKey = toBoolean(info.GetIsolate(), info[7], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        shiftKey = toBoolean(info.GetIsolate(), info[8], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        metaKey = toBoolean(info.GetIsolate(), info[9], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    impl->initKeyboardEvent(scriptState, type, bubbles, cancelable, view, keyIdentifier, location, ctrlKey, altKey, shiftKey, metaKey);
}

static void initKeyboardEventMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::V8KeyboardEvent_InitKeyboardEvent_Method);
    KeyboardEventV8Internal::initKeyboardEventMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "KeyboardEvent", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    V8StringResource<> type;
    KeyboardEventInit eventInitDict;
    {
        type = info[0];
        if (!type.prepare())
            return;
        if (!isUndefinedOrNull(info[1]) && !info[1]->IsObject()) {
            exceptionState.throwTypeError("parameter 2 ('eventInitDict') is not an object.");
            exceptionState.throwIfNeeded();
            return;
        }
        V8KeyboardEventInit::toImpl(info.GetIsolate(), info[1], eventInitDict, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RefPtrWillBeRawPtr<KeyboardEvent> impl = KeyboardEvent::create(scriptState, type, eventInitDict);
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8KeyboardEvent::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

} // namespace KeyboardEventV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8KeyboardEventAccessors[] = {
    {"location", KeyboardEventV8Internal::locationAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"ctrlKey", KeyboardEventV8Internal::ctrlKeyAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"shiftKey", KeyboardEventV8Internal::shiftKeyAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"altKey", KeyboardEventV8Internal::altKeyAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"metaKey", KeyboardEventV8Internal::metaKeyAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"repeat", KeyboardEventV8Internal::repeatAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"charCode", KeyboardEventV8Internal::charCodeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"keyCode", KeyboardEventV8Internal::keyCodeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"which", KeyboardEventV8Internal::whichAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"keyIdentifier", KeyboardEventV8Internal::keyIdentifierAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"keyLocation", KeyboardEventV8Internal::keyLocationAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8KeyboardEventMethods[] = {
    {"getModifierState", KeyboardEventV8Internal::getModifierStateMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"initKeyboardEvent", KeyboardEventV8Internal::initKeyboardEventMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

void V8KeyboardEvent::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SCOPED_SAMPLING_STATE("blink", "DOMConstructor");
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("KeyboardEvent"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    KeyboardEventV8Internal::constructor(info);
}

static void installV8KeyboardEventTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "KeyboardEvent", V8UIEvent::domTemplate(isolate), V8KeyboardEvent::internalFieldCount,
        0, 0,
        V8KeyboardEventAccessors, WTF_ARRAY_LENGTH(V8KeyboardEventAccessors),
        V8KeyboardEventMethods, WTF_ARRAY_LENGTH(V8KeyboardEventMethods));
    functionTemplate->SetCallHandler(V8KeyboardEvent::constructorCallback);
    functionTemplate->SetLength(1);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    if (RuntimeEnabledFeatures::keyboardEventKeyEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"key", KeyboardEventV8Internal::keyAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::keyboardEventCodeEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"code", KeyboardEventV8Internal::codeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    static const V8DOMConfiguration::ConstantConfiguration V8KeyboardEventConstants[] = {
        {"DOM_KEY_LOCATION_STANDARD", 0x00, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
        {"DOM_KEY_LOCATION_LEFT", 0x01, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
        {"DOM_KEY_LOCATION_RIGHT", 0x02, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
        {"DOM_KEY_LOCATION_NUMPAD", 0x03, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
    };
    V8DOMConfiguration::installConstants(isolate, functionTemplate, prototypeTemplate, V8KeyboardEventConstants, WTF_ARRAY_LENGTH(V8KeyboardEventConstants));
    static_assert(0x00 == KeyboardEvent::DOM_KEY_LOCATION_STANDARD, "the value of KeyboardEvent_DOM_KEY_LOCATION_STANDARD does not match with implementation");
    static_assert(0x01 == KeyboardEvent::DOM_KEY_LOCATION_LEFT, "the value of KeyboardEvent_DOM_KEY_LOCATION_LEFT does not match with implementation");
    static_assert(0x02 == KeyboardEvent::DOM_KEY_LOCATION_RIGHT, "the value of KeyboardEvent_DOM_KEY_LOCATION_RIGHT does not match with implementation");
    static_assert(0x03 == KeyboardEvent::DOM_KEY_LOCATION_NUMPAD, "the value of KeyboardEvent_DOM_KEY_LOCATION_NUMPAD does not match with implementation");

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8KeyboardEvent::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8KeyboardEventTemplate);
}

bool V8KeyboardEvent::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8KeyboardEvent::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

KeyboardEvent* V8KeyboardEvent::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8KeyboardEvent::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<KeyboardEvent>()->ref();
#endif
}

void V8KeyboardEvent::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<KeyboardEvent>()->deref();
#endif
}

} // namespace blink
