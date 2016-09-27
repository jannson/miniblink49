// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef V8Navigator_h
#define V8Navigator_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8Binding.h"
#include "bindings/core/v8/V8DOMWrapper.h"
#include "bindings/core/v8/WrapperTypeInfo.h"
#include "core/CoreExport.h"
#include "core/frame/Navigator.h"
#include "platform/heap/Handle.h"

namespace blink {

class V8Navigator {
public:
    CORE_EXPORT static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
    static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
    CORE_EXPORT static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*);
    static Navigator* toImpl(v8::Local<v8::Object> object)
    {
        return toScriptWrappable(object)->toImpl<Navigator>();
    }
    CORE_EXPORT static Navigator* toImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
    CORE_EXPORT static WrapperTypeInfo wrapperTypeInfo;
    static void refObject(ScriptWrappable*);
    static void derefObject(ScriptWrappable*);
    template<typename VisitorDispatcher>
    static void trace(VisitorDispatcher visitor, ScriptWrappable* scriptWrappable)
    {
        visitor->trace(scriptWrappable->toImpl<Navigator>());
    }
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 0;
    static void installConditionallyEnabledProperties(v8::Local<v8::Object>, v8::Isolate*) { }
    static void preparePrototypeObject(v8::Isolate*, v8::Local<v8::Object> prototypeObject, v8::Local<v8::FunctionTemplate> interfaceTemplate) { }
    CORE_EXPORT static void updateWrapperTypeInfo(InstallTemplateFunction, PreparePrototypeObjectFunction);
    CORE_EXPORT static void installV8NavigatorTemplate(v8::Local<v8::FunctionTemplate>, v8::Isolate*);

private:
    static InstallTemplateFunction installV8NavigatorTemplateFunction;
};

template <>
struct V8TypeOf<Navigator> {
    typedef V8Navigator Type;
};

} // namespace blink

#endif // V8Navigator_h
