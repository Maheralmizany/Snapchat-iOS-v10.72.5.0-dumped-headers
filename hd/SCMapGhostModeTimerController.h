//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTraceEnabled.h"

@class NSString, NSTimer, SCMapUserPreferences, SCQueuePerformer;

@interface SCMapGhostModeTimerController : NSObject <SCTraceEnabled>
{
    SCMapUserPreferences *_mapUserPreferences;
    SCQueuePerformer *_performer;
    NSTimer *_foregroundTimer;
    double _retryRequestInterval;
    _Bool _forceSync;
    id <SCMapGhostModeTimerControllerDelegate> _delegate;
}

@property _Bool forceSync; // @synthesize forceSync=_forceSync;
@property(nonatomic) __weak id <SCMapGhostModeTimerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_foregroundTimerDidFire:(id)arg1;
- (void)_startForegroundTimerWithDuration:(double)arg1;
- (void)_exitGhostMode;
- (void)_exitGhostModeIfTimerExpired;
- (void)_updateTimerWithRemainingDuration:(double)arg1;
- (void)invalidateTimer;
- (void)startTimerWithDuration:(double)arg1;
- (void)exitGhostModeIfTimerExpired;
- (_Bool)needsSync;
- (double)remainingDuration;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)initWithMapUserPreferences:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
