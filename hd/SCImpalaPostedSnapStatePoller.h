//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCanceling.h"

@class NSObject<OS_dispatch_queue>, NSString, NSTimer, SCUserSession;

@interface SCImpalaPostedSnapStatePoller : NSObject <SCCanceling>
{
    SCUserSession *_userSession;
    NSString *_businessId;
    NSString *_clientId;
    double _interval;
    NSObject<OS_dispatch_queue> *_completionQueue;
    CDUnknownBlockType _snapPostedCompletion;
    NSTimer *_timer;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)startPolling;
- (void)_timerDidTick;
- (void)_scheduleTimer;
- (id)initWithUserSession:(id)arg1 businessId:(id)arg2 clientId:(id)arg3 interval:(double)arg4 completionQueue:(id)arg5 snapPostedCompletion:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
