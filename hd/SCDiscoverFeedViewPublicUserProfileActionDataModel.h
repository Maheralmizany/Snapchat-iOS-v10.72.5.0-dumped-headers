//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCCheetahPublicUserStory, SCSnapchatter;

@interface SCDiscoverFeedViewPublicUserProfileActionDataModel : NSObject <NSCopying>
{
    SCSnapchatter *_snapchatter;
    SCCheetahPublicUserStory *_publicUserStory;
}

@property(readonly, copy, nonatomic) SCCheetahPublicUserStory *publicUserStory; // @synthesize publicUserStory=_publicUserStory;
@property(readonly, copy, nonatomic) SCSnapchatter *snapchatter; // @synthesize snapchatter=_snapchatter;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapchatter:(id)arg1 publicUserStory:(id)arg2;

@end

