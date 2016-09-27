// Copyright (c) 2015 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_RENDER_PROCESS_HANDLER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_RENDER_PROCESS_HANDLER_CTOCPP_H_
#pragma once

#if 0 // ndef BUILDING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed DLL-side only")
#else  // BUILDING_CEF_SHARED

#include "include/cef_render_process_handler.h"
#include "include/capi/cef_render_process_handler_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefRenderProcessHandlerCToCpp
    : public CefCToCpp<CefRenderProcessHandlerCToCpp, CefRenderProcessHandler,
        cef_render_process_handler_t> {
 public:
  CefRenderProcessHandlerCToCpp();

  // CefRenderProcessHandler methods.
  void OnRenderThreadCreated(CefRefPtr<CefListValue> extra_info) override;
  void OnWebKitInitialized() override;
  void OnBrowserCreated(CefRefPtr<CefBrowser> browser) override;
  void OnBrowserDestroyed(CefRefPtr<CefBrowser> browser) override;
  CefRefPtr<CefLoadHandler> GetLoadHandler() override;
  bool OnBeforeNavigation(CefRefPtr<CefBrowser> browser,
      CefRefPtr<CefFrame> frame, CefRefPtr<CefRequest> request,
      NavigationType navigation_type, bool is_redirect) override;
  void OnContextCreated(CefRefPtr<CefBrowser> browser,
      CefRefPtr<CefFrame> frame, CefRefPtr<CefV8Context> context) override;
  void OnContextReleased(CefRefPtr<CefBrowser> browser,
      CefRefPtr<CefFrame> frame, CefRefPtr<CefV8Context> context) override;
  void OnUncaughtException(CefRefPtr<CefBrowser> browser,
      CefRefPtr<CefFrame> frame, CefRefPtr<CefV8Context> context,
      CefRefPtr<CefV8Exception> exception,
      CefRefPtr<CefV8StackTrace> stackTrace) override;
  void OnFocusedNodeChanged(CefRefPtr<CefBrowser> browser,
      CefRefPtr<CefFrame> frame, CefRefPtr<CefDOMNode> node) override;
  bool OnProcessMessageReceived(CefRefPtr<CefBrowser> browser,
      CefProcessId source_process,
      CefRefPtr<CefProcessMessage> message) override;
};

#endif  // BUILDING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CTOCPP_RENDER_PROCESS_HANDLER_CTOCPP_H_
