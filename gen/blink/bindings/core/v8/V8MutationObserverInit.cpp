// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8MutationObserverInit.h"

#include "bindings/core/v8/ExceptionState.h"

namespace blink {

void V8MutationObserverInit::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MutationObserverInit& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value))
        return;
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    v8::TryCatch block;
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    {
        v8::Local<v8::Value> attributeFilterValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "attributeFilter")).ToLocal(&attributeFilterValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (attributeFilterValue.IsEmpty() || attributeFilterValue->IsUndefined()) {
            // Do nothing.
        } else {
            Vector<String> attributeFilter = toImplArray<Vector<String>>(attributeFilterValue, 0, isolate, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setAttributeFilter(attributeFilter);
        }
    }

    {
        v8::Local<v8::Value> attributeOldValueValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "attributeOldValue")).ToLocal(&attributeOldValueValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (attributeOldValueValue.IsEmpty() || attributeOldValueValue->IsUndefined()) {
            // Do nothing.
        } else {
            bool attributeOldValue = toBoolean(isolate, attributeOldValueValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setAttributeOldValue(attributeOldValue);
        }
    }

    {
        v8::Local<v8::Value> attributesValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "attributes")).ToLocal(&attributesValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (attributesValue.IsEmpty() || attributesValue->IsUndefined()) {
            // Do nothing.
        } else {
            bool attributes = toBoolean(isolate, attributesValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setAttributes(attributes);
        }
    }

    {
        v8::Local<v8::Value> characterDataValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "characterData")).ToLocal(&characterDataValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (characterDataValue.IsEmpty() || characterDataValue->IsUndefined()) {
            // Do nothing.
        } else {
            bool characterData = toBoolean(isolate, characterDataValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setCharacterData(characterData);
        }
    }

    {
        v8::Local<v8::Value> characterDataOldValueValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "characterDataOldValue")).ToLocal(&characterDataOldValueValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (characterDataOldValueValue.IsEmpty() || characterDataOldValueValue->IsUndefined()) {
            // Do nothing.
        } else {
            bool characterDataOldValue = toBoolean(isolate, characterDataOldValueValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setCharacterDataOldValue(characterDataOldValue);
        }
    }

    {
        v8::Local<v8::Value> childListValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "childList")).ToLocal(&childListValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (childListValue.IsEmpty() || childListValue->IsUndefined()) {
            // Do nothing.
        } else {
            bool childList = toBoolean(isolate, childListValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setChildList(childList);
        }
    }

    {
        v8::Local<v8::Value> subtreeValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "subtree")).ToLocal(&subtreeValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (subtreeValue.IsEmpty() || subtreeValue->IsUndefined()) {
            // Do nothing.
        } else {
            bool subtree = toBoolean(isolate, subtreeValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setSubtree(subtree);
        }
    }

}

v8::Local<v8::Value> toV8(const MutationObserverInit& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8MutationObserverInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8MutationObserverInit(const MutationObserverInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasAttributeFilter()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "attributeFilter"), toV8(impl.attributeFilter(), creationContext, isolate))))
            return false;
    }

    if (impl.hasAttributeOldValue()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "attributeOldValue"), v8Boolean(impl.attributeOldValue(), isolate))))
            return false;
    }

    if (impl.hasAttributes()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "attributes"), v8Boolean(impl.attributes(), isolate))))
            return false;
    }

    if (impl.hasCharacterData()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "characterData"), v8Boolean(impl.characterData(), isolate))))
            return false;
    }

    if (impl.hasCharacterDataOldValue()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "characterDataOldValue"), v8Boolean(impl.characterDataOldValue(), isolate))))
            return false;
    }

    if (impl.hasChildList()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "childList"), v8Boolean(impl.childList(), isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "childList"), v8Boolean(false, isolate))))
            return false;
    }

    if (impl.hasSubtree()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "subtree"), v8Boolean(impl.subtree(), isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "subtree"), v8Boolean(false, isolate))))
            return false;
    }

    return true;
}

MutationObserverInit NativeValueTraits<MutationObserverInit>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    MutationObserverInit impl;
    V8MutationObserverInit::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
