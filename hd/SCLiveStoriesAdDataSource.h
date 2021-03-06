//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAdDataSource.h"

#import "SCOperaPlaylistAdInsertionProtocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, SCStoryAdStreamInfo;

@interface SCLiveStoriesAdDataSource : SCAdDataSource <SCOperaPlaylistAdInsertionProtocol>
{
    NSString *_currentGroupId;
    SCStoryAdStreamInfo *_currentAdStreamInfo;
    NSMutableDictionary *_groupIdToNextAdSlotPositionMap;
    long long _minSnapsFromNextAd;
    long long _maxViewedItemIndexInGroup;
    NSMutableSet *_viewedAdItemIds;
    NSMutableSet *_viewedNonAdItemIds;
}

- (void).cxx_destruct;
- (id)adSkipEvent;
- (id)adViewContextForGroup:(id)arg1;
- (_Bool)shouldInsertPlaylistItemGroup;
- (_Bool)shouldInsertPlaylistItem;
- (void)resetInsertionData;
- (id)mediaLoadContexts;
- (unsigned long long)adProductType;
- (id)targetingParameters;
- (void)_makeAdRequestIfNecessary;
- (_Bool)isAdContentLoopingForDataModel:(id)arg1;
- (id)extraPagePropertiesForDataModel:(id)arg1;
- (void)_incrementNextAdSlotPosition;
- (void)_insertAdIfNecessaryAfterItem:(id)arg1;
- (_Bool)_canShowAdAfterItem:(id)arg1;
- (void)stopViewingOptOutInterstitialForPlaylistItemGroup:(id)arg1;
- (void)stopViewingPlaylistItemGroup:(id)arg1;
- (void)stopViewingPlaylistItem:(id)arg1 isViewingLongform:(_Bool)arg2;
- (void)startViewingPlaylistItem:(id)arg1 context:(id)arg2;
- (void)startViewingPlaylistItemGroup:(id)arg1 previousItemGroup:(id)arg2 currentItem:(id)arg3;
- (void)teardown;
- (id)initWithUserSession:(id)arg1 viewLocation:(long long)arg2 adTrackerHelper:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

