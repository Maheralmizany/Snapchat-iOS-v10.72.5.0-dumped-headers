//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, SCSnapAdsIdentifier;

@interface SCAdTrackPersistenceRequestBuilder : NSObject
{
    NSString *_url;
    NSString *_userAgent;
    long long _type;
    NSDictionary *_overrideHeaders;
    id _body;
    NSString *_key;
    NSDictionary *_cookies;
    SCSnapAdsIdentifier *_snapAdsId;
    NSString *_adType;
    unsigned long long _requestType;
    unsigned long long _adProductType;
}

+ (id)withAdTrackPersistenceRequest:(id)arg1;
- (void).cxx_destruct;
- (id)setAdProductType:(unsigned long long)arg1;
- (id)setRequestType:(unsigned long long)arg1;
- (id)setAdType:(id)arg1;
- (id)setSnapAdsId:(id)arg1;
- (id)setCookies:(id)arg1;
- (id)setKey:(id)arg1;
- (id)setBody:(id)arg1;
- (id)setOverrideHeaders:(id)arg1;
- (id)setType:(long long)arg1;
- (id)setUserAgent:(id)arg1;
- (id)setUrl:(id)arg1;
- (id)build;

@end

