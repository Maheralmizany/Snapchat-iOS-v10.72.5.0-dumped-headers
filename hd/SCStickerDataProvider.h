//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCStickerPickerMenuDataSource.h"
#import "SCStickerPickerV2IconsDataSource.h"

@class NSArray<SCStickerProtocol>, NSMutableArray, NSString, SCEmojiSet, SCInfoStickerDataProvider, SCUserSession;

@interface SCStickerDataProvider : NSObject <SCStickerPickerMenuDataSource, SCStickerPickerV2IconsDataSource>
{
    NSMutableArray *_stickerSuperCategories;
    SCEmojiSet *_emojiSet;
    SCUserSession *_userSession;
    long long _numRecentlyUsedStickers;
    long long _target;
    SCInfoStickerDataProvider *_infoStickerDataProvider;
    id <SCStickerRecommendationDataProviding> _stickerRecommendationDataProvider;
    _Bool _hideAnimatedStickers;
    id <SCBitmojiAvatarBuilderRouterDelegate> _bitmojiAvatarBuilderRouterDelegate;
    id <SCStickerPickerLayoutSource> _layoutSource;
    _Bool _shouldDisplayBitmojiLinkingPage;
    NSArray<SCStickerProtocol> *_customStickers;
}

@property(readonly, nonatomic) NSArray<SCStickerProtocol> *customStickers; // @synthesize customStickers=_customStickers;
@property(readonly, nonatomic) _Bool shouldDisplayBitmojiLinkingPage; // @synthesize shouldDisplayBitmojiLinkingPage=_shouldDisplayBitmojiLinkingPage;
- (void).cxx_destruct;
- (id)stickerCategoryForIndexPath:(id)arg1;
- (id)stickerSuperCategoryForIndex:(long long)arg1;
- (long long)numberOfCategoriesInSuperCategory:(long long)arg1;
- (long long)numberOfSuperCategories;
- (id)topicsInfoToDisplayForTopicStickerInPickerMenu:(id)arg1;
- (id)venuesInfoToDisplayForVenueStickerInPickerMenu:(id)arg1;
- (id)layoutSource;
- (id)_superCategoryForCustomSticker:(long long)arg1;
- (long long)superCategoryTypeAtIndexPath:(id)arg1;
- (_Bool)stickerPickerMenuHasSuperCategoryType:(long long)arg1 atIndex:(id)arg2;
- (_Bool)stickerPickerMenuHasSuperCategoryType:(long long)arg1;
- (id)updateRecentPage:(id)arg1;
- (id)stickerPickerMenu:(id)arg1 emptyStateViewForIndexPath:(id)arg2 frame:(struct CGRect)arg3 sourceType:(unsigned long long)arg4;
- (_Bool)stickerPickerMenu:(id)arg1 shouldDisplayEmptyStateForIndexPath:(id)arg2 sourceType:(unsigned long long)arg3;
- (id)stickerPickerMenu:(id)arg1 stickerCategoryForIndexPath:(id)arg2;
- (id)stickerPickerMenu:(id)arg1 stickerSuperCategoryForIndex:(long long)arg2;
- (long long)stickerPickerMenu:(id)arg1 numberOfCategoriesInSuperCategory:(long long)arg2;
- (long long)numberOfSuperCategoriesInStickerPickerMenu:(id)arg1;
- (_Bool)_shouldExcludeStickerTypeFromRecents:(unsigned long long)arg1;
- (id)_recentlyUsedStickerSuperCategory:(id)arg1 recommendedStickers:(id)arg2 target:(long long)arg3;
- (id)_superCategoryFromBitmojiPackages:(id)arg1 target:(long long)arg2;
- (id)_bloopStickerSuperCategory;
- (_Bool)_isBloopsFeatureEnabled;
- (id)_bitmojiStickerSuperCategoryFromUser:(id)arg1 chatStickerManager:(id)arg2 target:(long long)arg3;
- (unsigned long long)_indexOfSuperCategoryWithType:(long long)arg1;
- (id)_insertOrUpdateStickerSuperCategory:(id)arg1;
- (id)_removeStickerSuperCategoryWithType:(long long)arg1;
- (id)_addOrInsertSnapchatAndSnapartSuperCategories:(id)arg1 target:(long long)arg2;
- (unsigned long long)findStickerSuperCategory:(long long)arg1;
- (id)_emojiSuperCategoryWithTarget:(long long)arg1;
- (id)_hometabSuperCategory:(id)arg1;
- (void)_addStickersWithStickerManager:(id)arg1 user:(id)arg2;
- (id)updateBloopsCategories;
- (id)updateCustomStickers;
- (id)updateRecentsWithUser:(id)arg1 recommendedStickers:(id)arg2;
- (id)updateSearchPageDataSource:(id)arg1;
- (id)_searchSuperCategoryWithSearchPageDataSource:(id)arg1;
- (id)updateRecentPageDataSource:(id)arg1;
- (id)_recentsSuperCategoryWithStickersDataSource:(id)arg1;
- (id)updateHomeTabWithStickerMananger:(id)arg1;
- (id)updateUnlockedStickerPacks:(id)arg1;
- (id)updateBitmojiWithUser:(id)arg1 stickerManager:(id)arg2;
- (id)updateSnapchatAndSnapartStickers:(id)arg1;
- (id)initForChatWithUser:(id)arg1 recentPageDataSource:(id)arg2 searchPageDataSource:(id)arg3 chatStickerManager:(id)arg4 customStickers:(id)arg5 userSession:(id)arg6 bitmojiAvatarBuilderRouterDelegate:(id)arg7;
- (id)initForTarget:(long long)arg1 withUser:(id)arg2 chatStickerManager:(id)arg3 userSession:(id)arg4 infoStickerDataProvider:(id)arg5 stickerRecommendationDataProvider:(id)arg6 hideAnimatedStickers:(_Bool)arg7 bitmojiAvatarBuilderRouterDelegate:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

