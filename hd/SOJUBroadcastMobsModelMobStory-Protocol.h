//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSNumber, NSString, SOJUBroadcastMobsModelMobStoryTypeExtraData;

@protocol SOJUBroadcastMobsModelMobStory <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSArray *usersWithAbilities;
@property(readonly, copy, nonatomic) NSString *typeVal;
@property(readonly, copy, nonatomic) NSString *creatorDisplayName;
@property(readonly, copy, nonatomic) NSString *creatorUsername;
@property(readonly, copy, nonatomic) NSNumber *createTimestamp;
@property(readonly, copy, nonatomic) NSString *subText;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) SOJUBroadcastMobsModelMobStoryTypeExtraData *typeExtraData;
@property(readonly, copy, nonatomic) NSString *creatorId;
@property(readonly, copy, nonatomic) NSString *idValue;
@end

