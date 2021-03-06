//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface SCStoriesPlaybackAppStorySequence : NSObject <NSCopying>
{
    NSString *_appStoryId;
    NSString *_displayName;
    NSArray *_storySnaps;
}

@property(readonly, copy, nonatomic) NSArray *storySnaps; // @synthesize storySnaps=_storySnaps;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *appStoryId; // @synthesize appStoryId=_appStoryId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAppStoryId:(id)arg1 displayName:(id)arg2 storySnaps:(id)arg3;

@end

