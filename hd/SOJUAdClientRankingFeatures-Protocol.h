//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@protocol SOJUAdClientRankingFeatures <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *totalUniqueAdsViewed;
@property(readonly, copy, nonatomic) NSNumber *isLastSnapVideo;
@property(readonly, copy, nonatomic) NSNumber *totalUniqueSnaps;
@property(readonly, copy, nonatomic) NSArray *timeViewedArray;
@property(readonly, copy, nonatomic) NSNumber *snapIndexPosition;
@property(readonly, copy, nonatomic) NSNumber *postRoll;
@property(readonly, copy, nonatomic) NSString *playbackAudio;
@property(readonly, copy, nonatomic) NSNumber *playList;
@property(readonly, copy, nonatomic) NSNumber *numOfTapBacks;
@property(readonly, copy, nonatomic) NSNumber *totalUniqueSnapsViewed;
@property(readonly, copy, nonatomic) NSString *deviceOs;
@property(readonly, copy, nonatomic) NSString *appVersion;
@end
