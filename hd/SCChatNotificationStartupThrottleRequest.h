//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCContextAwareThrottleRequest.h"

@class NSString;

@interface SCChatNotificationStartupThrottleRequest : NSObject <SCContextAwareThrottleRequest>
{
    unsigned long long _targetScreen;
}

@property(nonatomic) unsigned long long targetScreen; // @synthesize targetScreen=_targetScreen;
- (_Bool)isEqual:(id)arg1;
- (id)requestID;
- (_Bool)shouldThrottle:(long long)arg1;
- (id)initWithTargetScreen:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

