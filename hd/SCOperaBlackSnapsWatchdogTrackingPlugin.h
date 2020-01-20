//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOperaPlaylistEventTrackerPlugin.h"

@class NSDictionary, NSMutableSet, SCOperaViewController;

@interface SCOperaBlackSnapsWatchdogTrackingPlugin : SCOperaPlaylistEventTrackerPlugin
{
    _Bool _pluginEnabled;
    SCOperaViewController *_operaViewController;
    NSDictionary *_context;
    _Bool _isMonitoring;
    unsigned long long _numberOfBlackSnapsDetected;
    NSMutableSet *_accumulatedImagesPerView;
    _Bool _isStartedPlaying;
    CDUnknownBlockType _didDetectBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didDetectBlock; // @synthesize didDetectBlock=_didDetectBlock;
- (void).cxx_destruct;
- (void)_scheduleNextCheck;
- (void)_notifiyBlackSnapOccurred:(long long)arg1;
- (void)_handleBlackView:(long long)arg1;
- (void)check;
- (void)_resetState;
- (void)_stopMonitoring;
- (void)_startMonitoring;
- (_Bool)_shouldIgnoreMonitoringForContext:(id)arg1;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (void)teardown;
- (void)setOperaViewController:(id)arg1;
- (void)setPlaylistItemController:(id)arg1;
- (void)dealloc;
- (id)init;

@end

