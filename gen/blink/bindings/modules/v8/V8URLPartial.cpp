// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8URLPartial.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8URL.h"
#include "bindings/modules/v8/V8MediaSource.h"
#include "bindings/modules/v8/V8MediaStream.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "modules/mediasource/URLMediaSource.h"
#include "modules/mediastream/URLMediaStream.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {


namespace DOMURLPartialV8Internal {

#ifdef MINIBLINK_NOT_IMPLEMENTED
static void createObjectURL2Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaSource* source;
    {
        source = V8MediaSource::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!source) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("createObjectURL", "URL", "parameter 1 is not of type 'MediaSource'."));
            return;
        }
    }
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    v8SetReturnValueStringOrNull(info, URLMediaSource::createObjectURL(executionContext, source), info.GetIsolate());
}

static void createObjectURL3Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaStream* stream;
    {
        stream = V8MediaStream::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!stream) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("createObjectURL", "URL", "parameter 1 is not of type 'MediaStream'."));
            return;
        }
    }
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    v8SetReturnValueStringOrNull(info, URLMediaStream::createObjectURL(executionContext, stream), info.GetIsolate());
}
#endif // MINIBLINK_NOT_IMPLEMENTED

static void createObjectURLMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "createObjectURL", "URL", info.Holder(), info.GetIsolate());
#ifdef MINIBLINK_NOT_IMPLEMENTED
    switch (std::min(1, info.Length())) {
    case 1:
        if (V8MediaSource::hasInstance(info[0], info.GetIsolate())) {
            createObjectURL2Method(info);
            return;
        }
        if (V8MediaStream::hasInstance(info[0], info.GetIsolate())) {
            createObjectURL3Method(info);
            return;
        }
        break;
    default:
        break;
    }
#endif // MINIBLINK_NOT_IMPLEMENTED
    if (info.Length() < 1) {
        exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
        exceptionState.throwIfNeeded();
        return;
    }
    exceptionState.throwTypeError("No function was found that matched the signature provided.");
    exceptionState.throwIfNeeded();
    return;
}

} // namespace DOMURLPartialV8Internal



void V8URLPartial::installV8URLTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    V8URL::installV8URLTemplate(functionTemplate, isolate);
#ifdef MINIBLINK_NOT_IMPLEMENTED
    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "URL", v8::Local<v8::FunctionTemplate>(), V8URL::internalFieldCount,
        0, 0,
        0, 0,
        0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
#endif // MINIBLINK_NOT_IMPLEMENTED
}

void V8URLPartial::preparePrototypeObject(v8::Isolate* isolate, v8::Local<v8::Object> prototypeObject, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    V8URL::preparePrototypeObject(isolate, prototypeObject, interfaceTemplate);
}

void V8URLPartial::initialize()
{
    // Should be invoked from initModules.
    V8URL::updateWrapperTypeInfo(
        &V8URLPartial::installV8URLTemplate,
        &V8URLPartial::preparePrototypeObject);

    V8URL::registerCreateObjectURLMethodForPartialInterface(&DOMURLPartialV8Internal::createObjectURLMethod);

}

} // namespace blink
