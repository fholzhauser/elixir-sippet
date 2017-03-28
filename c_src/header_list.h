// Copyright (c) 2017 The Sippet Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// All supported headers must be kept in lexicographical order
// of their header names.
//
// Organized as follows:
// X(header_name, compact_form, atom_name, format)

X(Accept,                          0, accept,                        MultipleTypeSubtypeParams)
//X(Accept-Contact,              'a', accept_contact,                x)
X(Accept-Encoding,                 0, accept_encoding,               MultipleTokenParams)
X(Accept-Language,                 0, accept_language,               MultipleTokenParams)
//X(Accept-Resource-Priority,      0, accept_resource_priority,      x)
X(Alert-Info,                      0, alert_info,                    MultipleUriParams)
X(Allow,                           0, allow,                         MultipleTokens)
//X(Allow-Events                 'u', allow_events,                  x)
//X(Answer-Mode,                   0, answer_mode,                   x)
X(Authentication-Info,             0, authentication_info,           OnlyAuthParams)
X(Authorization,                   0, authorization,                 SchemeAndAuthParams)
X(Call-ID,                       'i', call_id,                       SingleToken)
X(Call-Info,                       0, call_info,                     MultipleUriParams)
X(Contact,                       'm', contact,                       StarOrMultipleContactParams)
X(Content-Disposition,             0, content_disposition,           SingleTokenParams)
X(Content-Encoding,              'e', content_encoding,              MultipleTokens)
X(Content-Language,                0, content_language,              MultipleTokens)
X(Content-Length,                'l', content_length,                SingleInteger)
X(Content-Type,                  'c', content_type,                  SingleTypeSubtypeParams)
X(CSeq,                            0, cseq,                          Cseq)
X(Date,                            0, date,                          Date)
X(Error-Info,                      0, error_info,                    MultipleUriParams)
//X(Event,                       'o', event,                         x)
X(Expires,                         0, expires,                       SingleInteger)
//X(Feature-Caps,                  0, feature_caps,                  x)
//X(Flow-Timer,                    0, flow_timer,                    x)
X(From,                          'f', from,                          SingleContactParams)
//X(Geolocation,                   0, geolocation,                   x)
//X(Geolocation-Error,             0, geolocation_error,             x)
//X(Geolocation-Routing,           0, geolocation_routing,           x)
//X(History-Info,                  0, history_info,                  x)
//X(Identity,                    'y', identity,                      x)
//X(Identity-Info,               'n', identity_info,                 x)
//X(Info-Package,                  0, info_package,                  x)
X(In-Reply-To,                     0, in_reply_to,                   MultipleTokens)
//X(Join,                          0, join,                          x)
//X(Max-Breadth,                   0, max_breadth,                   x)
X(Max-Forwards,                    0, max_forwards,                  SingleInteger)
X(MIME-Version,                    0, mime_version,                  MimeVersion)
X(Min-Expires,                     0, min_expires,                   SingleInteger)
//X(Min-SE,                        0, min_se,                        x)
X(Organization,                    0, organization,                  TrimmedUtf8)
//X(P-Access-Network-Info,         0, p_access_network_info,         x)
//X(P-Answer-State,                0, p_answer_state,                x)
//X(P-Asserted-Identity,           0, p_asserted_identity,           x)
//X(P-Asserted-Service,            0, p_asserted_service,            x)
//X(P-Associated-URI,              0, p_associated_uri,              x)
//X(P-Called-Party-ID,             0, p_called_party_id,             x)
//X(P-Charging-Function-Addresses, 0, p_charging_function_addresses, x)
//X(P-Charging-Vector,             0, p_charging_vector,             x)
//X(P-DCS-Trace-Party-ID,          0, p_dcs_trace_party_id,          x)
//X(P-DCS-OSPS,                    0, p_dcs_osps,                    x)
//X(P-DCS-Billing-Info,            0, p_dcs_billing_info,            x)
//X(P-DCS-LAES,                    0, p_dcs_laes,                    x)
//X(P-DCS-Redirect,                0, p_dcs_redirect,                x)
//X(P-Early-Media,                 0, p_early_media,                 x)
//X(P-Media-Authorization,         0, p_media_authorization,         x)
//X(P-Preferred-Identity,          0, p_preferred_identity,          x)
//X(P-Preferred-Service,           0, p_preferred_service,           x)
//X(P-Profile-Key,                 0, p_profile_key,                 x)
//X(P-Refused-URI-List,            0, p_refused_uri_list,            x)
//X(P-Served-User,                 0, p_served_user,                 x)
//X(P-User-Database,               0, p_user_database,               x)
//X(P-Visited-Network-ID,          0, p_visited_network_id,          x)
//X(Path,                          0, path,                          x)
//X(Permission-Missing,            0, permission_missing,            x)
//X(Policy-Contact,                0, policy_contact,                x)
//X(Policy-ID,                     0, policy_id,                     x)
X(Priority,                        0, priority,                      SingleToken)
//X(Priv-Answer-Mode,              0, priv_answer_mode,              x)
//X(Privacy,                       0, privacy,                       x)
X(Proxy-Authenticate,              0, proxy_authenticate,            SchemeAndAuthParams)
X(Proxy-Authorization,             0, proxy_authorization,           SchemeAndAuthParams)
X(Proxy-Require,                   0, proxy_require,                 MultipleTokens)
//X(RAck,                          0, rack,                          x)
X(Reason,                          0, reason,                        SingleTokenParams)
X(Record-Route,                    0, record_route,                  MultipleContactParams)
//X(Recv-Info,                     0, recv_info,                     x)
//X(ReferSub,                      0, refer_sub,                     x)
//X(Refer-To,                    'r', refer_to,                      x)
//X(Referred-By,                 'b', referred_by,                   x)
//X(Reject-Contact,              'j', reject_contact,                x)
//X(Replaces,                      0, replaces,                      x)
X(Reply-To,                        0, reply_to,                      SingleContactParams)
//X(Request-Disposition,         'd', request_disposition,           x)
X(Require,                         0, require,                       MultipleTokens)
//X(Resource-Priority,             0, resource_priority,             x)
X(Retry-After,                     0, retry_after,                   RetryAfter)
X(Route,                           0, route,                         MultipleContactParams)
//X(RSeq,                          0, rseq,                          x)
//X(Security-Client,               0, security_client,               x)
//X(Security-Server,               0, security_server,               x)
//X(Security-Verify,               0, security_verify,               x)
X(Server,                          0, server,                        TrimmedUtf8)
//X(Service-Route,                 0, service_route,                 x)
//X(Session-Expires,               0, session_expires,               x)
//X(SIP-ETag,                      0, sip_etag,                      x)
//X(SIP-If-Match,                  0, sip_if_match,                  x)
X(Subject,                       's', subject,                       TrimmedUtf8)
//X(Subscription-State,            0, subscription_state,            x)
X(Supported,                     'k', supported,                     MultipleTokens)
//X(Suppress-If-Match,             0, suppress_if_match,             x)
//X(Target-Dialog,                 0, target_dialog,                 x)
X(Timestamp,                       0, timestamp,                     Timestamp)
X(To,                            't', to,                            SingleContactParams)
//X(Trigger-Consent,               0, trigger_consent,               x)
X(Unsupported,                     0, unsupported,                   MultipleTokens)
X(User-Agent,                      0, user_agent,                    TrimmedUtf8)
X(Via,                           'v', via,                           MultipleVias)
X(Warning,                         0, warning,                       MultipleWarnings)
X(WWW-Authenticate,                0, www_authenticate,              SchemeAndAuthParams)
