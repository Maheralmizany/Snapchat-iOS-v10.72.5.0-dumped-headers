//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LSABaseComponent.h"

#import "LSAAnalyticsListener.h"

@class LSAAnalyticsComponentListenerAnnouncer, NSString;

@interface LSAAnalyticsComponent : LSABaseComponent <LSAAnalyticsListener>
{
    LSAAnalyticsComponentListenerAnnouncer *_analyticsComponentAnnouncer;
    struct shared_ptr<LSAAnalyticsDelegateWrapper> _analyticsDelegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didChangeContent:(id)arg1;
- (void)didPrepareEffectAnalyticEventsForEffectId:(id)arg1 analyticsManager:(struct AnalyticsManager *)arg2;
- (void)didPreparePerformanceReport:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)setCoreManager:(shared_ptr_6e078de4)arg1 announcer:(id)arg2 configuration:(id)arg3;
- (id)initWithPerformer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

