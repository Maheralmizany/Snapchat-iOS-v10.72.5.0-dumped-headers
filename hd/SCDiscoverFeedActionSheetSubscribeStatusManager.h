//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCEventAnnouncing.h"

@class NSString, SCDiscoverFeedInteractionHistoryManager, SCDiscoverFeedSectionKey, SCEventListenerAnnouncer;

@interface SCDiscoverFeedActionSheetSubscribeStatusManager : NSObject <SCEventAnnouncing>
{
    SCEventListenerAnnouncer *_announcer;
    unsigned long long _currentSubscribeState;
    unsigned long long _startingSubscribeState;
    unsigned long long _storyDedupeFp;
    id <SCDiscoverFeedDataFetching> _discoverFeedDataFetcher;
    id <SCDiscoverFeedDataMutating> _discoverFeedDataMutator;
    SCDiscoverFeedInteractionHistoryManager *_interactionHistoryManager;
    CDUnknownFunctionPointerType _subscribeStatusUpdateFunc;
    SCDiscoverFeedSectionKey *_sectionKey;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_handleChangeInSubscribeStatusForStory:(id)arg1 isSubscribed:(_Bool)arg2;
- (unsigned long long)subscribeStateForStoryDedupeFp:(unsigned long long)arg1;
- (void)updateStoryDedupeFp:(unsigned long long)arg1 subscribeState:(unsigned long long)arg2;
- (id)initWithDiscoverFeedDataFetcher:(id)arg1 discoverFeedDataMutator:(id)arg2 interactionHistoryManager:(id)arg3 subscribeState:(unsigned long long)arg4 storyDedupeFp:(unsigned long long)arg5 sectionKey:(id)arg6 subscribeStatusUpdateFunc:(CDUnknownFunctionPointerType)arg7;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

