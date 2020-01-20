//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLazy;

@interface SCDiscoverFeedStoriesServices : NSObject
{
    SCLazy *_discoverFeedFriendStoriesDataCoordinator;
    SCLazy *_publisherStoriesMetadataCoordinator;
    SCLazy *_discoverFeedDataCoordinator;
    SCLazy *_discoverFeedBadgeCoordinator;
    SCLazy *_discoverFeedBadgeReadyStateManager;
    SCLazy *_replayManager;
    id <SCDiscoverFeedSectionExtension> _sectionExtension;
}

@property(readonly, nonatomic) id <SCDiscoverFeedSectionExtension> sectionExtension; // @synthesize sectionExtension=_sectionExtension;
@property(readonly, nonatomic) SCLazy *replayManager; // @synthesize replayManager=_replayManager;
@property(readonly, nonatomic) SCLazy *discoverFeedBadgeReadyStateManager; // @synthesize discoverFeedBadgeReadyStateManager=_discoverFeedBadgeReadyStateManager;
@property(readonly, nonatomic) SCLazy *discoverFeedBadgeCoordinator; // @synthesize discoverFeedBadgeCoordinator=_discoverFeedBadgeCoordinator;
@property(readonly, nonatomic) SCLazy *discoverFeedDataCoordinator; // @synthesize discoverFeedDataCoordinator=_discoverFeedDataCoordinator;
@property(readonly, nonatomic) SCLazy *publisherStoriesMetadataCoordinator; // @synthesize publisherStoriesMetadataCoordinator=_publisherStoriesMetadataCoordinator;
@property(readonly, nonatomic) SCLazy *discoverFeedFriendStoriesDataCoordinator; // @synthesize discoverFeedFriendStoriesDataCoordinator=_discoverFeedFriendStoriesDataCoordinator;
- (void).cxx_destruct;
- (id)initWithDiscoverFeedFriendStoriesDataCoordinator:(id)arg1 publisherStoriesMetadataCoordinator:(id)arg2 replayManager:(id)arg3 sectionExtension:(id)arg4 discoverFeedDataCoordinator:(id)arg5 discoverFeedBadgeCoordinator:(id)arg6 discoverFeedBadgeReadyStateManager:(id)arg7;

@end
