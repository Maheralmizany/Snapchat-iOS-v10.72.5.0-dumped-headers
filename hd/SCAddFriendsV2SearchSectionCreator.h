//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionable.h"
#import "SCSearchSectionCreating.h"

@class NSDictionary, NSString, SCExperimentManager, SCLazy, SCPreferences;

@interface SCAddFriendsV2SearchSectionCreator : NSObject <SCSearchSectionCreating, SCActionable>
{
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_snapchattersDataSearcher;
    id <SCActionHandling> _actionHandler;
    SCLazy *_suggestionRankingCoordinator;
    SCLazy *_viewedIncomingFriendsTracker;
    id <SCImageDownloading> _imageDownloader;
    id <SCLegacyItemDownloading> _labelInfoProvider;
    SCLazy *_userInfoProvider;
    SCLazy *_storyPrivacySettingManager;
    double _displayTimestamp;
    SCExperimentManager *_experimentManager;
    SCPreferences *_userPreferences;
    long long _placement;
    SCLazy *_addFriendsViewModelsDecorator;
    NSDictionary *_collectionViewSectionGenerators;
}

@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (id)sectionForDescriptor:(id)arg1;
- (id)initWithSnapchattersDataFetcher:(id)arg1 snapchattersDataSearcher:(id)arg2 snapchattersDataTracker:(id)arg3 actionHandler:(id)arg4 suggestionRankingCoordinator:(id)arg5 viewedIncomingFriendsTracker:(id)arg6 imageDownloader:(id)arg7 labelInfoProvider:(id)arg8 userInfoProvider:(id)arg9 storyPrivacySettingManager:(id)arg10 displayTimestamp:(double)arg11 userSession:(id)arg12 placement:(long long)arg13 addFriendsViewModelsDecorator:(id)arg14 collectionViewSectionGenerators:(id)arg15;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
