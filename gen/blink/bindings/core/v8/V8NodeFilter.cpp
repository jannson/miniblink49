// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8NodeFilter.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Node.h"
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
const WrapperTypeInfo V8NodeFilter::wrapperTypeInfo = { gin::kEmbedderBlink, V8NodeFilter::domTemplate, V8NodeFilter::refObject, V8NodeFilter::derefObject, V8NodeFilter::trace, 0, 0, V8NodeFilter::preparePrototypeObject, V8NodeFilter::installConditionallyEnabledProperties, "NodeFilter", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in NodeFilter.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& NodeFilter::s_wrapperTypeInfo = V8NodeFilter::wrapperTypeInfo;

namespace NodeFilterV8Internal {

static void acceptNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "acceptNode", "NodeFilter", info.Holder(), info.GetIsolate());
    NodeFilter* impl = V8NodeFilter::toImpl(info.Holder());
    Node* node;
    {
        node = V8Node::toImplWithTypeCheck(info.GetIsolate(), info[0]);
    }
    unsigned result = impl->acceptNode(node, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValueUnsigned(info, result);
}

static void acceptNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    NodeFilterV8Internal::acceptNodeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace NodeFilterV8Internal

static const V8DOMConfiguration::MethodConfiguration V8NodeFilterMethods[] = {
    {"acceptNode", NodeFilterV8Internal::acceptNodeMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8NodeFilterTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "NodeFilter", v8::Local<v8::FunctionTemplate>(), V8NodeFilter::internalFieldCount,
        0, 0,
        0, 0,
        V8NodeFilterMethods, WTF_ARRAY_LENGTH(V8NodeFilterMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    static const V8DOMConfiguration::ConstantConfiguration V8NodeFilterConstants[] = {
        {"FILTER_ACCEPT", 1, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"FILTER_REJECT", 2, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"FILTER_SKIP", 3, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SHOW_ALL", 0xFFFFFFFF, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
        {"SHOW_ELEMENT", 0x1, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
        {"SHOW_ATTRIBUTE", 0x2, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
        {"SHOW_TEXT", 0x4, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
        {"SHOW_CDATA_SECTION", 0x8, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
        {"SHOW_ENTITY_REFERENCE", 0x10, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
        {"SHOW_ENTITY", 0x20, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
        {"SHOW_PROCESSING_INSTRUCTION", 0x40, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
        {"SHOW_COMMENT", 0x80, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
        {"SHOW_DOCUMENT", 0x100, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
        {"SHOW_DOCUMENT_TYPE", 0x200, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
        {"SHOW_DOCUMENT_FRAGMENT", 0x400, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
        {"SHOW_NOTATION", 0x800, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
    };
    V8DOMConfiguration::installConstants(isolate, functionTemplate, prototypeTemplate, V8NodeFilterConstants, WTF_ARRAY_LENGTH(V8NodeFilterConstants));
    static_assert(1 == NodeFilter::FILTER_ACCEPT, "the value of NodeFilter_FILTER_ACCEPT does not match with implementation");
    static_assert(2 == NodeFilter::FILTER_REJECT, "the value of NodeFilter_FILTER_REJECT does not match with implementation");
    static_assert(3 == NodeFilter::FILTER_SKIP, "the value of NodeFilter_FILTER_SKIP does not match with implementation");
    static_assert(0xFFFFFFFF == NodeFilter::SHOW_ALL, "the value of NodeFilter_SHOW_ALL does not match with implementation");
    static_assert(0x1 == NodeFilter::SHOW_ELEMENT, "the value of NodeFilter_SHOW_ELEMENT does not match with implementation");
    static_assert(0x2 == NodeFilter::SHOW_ATTRIBUTE, "the value of NodeFilter_SHOW_ATTRIBUTE does not match with implementation");
    static_assert(0x4 == NodeFilter::SHOW_TEXT, "the value of NodeFilter_SHOW_TEXT does not match with implementation");
    static_assert(0x8 == NodeFilter::SHOW_CDATA_SECTION, "the value of NodeFilter_SHOW_CDATA_SECTION does not match with implementation");
    static_assert(0x10 == NodeFilter::SHOW_ENTITY_REFERENCE, "the value of NodeFilter_SHOW_ENTITY_REFERENCE does not match with implementation");
    static_assert(0x20 == NodeFilter::SHOW_ENTITY, "the value of NodeFilter_SHOW_ENTITY does not match with implementation");
    static_assert(0x40 == NodeFilter::SHOW_PROCESSING_INSTRUCTION, "the value of NodeFilter_SHOW_PROCESSING_INSTRUCTION does not match with implementation");
    static_assert(0x80 == NodeFilter::SHOW_COMMENT, "the value of NodeFilter_SHOW_COMMENT does not match with implementation");
    static_assert(0x100 == NodeFilter::SHOW_DOCUMENT, "the value of NodeFilter_SHOW_DOCUMENT does not match with implementation");
    static_assert(0x200 == NodeFilter::SHOW_DOCUMENT_TYPE, "the value of NodeFilter_SHOW_DOCUMENT_TYPE does not match with implementation");
    static_assert(0x400 == NodeFilter::SHOW_DOCUMENT_FRAGMENT, "the value of NodeFilter_SHOW_DOCUMENT_FRAGMENT does not match with implementation");
    static_assert(0x800 == NodeFilter::SHOW_NOTATION, "the value of NodeFilter_SHOW_NOTATION does not match with implementation");

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8NodeFilter::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8NodeFilterTemplate);
}

bool V8NodeFilter::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8NodeFilter::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

NodeFilter* V8NodeFilter::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8NodeFilter::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<NodeFilter>()->ref();
#endif
}

void V8NodeFilter::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<NodeFilter>()->deref();
#endif
}

} // namespace blink
