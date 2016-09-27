// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#if ENABLE(WEB_AUDIO)
#include "V8AudioListener.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
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
const WrapperTypeInfo V8AudioListener::wrapperTypeInfo = { gin::kEmbedderBlink, V8AudioListener::domTemplate, V8AudioListener::refObject, V8AudioListener::derefObject, V8AudioListener::trace, 0, 0, V8AudioListener::preparePrototypeObject, V8AudioListener::installConditionallyEnabledProperties, "AudioListener", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in AudioListener.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& AudioListener::s_wrapperTypeInfo = V8AudioListener::wrapperTypeInfo;

namespace AudioListenerV8Internal {

static void dopplerFactorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    AudioListener* impl = V8AudioListener::toImpl(holder);
    v8SetReturnValue(info, impl->dopplerFactor());
}

static void dopplerFactorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countDeprecationIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::AudioListenerDopplerFactor);
    AudioListenerV8Internal::dopplerFactorAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void dopplerFactorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "dopplerFactor", "AudioListener", holder, info.GetIsolate());
    AudioListener* impl = V8AudioListener::toImpl(holder);
    float cppValue = toRestrictedFloat(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setDopplerFactor(cppValue);
}

static void dopplerFactorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    UseCounter::countDeprecationIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::AudioListenerDopplerFactor);
    AudioListenerV8Internal::dopplerFactorAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void speedOfSoundAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    AudioListener* impl = V8AudioListener::toImpl(holder);
    v8SetReturnValue(info, impl->speedOfSound());
}

static void speedOfSoundAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countDeprecationIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::AudioListenerSpeedOfSound);
    AudioListenerV8Internal::speedOfSoundAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void speedOfSoundAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "speedOfSound", "AudioListener", holder, info.GetIsolate());
    AudioListener* impl = V8AudioListener::toImpl(holder);
    float cppValue = toRestrictedFloat(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setSpeedOfSound(cppValue);
}

static void speedOfSoundAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    UseCounter::countDeprecationIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::AudioListenerSpeedOfSound);
    AudioListenerV8Internal::speedOfSoundAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void setPositionMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setPosition", "AudioListener", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 3)) {
        setMinimumArityTypeError(exceptionState, 3, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    AudioListener* impl = V8AudioListener::toImpl(info.Holder());
    float x;
    float y;
    float z;
    {
        x = toRestrictedFloat(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        y = toRestrictedFloat(info.GetIsolate(), info[1], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        z = toRestrictedFloat(info.GetIsolate(), info[2], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->setPosition(x, y, z);
}

static void setPositionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    AudioListenerV8Internal::setPositionMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void setOrientationMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setOrientation", "AudioListener", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 6)) {
        setMinimumArityTypeError(exceptionState, 6, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    AudioListener* impl = V8AudioListener::toImpl(info.Holder());
    float x;
    float y;
    float z;
    float xUp;
    float yUp;
    float zUp;
    {
        x = toRestrictedFloat(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        y = toRestrictedFloat(info.GetIsolate(), info[1], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        z = toRestrictedFloat(info.GetIsolate(), info[2], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        xUp = toRestrictedFloat(info.GetIsolate(), info[3], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        yUp = toRestrictedFloat(info.GetIsolate(), info[4], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        zUp = toRestrictedFloat(info.GetIsolate(), info[5], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->setOrientation(x, y, z, xUp, yUp, zUp);
}

static void setOrientationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    AudioListenerV8Internal::setOrientationMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void setVelocityMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setVelocity", "AudioListener", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 3)) {
        setMinimumArityTypeError(exceptionState, 3, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    AudioListener* impl = V8AudioListener::toImpl(info.Holder());
    float x;
    float y;
    float z;
    {
        x = toRestrictedFloat(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        y = toRestrictedFloat(info.GetIsolate(), info[1], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        z = toRestrictedFloat(info.GetIsolate(), info[2], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->setVelocity(x, y, z);
}

static void setVelocityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countDeprecationIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::AudioListenerSetVelocity);
    AudioListenerV8Internal::setVelocityMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace AudioListenerV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8AudioListenerAccessors[] = {
    {"dopplerFactor", AudioListenerV8Internal::dopplerFactorAttributeGetterCallback, AudioListenerV8Internal::dopplerFactorAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"speedOfSound", AudioListenerV8Internal::speedOfSoundAttributeGetterCallback, AudioListenerV8Internal::speedOfSoundAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8AudioListenerMethods[] = {
    {"setPosition", AudioListenerV8Internal::setPositionMethodCallback, 0, 3, V8DOMConfiguration::ExposedToAllScripts},
    {"setOrientation", AudioListenerV8Internal::setOrientationMethodCallback, 0, 6, V8DOMConfiguration::ExposedToAllScripts},
    {"setVelocity", AudioListenerV8Internal::setVelocityMethodCallback, 0, 3, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8AudioListenerTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "AudioListener", v8::Local<v8::FunctionTemplate>(), V8AudioListener::internalFieldCount,
        0, 0,
        V8AudioListenerAccessors, WTF_ARRAY_LENGTH(V8AudioListenerAccessors),
        V8AudioListenerMethods, WTF_ARRAY_LENGTH(V8AudioListenerMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8AudioListener::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8AudioListenerTemplate);
}

bool V8AudioListener::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8AudioListener::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

AudioListener* V8AudioListener::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8AudioListener::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8AudioListener::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
#endif // ENABLE(WEB_AUDIO)
