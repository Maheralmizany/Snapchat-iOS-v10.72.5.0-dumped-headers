//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSString;

@interface SCStoryLogger : NSObject
{
    NSString *_currentViewNextStorySnapEventUniqueId;
    NSMutableSet *_viewedStoriesUsernames;
    double _timeOfViewingStories;
}

+ (id)sharedInstance;
@property(nonatomic) double timeOfViewingStories; // @synthesize timeOfViewingStories=_timeOfViewingStories;
@property(retain, nonatomic) NSMutableSet *viewedStoriesUsernames; // @synthesize viewedStoriesUsernames=_viewedStoriesUsernames;
- (void).cxx_destruct;
- (void)logStoryReadyToPlay:(id)arg1;
- (void)logEndViewingStory:(id)arg1;
- (void)logStartViewingFriendStories:(id)arg1;
- (void)logDownloadStoryEnd:(id)arg1 success:(_Bool)arg2 numBytes:(unsigned long long)arg3 additionalParams:(id)arg4;
- (void)applicationDidEnterBackground:(id)arg1;
- (id)init;

@end

