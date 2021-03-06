//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureLensChallengeStickerOnPreview.h"

@class NSArray, NSString, SCLazy, SCLensChallengesSectionItem, SCPreviewConfiguration;

@interface SCFeatureLensChallengeStickerOnPreviewImpl : SCFeature <SCFeatureLensChallengeStickerOnPreview>
{
    SCLazy *_lensChallengeSchedule;
    id <SCPreviewFeatureStickerContainer> _stickerContainer;
    SCPreviewConfiguration *_configuration;
    SCLazy *_lensExplorerItemCreator;
    NSArray *_lensChallengesScheduleItems;
}

- (void).cxx_destruct;
- (void)_insertStickerForSongMetadata:(id)arg1 stickerId:(id)arg2;
- (void)attachLensChallengeStickerIfNeeded;
@property(readonly, nonatomic) NSString *lensChallengeName;
@property(readonly, nonatomic) SCLensChallengesSectionItem *lensChallengeScheduleItem;
- (void)activate;
- (id)initWithLensChallengeSchedule:(id)arg1 stickerContainer:(id)arg2 configuration:(id)arg3 lensExplorerItemCreator:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

