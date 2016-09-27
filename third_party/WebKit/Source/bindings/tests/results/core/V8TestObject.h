// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef V8TestObject_h
#define V8TestObject_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8Binding.h"
#include "bindings/core/v8/V8DOMWrapper.h"
#include "bindings/core/v8/WrapperTypeInfo.h"
#include "bindings/tests/idls/core/TestObject.h"
#include "core/CoreExport.h"
#include "platform/heap/Handle.h"

namespace blink {

class V8TestObject {
public:
    class PrivateScript {
    public:
        static bool voidMethodImplementedInPrivateScriptMethod(LocalFrame* frame, TestObject* holderImpl);
        static bool shortMethodImplementedInPrivateScriptMethod(LocalFrame* frame, TestObject* holderImpl, int* result);
        static bool shortMethodWithShortArgumentImplementedInPrivateScriptMethod(LocalFrame* frame, TestObject* holderImpl, int value, int* result);
        static bool stringMethodWithStringArgumentImplementedInPrivateScriptMethod(LocalFrame* frame, TestObject* holderImpl, String value, String* result);
        static bool nodeMethodWithNodeArgumentImplementedInPrivateScriptMethod(LocalFrame* frame, TestObject* holderImpl, PassRefPtrWillBeRawPtr<Node> value, RefPtrWillBeRawPtr<Node>* result);
        static bool nodeMethodWithVariousArgumentsImplementedInPrivateScriptMethod(LocalFrame* frame, TestObject* holderImpl, PassRefPtrWillBeRawPtr<Document> document, PassRefPtrWillBeRawPtr<Node> node, int value1, double value2, String string, RefPtrWillBeRawPtr<Node>* result);
        static bool methodForPrivateScriptOnlyMethod(LocalFrame* frame, TestObject* holderImpl, int value1, int value2, int* result);
        static bool readonlyShortAttributeAttributeGetter(LocalFrame* frame, TestObject* holderImpl, int* result);
        static bool shortAttributeAttributeGetter(LocalFrame* frame, TestObject* holderImpl, int* result);
        static bool shortAttributeAttributeSetter(LocalFrame* frame, TestObject* holderImpl, int cppValue);
        static bool stringAttributeAttributeGetter(LocalFrame* frame, TestObject* holderImpl, String* result);
        static bool stringAttributeAttributeSetter(LocalFrame* frame, TestObject* holderImpl, String cppValue);
        static bool nodeAttributeAttributeGetter(LocalFrame* frame, TestObject* holderImpl, RefPtrWillBeRawPtr<Node>* result);
        static bool nodeAttributeAttributeSetter(LocalFrame* frame, TestObject* holderImpl, PassRefPtrWillBeRawPtr<Node> cppValue);
        static bool attributeForPrivateScriptOnlyAttributeGetter(LocalFrame* frame, TestObject* holderImpl, String* result);
        static bool attributeForPrivateScriptOnlyAttributeSetter(LocalFrame* frame, TestObject* holderImpl, String cppValue);
        static bool enumForPrivateScriptAttributeGetter(LocalFrame* frame, TestObject* holderImpl, String* result);
        static bool enumForPrivateScriptAttributeSetter(LocalFrame* frame, TestObject* holderImpl, String cppValue);
    };

    CORE_EXPORT static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
    static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
    CORE_EXPORT static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*);
    static TestObject* toImpl(v8::Local<v8::Object> object)
    {
        return toScriptWrappable(object)->toImpl<TestObject>();
    }
    CORE_EXPORT static TestObject* toImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
    CORE_EXPORT static const WrapperTypeInfo wrapperTypeInfo;
    static void refObject(ScriptWrappable*);
    static void derefObject(ScriptWrappable*);
    template<typename VisitorDispatcher>
    static void trace(VisitorDispatcher visitor, ScriptWrappable* scriptWrappable)
    {
    }
    static void customVoidMethodMethodCustom(const v8::FunctionCallbackInfo<v8::Value>&);
    static void customCallPrologueVoidMethodMethodPrologueCustom(const v8::FunctionCallbackInfo<v8::Value>&, TestObject*);
    static void customCallEpilogueVoidMethodMethodEpilogueCustom(const v8::FunctionCallbackInfo<v8::Value>&, TestObject*);
#if ENABLE(CONDITION)
    static void conditionalConditionCustomVoidMethodMethodCustom(const v8::FunctionCallbackInfo<v8::Value>&);
#endif // ENABLE(CONDITION)
    static void customObjectAttributeAttributeGetterCustom(const v8::FunctionCallbackInfo<v8::Value>&);
    static void customObjectAttributeAttributeSetterCustom(v8::Local<v8::Value>, const v8::FunctionCallbackInfo<v8::Value>&);
    static void customGetterLongAttributeAttributeGetterCustom(const v8::FunctionCallbackInfo<v8::Value>&);
    static void customGetterReadonlyObjectAttributeAttributeGetterCustom(const v8::FunctionCallbackInfo<v8::Value>&);
    static void customSetterLongAttributeAttributeSetterCustom(v8::Local<v8::Value>, const v8::FunctionCallbackInfo<v8::Value>&);
#if ENABLE(CONDITION)
    static void customLongAttributeAttributeGetterCustom(const v8::FunctionCallbackInfo<v8::Value>&);
#endif // ENABLE(CONDITION)
#if ENABLE(CONDITION)
    static void customLongAttributeAttributeSetterCustom(v8::Local<v8::Value>, const v8::FunctionCallbackInfo<v8::Value>&);
#endif // ENABLE(CONDITION)
    static void customImplementedAsLongAttributeAttributeGetterCustom(const v8::FunctionCallbackInfo<v8::Value>&);
    static void customImplementedAsLongAttributeAttributeSetterCustom(v8::Local<v8::Value>, const v8::FunctionCallbackInfo<v8::Value>&);
    static void customGetterImplementedAsLongAttributeAttributeGetterCustom(const v8::FunctionCallbackInfo<v8::Value>&);
    static void customSetterImplementedAsLongAttributeAttributeSetterCustom(v8::Local<v8::Value>, const v8::FunctionCallbackInfo<v8::Value>&);
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 0;
    static void installConditionallyEnabledProperties(v8::Local<v8::Object>, v8::Isolate*) { }
    static void preparePrototypeObject(v8::Isolate*, v8::Local<v8::Object> prototypeObject, v8::Local<v8::FunctionTemplate> interfaceTemplate);
};

template <>
struct V8TypeOf<TestObject> {
    typedef V8TestObject Type;
};

} // namespace blink

#endif // V8TestObject_h
