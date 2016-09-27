// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#if ENABLE(WEB_AUDIO)
#include "V8AudioBufferSourceNode.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8AbstractEventListener.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8EventListenerList.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8AudioBuffer.h"
#include "bindings/modules/v8/V8AudioParam.h"
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
const WrapperTypeInfo V8AudioBufferSourceNode::wrapperTypeInfo = { gin::kEmbedderBlink, V8AudioBufferSourceNode::domTemplate, V8AudioBufferSourceNode::refObject, V8AudioBufferSourceNode::derefObject, V8AudioBufferSourceNode::trace, 0, 0, V8AudioBufferSourceNode::preparePrototypeObject, V8AudioBufferSourceNode::installConditionallyEnabledProperties, "AudioBufferSourceNode", &V8AudioSourceNode::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in AudioBufferSourceNode.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& AudioBufferSourceNode::s_wrapperTypeInfo = V8AudioBufferSourceNode::wrapperTypeInfo;

namespace AudioBufferSourceNodeV8Internal {

static void bufferAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->buffer()), impl);
}

static void bufferAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    AudioBufferSourceNodeV8Internal::bufferAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void bufferAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "buffer", "AudioBufferSourceNode", holder, info.GetIsolate());
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toImpl(holder);
    AudioBuffer* cppValue = V8AudioBuffer::toImplWithTypeCheck(info.GetIsolate(), v8Value);
    if (!cppValue) {
        exceptionState.throwTypeError("The provided value is not of type 'AudioBuffer'.");
        exceptionState.throwIfNeeded();
        return;
    }
    impl->setBuffer(WTF::getPtr(cppValue), exceptionState);
    exceptionState.throwIfNeeded();
}

static void bufferAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    AudioBufferSourceNodeV8Internal::bufferAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void playbackRateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toImpl(holder);
    RawPtr<AudioParam> cppValue(impl->playbackRate());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "playbackRate"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void playbackRateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    AudioBufferSourceNodeV8Internal::playbackRateAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void detuneAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toImpl(holder);
    RawPtr<AudioParam> cppValue(impl->detune());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "detune"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void detuneAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    AudioBufferSourceNodeV8Internal::detuneAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void loopAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toImpl(holder);
    v8SetReturnValueBool(info, impl->loop());
}

static void loopAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    AudioBufferSourceNodeV8Internal::loopAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void loopAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "loop", "AudioBufferSourceNode", holder, info.GetIsolate());
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toImpl(holder);
    bool cppValue = toBoolean(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setLoop(cppValue);
}

static void loopAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    AudioBufferSourceNodeV8Internal::loopAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void loopStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toImpl(holder);
    v8SetReturnValue(info, impl->loopStart());
}

static void loopStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    AudioBufferSourceNodeV8Internal::loopStartAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void loopStartAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "loopStart", "AudioBufferSourceNode", holder, info.GetIsolate());
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toImpl(holder);
    double cppValue = toRestrictedDouble(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setLoopStart(cppValue);
}

static void loopStartAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    AudioBufferSourceNodeV8Internal::loopStartAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void loopEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toImpl(holder);
    v8SetReturnValue(info, impl->loopEnd());
}

static void loopEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    AudioBufferSourceNodeV8Internal::loopEndAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void loopEndAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "loopEnd", "AudioBufferSourceNode", holder, info.GetIsolate());
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toImpl(holder);
    double cppValue = toRestrictedDouble(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setLoopEnd(cppValue);
}

static void loopEndAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    AudioBufferSourceNodeV8Internal::loopEndAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onendedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toImpl(holder);
    EventListener* cppValue(impl->onended());
    v8SetReturnValue(info, cppValue ? v8::Local<v8::Value>(V8AbstractEventListener::cast(cppValue)->getListenerObject(impl->executionContext())) : v8::Local<v8::Value>(v8::Null(info.GetIsolate())));
}

