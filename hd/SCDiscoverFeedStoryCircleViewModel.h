//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCStoryThumbnailViewModel;

@interface SCDiscoverFeedStoryCircleViewModel : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCStoryThumbnailViewModel *_story_storyThumbnailViewModel;
}

+ (id)storyWithStoryThumbnailViewModel:(id)arg1;
- (void).cxx_destruct;
- (void)matchStory:(CDUnknownBlockType)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

