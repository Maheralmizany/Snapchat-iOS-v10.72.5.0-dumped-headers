//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSnapAdsNetworkUserAgentAdapter.h"

@class NSString;

@interface SCSnapAdsNetworkUserAgent : NSObject <SCSnapAdsNetworkUserAgentAdapter>
{
    NSString *_userAgent;
}

- (void).cxx_destruct;
- (id)userAgent;
- (id)initWithApplicationInfo:(id)arg1 deviceAdapter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

