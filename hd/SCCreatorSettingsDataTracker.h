//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCEventAnnouncing.h"

@class NSString, SCEventListenerAnnouncer, SCQueuePerformer;

@interface SCCreatorSettingsDataTracker : NSObject <SCEventAnnouncing>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCQueuePerformer *_performer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_announceUpdateEvent:(id)arg1 extraData:(id)arg2;
- (void)creatorSettingsDidUpdate:(id)arg1 event:(id)arg2;
- (void)creatorSettingsDataStoreDidRefresh;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

