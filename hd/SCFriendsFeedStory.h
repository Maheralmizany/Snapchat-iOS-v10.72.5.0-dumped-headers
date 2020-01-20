//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSString, SCStoriesThumbnailInfo;

@interface SCFriendsFeedStory : NSObject <NSCopying>
{
    _Bool _hasActiveStories;
    _Bool _hasUnviewedStories;
    NSString *_storyID;
    long long _storyType;
    SCStoriesThumbnailInfo *_thumbnail;
    NSDate *_lastStoryUpdateTimestamp;
    NSDate *_lastStoryViewedTimestamp;
    long long _storyContentType;
}

@property(readonly, nonatomic) long long storyContentType; // @synthesize storyContentType=_storyContentType;
@property(readonly, copy, nonatomic) NSDate *lastStoryViewedTimestamp; // @synthesize lastStoryViewedTimestamp=_lastStoryViewedTimestamp;
@property(readonly, copy, nonatomic) NSDate *lastStoryUpdateTimestamp; // @synthesize lastStoryUpdateTimestamp=_lastStoryUpdateTimestamp;
@property(readonly, nonatomic) _Bool hasUnviewedStories; // @synthesize hasUnviewedStories=_hasUnviewedStories;
@property(readonly, nonatomic) _Bool hasActiveStories; // @synthesize hasActiveStories=_hasActiveStories;
@property(readonly, copy, nonatomic) SCStoriesThumbnailInfo *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, nonatomic) long long storyType; // @synthesize storyType=_storyType;
@property(readonly, copy, nonatomic) NSString *storyID; // @synthesize storyID=_storyID;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStoryID:(id)arg1 storyType:(long long)arg2 thumbnail:(id)arg3 hasActiveStories:(_Bool)arg4 hasUnviewedStories:(_Bool)arg5 lastStoryUpdateTimestamp:(id)arg6 lastStoryViewedTimestamp:(id)arg7 storyContentType:(long long)arg8;

@end

