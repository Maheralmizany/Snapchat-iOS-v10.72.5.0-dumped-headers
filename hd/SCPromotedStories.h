//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FriendStories.h"

@class NSArray, NSString;

@interface SCPromotedStories : FriendStories
{
    _Bool _isContentLooping;
    NSString *_adId;
    NSArray *_snapStories;
}

@property(readonly, nonatomic) NSArray *snapStories; // @synthesize snapStories=_snapStories;
@property(readonly, copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(readonly, nonatomic) _Bool isContentLooping; // @synthesize isContentLooping=_isContentLooping;
- (void).cxx_destruct;
- (id)initWithCheetahPromotedStory:(id)arg1;

@end

