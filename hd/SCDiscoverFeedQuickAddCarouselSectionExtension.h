//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDiscoverFeedSectionExtension.h"

@class NSString, SCDiscoverFeedQuickAddCarouselSectionCreator;

@interface SCDiscoverFeedQuickAddCarouselSectionExtension : NSObject <SCDiscoverFeedSectionExtension>
{
    SCDiscoverFeedQuickAddCarouselSectionCreator *_sectionCreator;
}

- (void).cxx_destruct;
- (id)dataMutators;
- (id)loggingParsers;
- (id)collectionViewSectionCreators;
- (id)remoteSectionProviders;
- (id)localSectionDescriptorProviders;
- (id)initWithSnapchattersDataFetcher:(id)arg1 snapchattersDataMutator:(id)arg2 snapchattersDataTracker:(id)arg3 userInfoProvider:(id)arg4 storyPrivacySettingManager:(id)arg5 imageDownloader:(id)arg6 suggestionRankingCoordinator:(id)arg7 discoverFeedEventsAnnouncer:(id)arg8 userSession:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

