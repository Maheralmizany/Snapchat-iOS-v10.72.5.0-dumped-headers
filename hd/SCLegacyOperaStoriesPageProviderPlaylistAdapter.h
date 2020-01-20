//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCStoriesOperaPageProvider.h"

@class NSString, SCLegacyStoriesOperaDataSource;

@interface SCLegacyOperaStoriesPageProviderPlaylistAdapter : NSObject <SCStoriesOperaPageProvider>
{
    id <SCOperaPlaylistItemController> _playlistItemController;
    SCLegacyStoriesOperaDataSource *_storiesDataSource;
}

- (void).cxx_destruct;
- (_Bool)isLastFriendStoriesToDisplay:(id)arg1;
- (_Bool)isLastStoryInFriendStories:(id)arg1;
- (void)skipStory:(id)arg1;
- (void)removeInjectedFriendStories:(id)arg1;
- (void)injectFriendStories:(id)arg1;
- (void)injectStory:(id)arg1 afterStory:(id)arg2;
- (void)didStartToPlayStory:(id)arg1;
- (unsigned long long)indexOfStoryRelativeToInitialStory:(id)arg1;
- (unsigned long long)indexOfFriendStoriesInPlaylist:(id)arg1;
- (unsigned long long)friendsPlayListCount;
- (id)firstStoryToDisplay;
- (id)firstPlaylistItemIDToDisplay;
- (void)updatePageForStory:(id)arg1;
- (void)updatePageForID:(id)arg1;
- (id)initWithPlaylistItemController:(id)arg1 storiesDataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

