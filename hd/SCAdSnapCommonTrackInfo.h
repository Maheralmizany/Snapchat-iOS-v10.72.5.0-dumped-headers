//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString, SCSnapAdThirdPartyTrackInfo;

@interface SCAdSnapCommonTrackInfo : NSObject <NSCopying>
{
    _Bool _shouldReportThirdPartyMetrics;
    NSString *_creativeId;
    long long _snapIndex;
    double _deltaBetweenReceiveAndRenderInMillis;
    long long _topSnapMediaType;
    long long _topSnapTimeViewedInMillis;
    long long _topSnapMediaDurationInMillis;
    double _topSnapUncappedMaxUnobstructedViewTimeInMillis;
    double _topSnapUncappedTotalUnobstructedAudibleViewTimeInMillis;
    NSArray *_maxMediaVolumeForMediaPlayback;
    long long _swipeCount;
    double _longformMaxViewedDurationInMillis;
    NSString *_exitEvent;
    SCSnapAdThirdPartyTrackInfo *_thirdPartyTrackInfo;
}

@property(readonly, copy, nonatomic) SCSnapAdThirdPartyTrackInfo *thirdPartyTrackInfo; // @synthesize thirdPartyTrackInfo=_thirdPartyTrackInfo;
@property(readonly, nonatomic) _Bool shouldReportThirdPartyMetrics; // @synthesize shouldReportThirdPartyMetrics=_shouldReportThirdPartyMetrics;
@property(readonly, copy, nonatomic) NSString *exitEvent; // @synthesize exitEvent=_exitEvent;
@property(readonly, nonatomic) double longformMaxViewedDurationInMillis; // @synthesize longformMaxViewedDurationInMillis=_longformMaxViewedDurationInMillis;
@property(readonly, nonatomic) long long swipeCount; // @synthesize swipeCount=_swipeCount;
@property(readonly, copy, nonatomic) NSArray *maxMediaVolumeForMediaPlayback; // @synthesize maxMediaVolumeForMediaPlayback=_maxMediaVolumeForMediaPlayback;
@property(readonly, nonatomic) double topSnapUncappedTotalUnobstructedAudibleViewTimeInMillis; // @synthesize topSnapUncappedTotalUnobstructedAudibleViewTimeInMillis=_topSnapUncappedTotalUnobstructedAudibleViewTimeInMillis;
@property(readonly, nonatomic) double topSnapUncappedMaxUnobstructedViewTimeInMillis; // @synthesize topSnapUncappedMaxUnobstructedViewTimeInMillis=_topSnapUncappedMaxUnobstructedViewTimeInMillis;
@property(readonly, nonatomic) long long topSnapMediaDurationInMillis; // @synthesize topSnapMediaDurationInMillis=_topSnapMediaDurationInMillis;
@property(readonly, nonatomic) long long topSnapTimeViewedInMillis; // @synthesize topSnapTimeViewedInMillis=_topSnapTimeViewedInMillis;
@property(readonly, nonatomic) long long topSnapMediaType; // @synthesize topSnapMediaType=_topSnapMediaType;
@property(readonly, nonatomic) double deltaBetweenReceiveAndRenderInMillis; // @synthesize deltaBetweenReceiveAndRenderInMillis=_deltaBetweenReceiveAndRenderInMillis;
@property(readonly, nonatomic) long long snapIndex; // @synthesize snapIndex=_snapIndex;
@property(readonly, copy, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCreativeId:(id)arg1 snapIndex:(long long)arg2 deltaBetweenReceiveAndRenderInMillis:(double)arg3 topSnapMediaType:(long long)arg4 topSnapTimeViewedInMillis:(long long)arg5 topSnapMediaDurationInMillis:(long long)arg6 topSnapUncappedMaxUnobstructedViewTimeInMillis:(double)arg7 topSnapUncappedTotalUnobstructedAudibleViewTimeInMillis:(double)arg8 maxMediaVolumeForMediaPlayback:(id)arg9 swipeCount:(long long)arg10 longformMaxViewedDurationInMillis:(double)arg11 exitEvent:(id)arg12 shouldReportThirdPartyMetrics:(_Bool)arg13 thirdPartyTrackInfo:(id)arg14;

@end

