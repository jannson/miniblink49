// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8RTCDataChannel.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8AbstractEventListener.h"
#include "bindings/core/v8/V8ArrayBuffer.h"
#include "bindings/core/v8/V8ArrayBufferView.h"
#include "bindings/core/v8/V8Blob.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8EventListenerList.h"
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
const WrapperTypeInfo V8RTCDataChannel::wrapperTypeInfo = { gin::kEmbedderBlink, V8RTCDataChannel::domTemplate, V8RTCDataChannel::refObject, V8RTCDataChannel::derefObject, V8RTCDataChannel::trace, 0, 0, V8RTCDataChannel::preparePrototypeObject, V8RTCDataChannel::installConditionallyEnabledProperties, "RTCDataChannel", &V8EventTarget::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in RTCDataChannel.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& RTCDataChannel::s_wrapperTypeInfo = V8RTCDataChannel::wrapperTypeInfo;

namespace RTCDataChannelV8Internal {

static void labelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    RTCDataChannel* impl = V8RTCDataChannel::toImpl(holder);
    v8SetReturnValueString(info, impl->label(), info.GetIsolate());
}

static void labelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RTCDataChannelV8Internal::labelAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void reliableAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    RTCDataChannel* impl = V8RTCDataChannel::toImpl(holder);
    v8SetReturnValueBool(info, impl->reliable());
}

static void reliableAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RTCDataChannelV8Internal::reliableAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void orderedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    RTCDataChannel* impl = V8RTCDataChannel::toImpl(holder);
    v8SetReturnValueBool(info, impl->ordered());
}

static void orderedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RTCDataChannelV8Internal::orderedAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void maxRetransmitTimeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    RTCDataChannel* impl = V8RTCDataChannel::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->maxRetransmitTime());
}

static void maxRetransmitTimeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RTCDataChannelV8Internal::maxRetransmitTimeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void maxRetransmitsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    RTCDataChannel* impl = V8RTCDataChannel::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->maxRetransmits());
}

static void maxRetransmitsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RTCDataChannelV8Internal::maxRetransmitsAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void protocolAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    RTCDataChannel* impl = V8RTCDataChannel::toImpl(holder);
    v8SetReturnValueString(info, impl->protocol(), info.GetIsolate());
}

static void protocolAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RTCDataChannelV8Internal::protocolAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void negotiatedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    RTCDataChannel* impl = V8RTCDataChannel::toImpl(holder);
    v8SetReturnValueBool(info, impl->negotiated());
}

static void negotiatedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RTCDataChannelV8Internal::negotiatedAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void idAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    RTCDataChannel* impl = V8RTCDataChannel::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->id());
}

static void idAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RTCDataChannelV8Internal::idAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void readyStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    RTCDataChannel* impl = V8RTCDataChannel::toImpl(holder);
    v8SetReturnValueString(info, impl->readyState(), info.GetIsolate());
}

static void readyStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RTCDataChannelV8Internal::readyStateAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void bufferedAmountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    RTCDataChannel* impl = V8RTCDataChannel::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->bufferedAmount());
}

static void bufferedAmountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RTCDataChannelV8Internal::bufferedAmountAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onopenAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    RTCDataChannel* impl = V8RTCDataChannel::toImpl(holder);
    EventListener* cppValue(impl->onopen());
    v8SetReturnValue(info, cppValue ? v8::Local<v8::Value>(V8AbstractEventListener::cast(cppValue)->getListenerObject(impl->executionContext())) : v8::Local<v8::Value>(v8::Null(info.GetIsolate())));
}

static void onopenAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RTCDataChannelV8Internal::onopenAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onopenAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    RTCDataChannel* impl = V8RTCDataChannel::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onopen(), v8Value, V8RTCDataChannel::eventListenerCacheIndex);
    impl->setOnopen(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onopenAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    RTCDataChannelV8Internal::onopenAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    RTCDataChannel* impl = V8RTCDataChannel::toImpl(holder);
    EventListener* cppValue(impl->onerror());
    v8SetReturnValue(info, cppValue ? v8::Local<v8::Value>(V8AbstractEventListener::cast(cppValue)->getListenerObject(impl->executionContext())) : v8::Local<v8::Value>(v8::Null(info.GetIsolate())));
}

static void onerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RTCDataChannelV8Internal::onerrorAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onerrorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    RTCDataChannel* impl = V8RTCDataChannel::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onerror(), v8Value, V8RTCDataChannel::eventListenerCacheIndex);
    impl->setOnerror(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onerrorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    RTCDataChannelV8Internal::onerrorAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void oncloseAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    RTCDataChannel* impl = V8RTCDataChannel::toImpl(holder);
    EventListener* cppValue(impl->onclose());
    v8SetReturnValue(info, cppValue ? v8::Local<v8::Value>(V8AbstractEventListener::cast(cppValue)->getListenerObject(impl->executionContext())) : v8::Local<v8::Value>(v8::Null(info.GetIsolate())));
}

static void oncloseAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RTCDataChannelV8Internal::oncloseAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void oncloseAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    RTCDataChannel* impl = V8RTCDataChannel::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onclose(), v8Value, V8RTCDataChannel::eventListenerCacheIndex);
    impl->setOnclose(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void oncloseAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    RTCDataChannelV8Internal::oncloseAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onmessageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    RTCDataChannel* impl = V8RTCDataChannel::toImpl(holder);
    EventListener* cppValue(impl->onmessage());
    v8SetReturnValue(info, cppValue ? v8::Local<v8::Value>(V8AbstractEventListener::cast(cppValue)->getListenerObject(impl->executionContext())) : v8::Local<v8::Value>(v8::Null(info.GetIsolate())));
}

