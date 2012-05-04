// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
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

#include "libcef_dll/cpptoc/web_urlrequest_client_cpptoc.h"
#include "libcef_dll/ctocpp/request_ctocpp.h"
#include "libcef_dll/ctocpp/response_ctocpp.h"
#include "libcef_dll/ctocpp/web_urlrequest_ctocpp.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK web_urlrequest_client_on_state_change(
    struct _cef_web_urlrequest_client_t* self, cef_web_urlrequest_t* requester,
    enum cef_weburlrequest_state_t state) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: requester; type: refptr_diff
  DCHECK(requester);
  if (!requester)
    return;

  // Execute
  CefWebURLRequestClientCppToC::Get(self)->OnStateChange(
      CefWebURLRequestCToCpp::Wrap(requester),
      state);
}

void CEF_CALLBACK web_urlrequest_client_on_redirect(
    struct _cef_web_urlrequest_client_t* self, cef_web_urlrequest_t* requester,
    cef_request_t* request, cef_response_t* response) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: requester; type: refptr_diff
  DCHECK(requester);
  if (!requester)
    return;
  // Verify param: request; type: refptr_diff
  DCHECK(request);
  if (!request)
    return;
  // Verify param: response; type: refptr_diff
  DCHECK(response);
  if (!response)
    return;

  // Execute
  CefWebURLRequestClientCppToC::Get(self)->OnRedirect(
      CefWebURLRequestCToCpp::Wrap(requester),
      CefRequestCToCpp::Wrap(request),
      CefResponseCToCpp::Wrap(response));
}

void CEF_CALLBACK web_urlrequest_client_on_headers_received(
    struct _cef_web_urlrequest_client_t* self, cef_web_urlrequest_t* requester,
    cef_response_t* response) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: requester; type: refptr_diff
  DCHECK(requester);
  if (!requester)
    return;
  // Verify param: response; type: refptr_diff
  DCHECK(response);
  if (!response)
    return;

  // Execute
  CefWebURLRequestClientCppToC::Get(self)->OnHeadersReceived(
      CefWebURLRequestCToCpp::Wrap(requester),
      CefResponseCToCpp::Wrap(response));
}

void CEF_CALLBACK web_urlrequest_client_on_progress(
    struct _cef_web_urlrequest_client_t* self, cef_web_urlrequest_t* requester,
    uint64 bytesSent, uint64 totalBytesToBeSent) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: requester; type: refptr_diff
  DCHECK(requester);
  if (!requester)
    return;

  // Execute
  CefWebURLRequestClientCppToC::Get(self)->OnProgress(
      CefWebURLRequestCToCpp::Wrap(requester),
      bytesSent,
      totalBytesToBeSent);
}

void CEF_CALLBACK web_urlrequest_client_on_data(
    struct _cef_web_urlrequest_client_t* self, cef_web_urlrequest_t* requester,
    const void* data, int dataLength) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: requester; type: refptr_diff
  DCHECK(requester);
  if (!requester)
    return;
  // Verify param: data; type: simple_byaddr
  DCHECK(data);
  if (!data)
    return;

  // Execute
  CefWebURLRequestClientCppToC::Get(self)->OnData(
      CefWebURLRequestCToCpp::Wrap(requester),
      data,
      dataLength);
}

void CEF_CALLBACK web_urlrequest_client_on_error(
    struct _cef_web_urlrequest_client_t* self, cef_web_urlrequest_t* requester,
    enum cef_handler_errorcode_t errorCode) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: requester; type: refptr_diff
  DCHECK(requester);
  if (!requester)
    return;

  // Execute
  CefWebURLRequestClientCppToC::Get(self)->OnError(
      CefWebURLRequestCToCpp::Wrap(requester),
      errorCode);
}


// CONSTRUCTOR - Do not edit by hand.

CefWebURLRequestClientCppToC::CefWebURLRequestClientCppToC(
    CefWebURLRequestClient* cls)
    : CefCppToC<CefWebURLRequestClientCppToC, CefWebURLRequestClient,
        cef_web_urlrequest_client_t>(cls) {
  struct_.struct_.on_state_change = web_urlrequest_client_on_state_change;
  struct_.struct_.on_redirect = web_urlrequest_client_on_redirect;
  struct_.struct_.on_headers_received =
      web_urlrequest_client_on_headers_received;
  struct_.struct_.on_progress = web_urlrequest_client_on_progress;
  struct_.struct_.on_data = web_urlrequest_client_on_data;
  struct_.struct_.on_error = web_urlrequest_client_on_error;
}

#ifndef NDEBUG
template<> long CefCppToC<CefWebURLRequestClientCppToC, CefWebURLRequestClient,
    cef_web_urlrequest_client_t>::DebugObjCt = 0;
#endif

