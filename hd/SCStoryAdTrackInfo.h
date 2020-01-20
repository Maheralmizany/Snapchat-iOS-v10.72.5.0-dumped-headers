//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface SCStoryAdTrackInfo : NSObject <NSCopying>
{
    _Bool _isAudioOn;
    NSString *_creativeId;
    long long _snapCount;
    NSString *_exitEvent;
    long long _totalSwipeUp;
    long long _uniqueSwipeUp;
    long long _maxViewedSnapIndex;
    long long _totalTopSnapMediaDurationInMillis;
    double _totalTimeViewedInMillis;
    NSArray *_adSnapTrackInfoList;
}

@property(readonly, copy, nonatomic) NSArray *adSnapTrackInfoList; // @synthesize adSnapTrackInfoList=_adSnapTrackInfoList;
@property(readonly, nonatomic) double totalTimeViewedInMillis; // @synthesize totalTimeViewedInMillis=_totalTimeViewedInMillis;
@property(readonly, nonatomic) long long totalTopSnapMediaDurationInMillis; // @synthesize totalTopSnapMediaDurationInMillis=_totalTopSnapMediaDurationInMillis;
@property(readonly, nonatomic) long long maxViewedSnapIndex; // @synthesize maxViewedSnapIndex=_maxViewedSnapIndex;
@property(readonly, nonatomic) long long uniqueSwipeUp; // @synthesize uniqueSwipeUp=_uniqueSwipeUp;
@property(readonly, nonatomic) long long totalSwipeUp; // @synthesize totalSwipeUp=_totalSwipeUp;
@property(readonly, copy, nonatomic) NSString *exitEvent; // @synthesize exitEvent=_exitEvent;
@property(readonly, nonatomic) _Bool isAudioOn; // @synthesize isAudioOn=_isAudioOn;
@property(readonly, nonatomic) long long snapCount; // @synthesize snapCount=_snapCount;
@property(readonly, copy, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCreativeId:(id)arg1 snapCount:(long long)arg2 isAudioOn:(_Bool)arg3 exitEvent:(id)arg4 totalSwipeUp:(long long)arg5 uniqueSwipeUp:(long long)arg6 maxViewedSnapIndex:(long long)arg7 totalTopSnapMediaDurationInMillis:(long long)arg8 totalTimeViewedInMillis:(double)arg9 adSnapTrackInfoList:(id)arg10;

@end
