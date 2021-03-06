//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SCSubstituteTextAnimationData;

@interface SCFriendsFeedSubstituteTextAnimationData : NSObject <NSCopying>
{
    NSString *_feedId;
    SCSubstituteTextAnimationData *_animationData;
}

@property(readonly, copy, nonatomic) SCSubstituteTextAnimationData *animationData; // @synthesize animationData=_animationData;
@property(readonly, copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFeedId:(id)arg1 animationData:(id)arg2;

@end

