//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSnappablesAnalyticsEventController.h"

@class NSDate, NSDictionary, NSString, SCOperaEventListenerAnnouncer;

@interface SCSnappablesAnalyticsController : NSObject <SCSnappablesAnalyticsEventController>
{
    NSDictionary *_operaProperties;
    SCOperaEventListenerAnnouncer *_eventAnnouncer;
    id <SCSnappablesReplySessionLogger> _lensLogger;
    _Bool _didShowSnappablesUI;
    _Bool _didShowReplyCamera;
    NSDate *_startSessionDate;
}

+ (long long)_actionSourceTypeFromDisplayType:(unsigned long long)arg1;
+ (long long)_snappablesSourceTypeFromPageSourceType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)_lensID;
- (id)_snappable;
- (void)setOperaProperties:(id)arg1;
- (void)_logSnappableEvent:(id)arg1 funnelID:(id)arg2;
- (void)_logSnappableEvent:(id)arg1;
- (void)_logSnappablesInviteShownEventWithSourceType:(long long)arg1 snappablesSourceType:(long long)arg2;
- (void)logDismissed;
- (void)logLeftCameraAfterSending;
- (void)logLeftCameraWithoutSending;
- (void)logEnteredCamera;
- (void)logDisplayedWithType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2;
- (void)logEnterSession;
- (id)initWithEventAnnouncer:(id)arg1 lensLogger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

