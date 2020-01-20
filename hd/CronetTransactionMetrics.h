//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLSessionTaskTransactionMetrics.h"

@class NSDate, NSString, NSURLRequest, NSURLResponse;

@interface CronetTransactionMetrics : NSURLSessionTaskTransactionMetrics
{
    _Bool _proxyConnection;
    _Bool _reusedConnection;
    NSURLRequest *_request;
    NSURLResponse *_response;
    NSDate *_fetchStartDate;
    NSDate *_domainLookupStartDate;
    NSDate *_domainLookupEndDate;
    NSDate *_connectStartDate;
    NSDate *_secureConnectionStartDate;
    NSDate *_secureConnectionEndDate;
    NSDate *_connectEndDate;
    NSDate *_requestStartDate;
    NSDate *_requestEndDate;
    NSDate *_responseStartDate;
    NSDate *_responseEndDate;
    NSString *_networkProtocolName;
    long long _resourceFetchType;
}

@property long long resourceFetchType; // @synthesize resourceFetchType=_resourceFetchType;
@property(getter=isReusedConnection) _Bool reusedConnection; // @synthesize reusedConnection=_reusedConnection;
@property(getter=isProxyConnection) _Bool proxyConnection; // @synthesize proxyConnection=_proxyConnection;
@property(copy) NSString *networkProtocolName; // @synthesize networkProtocolName=_networkProtocolName;
@property(copy) NSDate *responseEndDate; // @synthesize responseEndDate=_responseEndDate;
@property(copy) NSDate *responseStartDate; // @synthesize responseStartDate=_responseStartDate;
@property(copy) NSDate *requestEndDate; // @synthesize requestEndDate=_requestEndDate;
@property(copy) NSDate *requestStartDate; // @synthesize requestStartDate=_requestStartDate;
@property(copy) NSDate *connectEndDate; // @synthesize connectEndDate=_connectEndDate;
@property(copy) NSDate *secureConnectionEndDate; // @synthesize secureConnectionEndDate=_secureConnectionEndDate;
@property(copy) NSDate *secureConnectionStartDate; // @synthesize secureConnectionStartDate=_secureConnectionStartDate;
@property(copy) NSDate *connectStartDate; // @synthesize connectStartDate=_connectStartDate;
@property(copy) NSDate *domainLookupEndDate; // @synthesize domainLookupEndDate=_domainLookupEndDate;
@property(copy) NSDate *domainLookupStartDate; // @synthesize domainLookupStartDate=_domainLookupStartDate;
@property(copy) NSDate *fetchStartDate; // @synthesize fetchStartDate=_fetchStartDate;
@property(copy) NSURLResponse *response; // @synthesize response=_response;
@property(copy) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

