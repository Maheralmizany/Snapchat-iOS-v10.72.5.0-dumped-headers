//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDataCoordinating.h"

@class NSString, SCDataCoordinatorListenerAnnouncer, SCEventListenerAnnouncer, SCUserSession;

@interface SCDiscoverFeedManagementFullScreenViewDataCoordinator : NSObject <SCDataCoordinating>
{
    SCDataCoordinatorListenerAnnouncer *_dataCoordinatorListenerAnnouncer;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCUserSession *_userSession;
}

+ (id)dataCoordinatorIdentifier;
+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_announceUpdateWithDataRequest:(id)arg1;
- (void)handleDataRequest:(id)arg1;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
