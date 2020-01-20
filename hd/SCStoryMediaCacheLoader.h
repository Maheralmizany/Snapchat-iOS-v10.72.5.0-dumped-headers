//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatStoryLoader.h"

@interface SCStoryMediaCacheLoader : NSObject <SCChatStoryLoader>
{
}

+ (void)_loadStoryBundleFromStory:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)_shouldLoadMediaFromStory:(id)arg1 storyId:(id)arg2;
+ (id)findGroupStoryMatchingStoryId:(id)arg1;
+ (void)fetchStorySnapFromMediaCoordinatorWithUsername:(id)arg1 storySnapId:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)findMyStoryMatchingUsername:(id)arg1 storyId:(id)arg2;
- (void)findGroupStoryMediaForStoryId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)findStoryMediaForStoryId:(id)arg1 recipient:(id)arg2 sentByUser:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;

@end

