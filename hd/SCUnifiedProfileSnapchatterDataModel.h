//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCSnapchatter, SCUnifiedProfileSnapchatterStoryDataModel;

@interface SCUnifiedProfileSnapchatterDataModel : NSObject <NSCopying>
{
    SCSnapchatter *_snapchatter;
    long long _addFriendStatus;
    SCUnifiedProfileSnapchatterStoryDataModel *_storyDataModel;
}

@property(readonly, copy, nonatomic) SCUnifiedProfileSnapchatterStoryDataModel *storyDataModel; // @synthesize storyDataModel=_storyDataModel;
@property(readonly, nonatomic) long long addFriendStatus; // @synthesize addFriendStatus=_addFriendStatus;
@property(readonly, copy, nonatomic) SCSnapchatter *snapchatter; // @synthesize snapchatter=_snapchatter;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapchatter:(id)arg1 addFriendStatus:(long long)arg2 storyDataModel:(id)arg3;

@end
