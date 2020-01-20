//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCUnifiedProfileMyStoriesDataModel : NSObject <NSCopying>
{
    _Bool _hasStories;
    _Bool _hasUnviewedStories;
    unsigned long long _postingStories;
    unsigned long long _failedPosts;
    unsigned long long _totalViewCount;
    unsigned long long _totalScreenshotCount;
    NSString *_storyId;
    long long _storyType;
}

@property(readonly, nonatomic) long long storyType; // @synthesize storyType=_storyType;
@property(readonly, copy, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
@property(readonly, nonatomic) unsigned long long totalScreenshotCount; // @synthesize totalScreenshotCount=_totalScreenshotCount;
@property(readonly, nonatomic) unsigned long long totalViewCount; // @synthesize totalViewCount=_totalViewCount;
@property(readonly, nonatomic) unsigned long long failedPosts; // @synthesize failedPosts=_failedPosts;
@property(readonly, nonatomic) unsigned long long postingStories; // @synthesize postingStories=_postingStories;
@property(readonly, nonatomic) _Bool hasUnviewedStories; // @synthesize hasUnviewedStories=_hasUnviewedStories;
@property(readonly, nonatomic) _Bool hasStories; // @synthesize hasStories=_hasStories;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHasStories:(_Bool)arg1 hasUnviewedStories:(_Bool)arg2 postingStories:(unsigned long long)arg3 failedPosts:(unsigned long long)arg4 totalViewCount:(unsigned long long)arg5 totalScreenshotCount:(unsigned long long)arg6 storyId:(id)arg7 storyType:(long long)arg8;

@end