static void onmessageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RTCDataChannelV8Internal::onmessageAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onmessageAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    RTCDataChannel* impl = V8RTCDataChannel::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onmessage(), v8Value, V8RTCDataChannel::eventListenerCacheIndex);
    impl->setOnmessage(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onmessageAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    RTCDataChannelV8Internal::onmessageAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void binaryTypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    RTCDataChannel* impl = V8RTCDataChannel::toImpl(holder);
    v8SetReturnValueString(info, impl->binaryType(), info.GetIsolate());
}

static void binaryTypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RTCDataChannelV8Internal::binaryTypeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void binaryTypeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "binaryType", "RTCDataChannel", holder, info.GetIsolate());
    RTCDataChannel* impl = V8RTCDataChannel::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setBinaryType(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void binaryTypeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    RTCDataChannelV8Internal::binaryTypeAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void closeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    RTCDataChannel* impl = V8RTCDataChannel::toImpl(info.Holder());
    impl->close();
}

static void closeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RTCDataChannelV8Internal::closeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void send1Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "send", "RTCDataChannel", info.Holder(), info.GetIsolate());
    RTCDataChannel* impl = V8RTCDataChannel::toImpl(info.Holder());
    V8StringResource<> data;
    {
        data = info[0];
        if (!data.prepare())
            return;
    }
    impl->send(data, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void send2Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "send", "RTCDataChannel", info.Holder(), info.GetIsolate());
    RTCDataChannel* impl = V8RTCDataChannel::toImpl(info.Holder());
    Blob* data;
    {
        data = V8Blob::toImplWithTypeCheck(info.GetIsolate(), info[0]);
    }
    impl->send(data, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void send3Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "send", "RTCDataChannel", info.Holder(), info.GetIsolate());
    RTCDataChannel* impl = V8RTCDataChannel::toImpl(info.Holder());
    DOMArrayBuffer* data;
    {
        data = info[0]->IsArrayBuffer() ? V8ArrayBuffer::toImpl(v8::Local<v8::ArrayBuffer>::Cast(info[0])) : 0;
    }
    impl->send(data, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void send4Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "send", "RTCDataChannel", info.Holder(), info.GetIsolate());
    RTCDataChannel* impl = V8RTCDataChannel::toImpl(info.Holder());
    DOMArrayBufferView* data;
    {
        data = info[0]->IsArrayBufferView() ? V8ArrayBufferView::toImpl(v8::Local<v8::ArrayBufferView>::Cast(info[0])) : 0;
    }
    impl->send(data, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void sendMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "send", "RTCDataChannel", info.Holder(), info.GetIsolate());
    switch (std::min(1, info.Length())) {
    case 1:
        if (V8Blob::hasInstance(info[0], info.GetIsolate())) {
            send2Method(info);
            return;
        }
        if (V8ArrayBuffer::hasInstance(info[0], info.GetIsolate())) {
            send3Method(info);
            return;
        }
        if (V8ArrayBufferView::hasInstance(info[0], info.GetIsolate())) {
            send4Method(info);
            return;
        }
        if (true) {
            send1Method(info);
            return;
        }
        break;
    default:
        break;
    }
    if (info.Length() < 1) {
        exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
        exceptionState.throwIfNeeded();
        return;
    }
    exceptionState.throwTypeError("No function was found that matched the signature provided.");
    exceptionState.throwIfNeeded();
    return;
}

static void sendMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RTCDataChannelV8Internal::sendMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace RTCDataChannelV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8RTCDataChannelAccessors[] = {
    {"label", RTCDataChannelV8Internal::labelAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"reliable", RTCDataChannelV8Internal::reliableAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"ordered", RTCDataChannelV8Internal::orderedAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"maxRetransmitTime", RTCDataChannelV8Internal::maxRetransmitTimeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"maxRetransmits", RTCDataChannelV8Internal::maxRetransmitsAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"protocol", RTCDataChannelV8Internal::protocolAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"negotiated", RTCDataChannelV8Internal::negotiatedAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"id", RTCDataChannelV8Internal::idAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"readyState", RTCDataChannelV8Internal::readyStateAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"bufferedAmount", RTCDataChannelV8Internal::bufferedAmountAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onopen", RTCDataChannelV8Internal::onopenAttributeGetterCallback, RTCDataChannelV8Internal::onopenAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onerror", RTCDataChannelV8Internal::onerrorAttributeGetterCallback, RTCDataChannelV8Internal::onerrorAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onclose", RTCDataChannelV8Internal::oncloseAttributeGetterCallback, RTCDataChannelV8Internal::oncloseAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onmessage", RTCDataChannelV8Internal::onmessageAttributeGetterCallback, RTCDataChannelV8Internal::onmessageAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"binaryType", RTCDataChannelV8Internal::binaryTypeAttributeGetterCallback, RTCDataChannelV8Internal::binaryTypeAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8RTCDataChannelMethods[] = {
    {"close", RTCDataChannelV8Internal::closeMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"send", RTCDataChannelV8Internal::sendMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8RTCDataChannelTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "RTCDataChannel", V8EventTarget::domTemplate(isolate), V8RTCDataChannel::internalFieldCount,
        0, 0,
        V8RTCDataChannelAccessors, WTF_ARRAY_LENGTH(V8RTCDataChannelAccessors),
        V8RTCDataChannelMethods, WTF_ARRAY_LENGTH(V8RTCDataChannelMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8RTCDataChannel::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8RTCDataChannelTemplate);
}

bool V8RTCDataChannel::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8RTCDataChannel::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

RTCDataChannel* V8RTCDataChannel::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8RTCDataChannel::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8RTCDataChannel::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
