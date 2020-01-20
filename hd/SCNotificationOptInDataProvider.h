//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCEventAnnouncing.h"
#import "SCEventListener.h"

@class NSMutableSet, NSString, SCCreatorSettingsDataFetcher, SCCreatorSettingsDataTracker, SCEventListenerAnnouncer, SCLazy, SCQueuePerformer;

@interface SCNotificationOptInDataProvider : NSObject <SCEventListener, SCEventAnnouncing>
{
    SCCreatorSettingsDataFetcher *_creatorSettingFetcher;
    SCCreatorSettingsDataTracker *_creatorSettingTracker;
    SCLazy *_lazySnapchattersFetcher;
    NSMutableSet *_optedInUsernames;
    SCQueuePerformer *_dataAccessPerformer;
    SCEventListenerAnnouncer *_eventAnnouncer;
    _Bool _computedInitialSetAlready;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_announceOptInDoorbellClickEventWithData:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)_updateOptinUserNameSetWithSnapchatter:(id)arg1 isOptedIn:(_Bool)arg2;
- (void)_saveUsernamesToSet:(id)arg1;
- (void)initOptInUsernameSetIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isFriendNotificationOptedInByUsername:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithCreatorSettingFetcher:(id)arg1 creatorSettingsDataTracker:(id)arg2 lazySnapchattersFetcher:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

