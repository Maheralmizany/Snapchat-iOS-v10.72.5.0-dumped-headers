//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FriendStories, SCMTPointOfInterest, SCMapLoggerSession, SCUserSession;

@interface SCMapTapToPlayPOIMediaFetcher : NSObject
{
    double _mapZoomLevel;
    SCMapLoggerSession *_loggerSession;
    SCUserSession *_userSession;
    id <SCCanceling> _manifestRequest;
    CDUnknownBlockType _mediaCompletion;
    _Bool _started;
    _Bool _cancelled;
    SCMTPointOfInterest *_poi;
    FriendStories *_friendStories;
}

+ (id)reportedStoryIds;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic) FriendStories *friendStories; // @synthesize friendStories=_friendStories;
@property(readonly, nonatomic) SCMTPointOfInterest *poi; // @synthesize poi=_poi;
- (void).cxx_destruct;
- (id)description;
- (id)_previewFriendStoriesForPoi:(id)arg1 isOnboarding:(_Bool)arg2;
- (void)_safeMediaCompletionWithStory:(id)arg1 result:(unsigned long long)arg2;
- (void)cancelMediaDownloads;
- (void)cancelFetch;
- (void)_fetchManifestAndFetchFirstStory:(_Bool)arg1 isTappedPOI:(_Bool)arg2;
- (void)_fetchStoryMedia:(id)arg1 isTappedPOI:(_Bool)arg2;
- (void)fetchManifestAndFirstStoryMediaForTappedPOI:(_Bool)arg1 storyMediaRequestCompletion:(CDUnknownBlockType)arg2;
- (id)initWithPOI:(id)arg1 mapZoomLevel:(double)arg2 isOnboarding:(_Bool)arg3 loggerSession:(id)arg4 userSession:(id)arg5;

@end

