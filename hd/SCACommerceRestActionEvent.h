//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCACommerceEventBase.h"

@interface SCACommerceRestActionEvent : SCACommerceEventBase
{
}

- (void)setStatusCode:(long long)arg1;
- (void)setRequestResult:(_Bool)arg1;
- (void)setLatency:(long long)arg1;
- (void)setEndpoint:(long long)arg1;
- (void)setCommerceErrorCode:(id)arg1;
- (void)setAction:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

