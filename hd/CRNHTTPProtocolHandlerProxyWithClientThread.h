//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRNHTTPProtocolHandlerProxy.h"

@class NSArray, NSMutableArray, NSString, NSThread, NSURLProtocol;

@interface CRNHTTPProtocolHandlerProxyWithClientThread : NSObject <CRNHTTPProtocolHandlerProxy>
{
    NSURLProtocol *_protocol;
    NSThread *_clientThread;
    NSArray *_runLoopModes;
    NSString *_url;
    struct Time _creationTime;
    _Bool _requestComplete;
    _Bool _paused;
    NSMutableArray *_queuedBlocks;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)didFinishLoadingOnClientThread;
- (void)wasRedirectedToRequestOnClientThread:(id)arg1 redirectResponse:(id)arg2;
- (void)didReceiveResponseOnClientThread:(id)arg1;
- (void)didLoadDataOnClientThread:(id)arg1;
- (void)didFailWithErrorOnClientThread:(id)arg1;
- (void)cancelAuthRequest;
-     // Error parsing type: v40@0:8^{AuthChallengeInfo={AtomicRefCount={atomic<int>=Ai}}B{Origin={SchemeHostPort={basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}S}{Optional<url::Origin::Nonce>={OptionalStorage<url::Origin::Nonce, false, false>=B(?=c{Nonce={UnguessableToken={Token=QQ}}})}}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}}16r^{URLRequest=^^?{map<const void *, std::__1::unique_ptr<base::SupportsUserData::Data, std::__1::default_delete<base::SupportsUserData::Data> >, std::__1::less<const void *>, std::__1::allocator<std::__1::pair<const void *const, std::__1::unique_ptr<base::SupportsUserData::Data, std::__1::default_delete<base::SupportsUserData::Data> > > > >={__tree<std::__1::__value_type<const void *, std::__1::unique_ptr<base::SupportsUserData::Data, std::__1::default_delete<base::SupportsUserData::Data> > >, std::__1::__map_value_compare<const void *, std::__1::__value_type<const void *, std::__1::unique_ptr<base::SupportsUserData::Data, std::__1::default_delete<base::SupportsUserData::Data> > >, std::__1::less<const void *>, true>, std::__1::allocator<std::__1::__value_type<const void *, std::__1::unique_ptr<base::SupportsUserData::Data, std::__1::default_delete<base::SupportsUserData::Data> > > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const void *, std::__1::unique_ptr<base::SupportsUserData::Data, std::__1::default_delete<base::SupportsUserData::Data> > >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<const void *, std::__1::__value_type<const void *, std::__1::unique_ptr<base::SupportsUserData::Data, std::__1::default_delete<base::SupportsUserData::Data> > >, std::__1::less<const void *>, true> >=Q}}}{SequenceChecker=}^{URLRequestContext}^{NetworkDelegate}{NetLogWithSource={NetLogSource=iI}^{NetLog}i}{unique_ptr<net::URLRequestJob, std::__1::default_delete<net::URLRequestJob> >={__compressed_pair<net::URLRequestJob *, std::__1::default_delete<net::URLRequestJob> >=^{URLRequestJob}}}{unique_ptr<net::UploadDataStream, std::__1::default_delete<net::UploadDataStream> >={__compressed_pair<net::UploadDataStream *, std::__1::default_delete<net::UploadDataStream> >=^{UploadDataStream}}}{vector<GURL, std::__1::allocator<GURL> >=^{GURL}^{GURL}{__compressed_pair<GURL *, std::__1::allocator<GURL> >=^{GURL}}}{GURL={basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}B{Parsed={Component=ii}{Component=ii}{Component=ii}{Component=ii}{Component=ii}{Component=ii}{Component=ii}{Component=ii}B^{Parsed}}{unique_ptr<GURL, std::__1::default_delete<GURL> >={__compressed_pair<GURL *, std::__1::default_delete<GURL> >=^{GURL}}}}{Optional<url::Origin>={OptionalStorage<url::Origin, false, false>=B(?=c{Origin={SchemeHostPort={basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}S}{Optional<url::Origin::Nonce>={OptionalStorage<url::Origin::Nonce, false, false>=B(?=c{Nonce={UnguessableToken={Token=QQ}}})}}})}}B{Optional<url::Origin>={OptionalStorage<url::Origin, false, false>=B(?=c{Origin={SchemeHostPort={basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}S}{Optional<url::Origin::Nonce>={OptionalStorage<url::Origin::Nonce, false, false>=B(?=c{Nonce={UnguessableToken={Token=QQ}}})}}})}}{GURL={basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}B{Parsed={Component=ii}{Component=ii}{Component=ii}{Component=ii}{Component=ii}{Component=ii}{Component=ii}{Component=ii}B^{Parsed}}{unique_ptr<GURL, std::__1::default_delete<GURL> >={__compressed_pair<GURL *, std::__1::default_delete<GURL> >=^{GURL}}}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}ii{HttpRequestHeaders={vector<net::HttpRequestHeaders::HeaderKeyValuePair, std::__1::allocator<net::HttpRequestHeaders::HeaderKeyValuePair> >=^{HeaderKeyValuePair}^{HeaderKeyValuePair}{__compressed_pair<net::HttpRequestHeaders::HeaderKeyValuePair *, std::__1::allocator<net::HttpRequestHeaders::HeaderKeyValuePair> >=^{HeaderKeyValuePair}}}}ii^{Delegate}{URLRequestStatus=ii}{HttpResponseInfo=BiBBBBB{ProxyServer=i{HostPortPair={basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}S}B}BBB{Time=q}{HostPortPair={basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}S}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}i{Time=q}{Time=q}{scoped_refptr<net::AuthChallengeInfo>=^{AuthChallengeInfo}}{scoped_refptr<net::SSLCertRequestInfo>=^{SSLCertRequestInfo}}{SSLInfo={scoped_refptr<net::X509Certificate>=^{X509Certificate}}{scoped_refptr<net::X509Certificate>=^{X509Certificate}}ISSiBBBBBi{vector<net::HashValue, std::__1::allocator<net::HashValue> >=^{HashValue}^{HashValue}{__compressed_pair<net::HashValue *, std::__1::allocator<net::HashValue> >=^{HashValue}}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}{vector<net::SignedCertificateTimestampAndStatus, std::__1::allocator<net::SignedCertificateTimestampAndStatus> >=^{SignedCertificateTimestampAndStatus}^{SignedCertificateTimestampAndStatus}{__compressed_pair<net::SignedCertificateTimestampAndStatus *, std::__1::allocator<net::SignedCertificateTimestampAndStatus> >=^{SignedCertificateTimestampAndStatus}}}iB{OCSPVerifyResult=ii}B}{scoped_refptr<net::HttpResponseHeaders>=^{HttpResponseHeaders}}{HttpVaryData={MD5Digest=[16C]}B}{scoped_refptr<net::IOBufferWithSize>=^{IOBufferWithSize}}}BBi{UploadProgress=QQ}iQiB{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}B{LeakTracker<net::URLRequest>=}B{AuthCredentials={basic_string<unsigned short, base::string16_internals::string16_char_traits, std::__1::allocator<unsigned short> >={__compressed_pair<std::__1::basic_string<unsigned short, base::string16_internals::string16_char_traits, std::__1::allocator<unsigned short> >::__rep, std::__1::allocator<unsigned short> >={__rep=(?={__long=^SQQ}{__short=[11S]{?=[1C]C}}{__raw=[3Q]})}}}{basic_string<unsigned short, base::string16_internals::string16_char_traits, std::__1::allocator<unsigned short> >={__compressed_pair<std::__1::basic_string<unsigned short, base::string16_internals::string16_char_traits, std::__1::allocator<unsigned short> >::__rep, std::__1::allocator<unsigned short> >={__rep=(?={__long=^SQQ}{__short=[11S]{?=[1C]C}}{__raw=[3Q]})}}}}{scoped_refptr<net::AuthChallengeInfo>=^{AuthChallengeInfo}}q{TimeTicks=q}{LoadTimingInfo=BI{Time=q}{TimeTicks=q}{TimeTicks=q}{TimeTicks=q}{ConnectTiming={TimeTicks=q}{TimeTicks=q}{TimeTicks=q}{TimeTicks=q}{TimeTicks=q}{TimeTicks=q}}{TimeTicks=q}{TimeTicks=q}{TimeTicks=q}{TimeTicks=q}{TimeTicks=q}{TimeTicks=q}}{ProxyServer=i{HostPortPair={basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}S}B}iB{NetworkTrafficAnnotationTag=i}{SocketTag=}{RepeatingCallback<void (net::HttpRawRequestHeaders)>={scoped_refptr<base::internal::BindStateBase>=^{BindStateBase}}}{RepeatingCallback<void (scoped_refptr<const net::HttpResponseHeaders>)>={scoped_refptr<base::internal::BindStateBase>=^{BindStateBase}}}B{WeakPtrFactory<net::URLRequest>={WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}Q}}24r^{RepeatingCallback<void (bool, const std::__1::basic_string<base::char16, base::string16_internals::string16_char_traits> &, const std::__1::basic_string<base::char16, base::string16_internals::string16_char_traits> &)>={scoped_refptr<base::internal::BindStateBase>=^{BindStateBase}}}32, name: didRecieveAuthChallenge:nativeRequest:callback:
- (void)didCreateNativeRequest:(struct URLRequest *)arg1;
- (void)didFinishLoading;
- (void)wasRedirectedToRequest:(id)arg1 nativeRequest:(struct URLRequest *)arg2 redirectResponse:(id)arg3;
- (void)didReceiveResponse:(id)arg1;
- (void)didLoadData:(id)arg1;
- (void)didFailWithNSErrorCode:(long long)arg1 netErrorCode:(int)arg2;
- (void)performBlockOnClientThread:(CDUnknownBlockType)arg1;
- (void)postBlockToClientThread:(CDUnknownBlockType)arg1;
- (void)runQueuedBlocksOnClientThread;
- (void)invalidate;
- (id)initWithProtocol:(id)arg1 clientThread:(id)arg2 runLoopMode:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