static void onendedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    AudioBufferSourceNodeV8Internal::onendedAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onendedAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onended(), v8Value, V8AudioBufferSourceNode::eventListenerCacheIndex);
    impl->setOnended(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onendedAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    AudioBufferSourceNodeV8Internal::onendedAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void startMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "start", "AudioBufferSourceNode", info.Holder(), info.GetIsolate());
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toImpl(info.Holder());
    double when;
    double grainOffset;
    double grainDuration;
    {
        if (UNLIKELY(info.Length() <= 0)) {
            impl->start(exceptionState);
            if (exceptionState.hadException()) {
                exceptionState.throwIfNeeded();
                return;
            }
            return;
        }
        when = toRestrictedDouble(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        if (UNLIKELY(info.Length() <= 1)) {
            impl->start(when, exceptionState);
            if (exceptionState.hadException()) {
                exceptionState.throwIfNeeded();
                return;
            }
            return;
        }
        grainOffset = toRestrictedDouble(info.GetIsolate(), info[1], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        if (UNLIKELY(info.Length() <= 2)) {
            impl->start(when, grainOffset, exceptionState);
            if (exceptionState.hadException()) {
                exceptionState.throwIfNeeded();
                return;
            }
            return;
        }
        grainDuration = toRestrictedDouble(info.GetIsolate(), info[2], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->start(when, grainOffset, grainDuration, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void startMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    AudioBufferSourceNodeV8Internal::startMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void stopMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "stop", "AudioBufferSourceNode", info.Holder(), info.GetIsolate());
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toImpl(info.Holder());
    double when;
    {
        if (UNLIKELY(info.Length() <= 0)) {
            impl->stop(exceptionState);
            if (exceptionState.hadException()) {
                exceptionState.throwIfNeeded();
                return;
            }
            return;
        }
        when = toRestrictedDouble(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->stop(when, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void stopMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    AudioBufferSourceNodeV8Internal::stopMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace AudioBufferSourceNodeV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8AudioBufferSourceNodeAccessors[] = {
    {"buffer", AudioBufferSourceNodeV8Internal::bufferAttributeGetterCallback, AudioBufferSourceNodeV8Internal::bufferAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"playbackRate", AudioBufferSourceNodeV8Internal::playbackRateAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"detune", AudioBufferSourceNodeV8Internal::detuneAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"loop", AudioBufferSourceNodeV8Internal::loopAttributeGetterCallback, AudioBufferSourceNodeV8Internal::loopAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"loopStart", AudioBufferSourceNodeV8Internal::loopStartAttributeGetterCallback, AudioBufferSourceNodeV8Internal::loopStartAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"loopEnd", AudioBufferSourceNodeV8Internal::loopEndAttributeGetterCallback, AudioBufferSourceNodeV8Internal::loopEndAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onended", AudioBufferSourceNodeV8Internal::onendedAttributeGetterCallback, AudioBufferSourceNodeV8Internal::onendedAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8AudioBufferSourceNodeMethods[] = {
    {"start", AudioBufferSourceNodeV8Internal::startMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"stop", AudioBufferSourceNodeV8Internal::stopMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8AudioBufferSourceNodeTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "AudioBufferSourceNode", V8AudioSourceNode::domTemplate(isolate), V8AudioBufferSourceNode::internalFieldCount,
        0, 0,
        V8AudioBufferSourceNodeAccessors, WTF_ARRAY_LENGTH(V8AudioBufferSourceNodeAccessors),
        V8AudioBufferSourceNodeMethods, WTF_ARRAY_LENGTH(V8AudioBufferSourceNodeMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8AudioBufferSourceNode::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8AudioBufferSourceNodeTemplate);
}

bool V8AudioBufferSourceNode::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8AudioBufferSourceNode::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

AudioBufferSourceNode* V8AudioBufferSourceNode::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8AudioBufferSourceNode::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8AudioBufferSourceNode::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
#endif // ENABLE(WEB_AUDIO)
