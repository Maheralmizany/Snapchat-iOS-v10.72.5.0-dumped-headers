//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCStoriesPlaybackAppStorySequence, SCStoriesPlaybackCustomStorySequence, SCStoriesPlaybackOurStorySequence, SCStoriesPlaybackUserStorySequence;

@interface SCStoriesOperaPlaybackSequence : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCStoriesPlaybackUserStorySequence *_friendMergedStory_playbackSequence;
    SCStoriesPlaybackCustomStorySequence *_groupChatStory_playbackSequence;
    SCStoriesPlaybackCustomStorySequence *_customStory_playbackSequence;
    SCStoriesPlaybackOurStorySequence *_ourStory_playbackSequence;
    SCStoriesPlaybackAppStorySequence *_appStory_playbackSequence;
}

+ (id)ourStoryWithPlaybackSequence:(id)arg1;
+ (id)groupChatStoryWithPlaybackSequence:(id)arg1;
+ (id)friendMergedStoryWithPlaybackSequence:(id)arg1;
+ (id)customStoryWithPlaybackSequence:(id)arg1;
+ (id)appStoryWithPlaybackSequence:(id)arg1;
- (void).cxx_destruct;
- (void)matchFriendMergedStory:(CDUnknownBlockType)arg1 groupChatStory:(CDUnknownBlockType)arg2 customStory:(CDUnknownBlockType)arg3 ourStory:(CDUnknownBlockType)arg4 appStory:(CDUnknownBlockType)arg5;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)xLogObjectInfo;

@end
