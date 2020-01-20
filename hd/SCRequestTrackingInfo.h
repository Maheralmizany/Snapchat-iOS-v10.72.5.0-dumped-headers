//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSNumber, NSString;

@interface SCRequestTrackingInfo : NSObject <NSCoding>
{
    NSString *_trackingId;
    unsigned long long _expirationInDays;
    NSString *_type;
    NSString *_mediaType;
    NSString *_mediaId;
    NSNumber *_contentResolveTime;
    NSString *_requestId;
    NSString *_requestRankingTrackingId;
}

@property(readonly, copy, nonatomic) NSString *requestRankingTrackingId; // @synthesize requestRankingTrackingId=_requestRankingTrackingId;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(readonly, copy, nonatomic) NSNumber *contentResolveTime; // @synthesize contentResolveTime=_contentResolveTime;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) unsigned long long expirationInDays; // @synthesize expirationInDays=_expirationInDays;
@property(copy, nonatomic) NSString *trackingId; // @synthesize trackingId=_trackingId;
- (void).cxx_destruct;
- (_Bool)isChatSnap;
- (_Bool)isEqualToRequestTrackingInfo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrackingId:(id)arg1 mediaId:(id)arg2 type:(id)arg3 mediaType:(id)arg4 contentResolveTime:(id)arg5 expirationInDays:(unsigned long long)arg6;
- (id)initWithTrackingId:(id)arg1 type:(id)arg2 mediaType:(id)arg3 expirationInDays:(unsigned long long)arg4;

@end

