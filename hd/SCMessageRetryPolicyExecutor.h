//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCRetrySignalListener.h"

@class NSDate, NSString, SCLazy, SCQueuePerformer;

@interface SCMessageRetryPolicyExecutor : NSObject <SCRetrySignalListener>
{
    SCLazy *_retryPolicyLazy;
    id <SCFriendsFeedRetryerProtocol> _feedRetryer;
    long long _didRetryCount;
    SCQueuePerformer *_performer;
    NSDate *_lastAutoRetryTimestamp;
    NSDate *_lastPolicyResetTimestamp;
}

- (void).cxx_destruct;
- (void)_retryIfNeededWithRetrySignal:(unsigned long long)arg1;
- (void)didReceiveSignal:(unsigned long long)arg1;
- (id)initWithRetryPolicyLazy:(id)arg1 feedRetryer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

