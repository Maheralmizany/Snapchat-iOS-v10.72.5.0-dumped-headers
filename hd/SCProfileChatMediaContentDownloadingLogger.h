//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCEventListener.h"

@class NSMutableDictionary, NSMutableSet, NSString, SCQueuePerformer;

@interface SCProfileChatMediaContentDownloadingLogger : NSObject <SCEventListener>
{
    long long _messagingInfra;
    SCQueuePerformer *_performer;
    NSMutableSet *_mediaIdsToload;
    NSMutableSet *_mediaIdsLoadedInCache;
    NSMutableSet *_mediaIdsLoadedThumbnail;
    NSMutableSet *_mediaIdsLoadedRawData;
    NSMutableSet *_mediaIdsFailedToLoad;
    NSMutableSet *_mediaIdsCanceledToLoad;
    NSMutableDictionary *_mediaIdToStartLoadingTime;
}

- (void).cxx_destruct;
- (void)_didCloseProfile;
- (void)_didCancelToLoadMediaWithId:(id)arg1;
- (void)_didFailToLoadMediaWithId:(id)arg1;
- (void)_didLoadRawMediaFromNetworkWithId:(id)arg1;
- (void)_didLoadMediaThumbnailFromNetworkWithId:(id)arg1;
- (void)_didLoadMediaFromCacheWithId:(id)arg1;
- (void)_willStartToLoadMediaWithId:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)initWithMessagingInfra:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

