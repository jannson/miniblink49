// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef MessageEventInit_h
#define MessageEventInit_h

#include "bindings/core/v8/Nullable.h"
#include "bindings/core/v8/ScriptValue.h"
#include "core/CoreExport.h"
#include "core/dom/MessagePort.h"
#include "core/events/EventInit.h"
#include "core/events/EventTarget.h"
#include "platform/heap/Handle.h"
#include "wtf/Vector.h"
#include "wtf/text/WTFString.h"

namespace blink {

class CORE_EXPORT MessageEventInit : public EventInit {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    MessageEventInit();

    bool hasData() const { return !(m_data.isEmpty() || m_data.isNull() || m_data.isUndefined()); }
    ScriptValue data() const { return m_data; }
    void setData(ScriptValue value) { m_data = value; }

    bool hasLastEventId() const { return !m_lastEventId.isNull(); }
    String lastEventId() const { return m_lastEventId; }
    void setLastEventId(String value) { m_lastEventId = value; }

    bool hasOrigin() const { return !m_origin.isNull(); }
    String origin() const { return m_origin; }
    void setOrigin(String value) { m_origin = value; }

    bool hasPorts() const { return !m_ports.isNull(); }
    const HeapVector<Member<MessagePort>>& ports() const { return m_ports.get(); }
    void setPorts(const HeapVector<Member<MessagePort>>& value) { m_ports = value; }
    void setPortsToNull() { m_ports = Nullable<HeapVector<Member<MessagePort>>>(); }

    bool hasSource() const { return m_source; }
    PassRefPtrWillBeRawPtr<EventTarget> source() const { return m_source; }
    void setSource(PassRefPtrWillBeRawPtr<EventTarget> value) { m_source = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    ScriptValue m_data;
    String m_lastEventId;
    String m_origin;
    Nullable<HeapVector<Member<MessagePort>>> m_ports;
    RefPtrWillBeMember<EventTarget> m_source;

    friend class V8MessageEventInit;
};

} // namespace blink

#endif // MessageEventInit_h
