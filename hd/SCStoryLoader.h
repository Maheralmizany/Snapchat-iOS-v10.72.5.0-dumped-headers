//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCPreloadListener.h"
#import "SCTraceEnabled.h"

@class FBKVOController, NSString;

@interface SCStoryLoader : NSObject <SCPreloadListener, SCTraceEnabled>
{
    FBKVOController *_observeController;
}

- (void).cxx_destruct;
- (void)downloadSingleStory:(id)arg1 inFriendStories:(id)arg2;
- (void)forceRedownloadStory:(id)arg1 friendStories:(id)arg2 dueToError:(id)arg3;
- (void)preloadControllerDidLoadFromUserSession;
- (void)preloadController:(id)arg1 preloadModeDidChange:(long long)arg2;
- (void)loadStory:(id)arg1 numberOfSnaps:(unsigned long long)arg2 viewingType:(long long)arg3 loadContext:(long long)arg4 userInitiated:(_Bool)arg5 viewLocation:(long long)arg6;
- (void)removeObservers;
- (void)addObservers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

