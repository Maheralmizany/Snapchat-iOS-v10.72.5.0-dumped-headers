//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCStickerState.h"

@class NSArray, NSString, SOJUGalleryInfoStickerStyle, SOJUSticker;

@interface SCStickerState : NSObject <SCStickerState>
{
    _Bool _isTracking;
    _Bool _isAnimated;
    _Bool _isFlipped;
    unsigned long long _type;
    unsigned long long _infoStickerType;
    NSString *_emoji;
    SOJUSticker *_chatSticker;
    double _rotation;
    double _scale;
    NSArray *_trackingTrajectory;
    SOJUGalleryInfoStickerStyle *_infoStickerStyle;
    long long _uniqueId;
    struct CGSize _relativeSize;
    struct CGPoint _center;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)_isWebPAnimated:(id)arg1;
+ (_Bool)_isGifAnimated:(id)arg1;
+ (id)snapKitStickerStateWithData:(id)arg1 center:(struct CGPoint)arg2 rotation:(double)arg3 relativeSize:(struct CGSize)arg4 imageCache:(id)arg5;
+ (id)snapKitStickerStateWithData:(id)arg1 imageCache:(id)arg2;
@property(readonly, nonatomic) _Bool isFlipped; // @synthesize isFlipped=_isFlipped;
@property(readonly, nonatomic) long long uniqueId; // @synthesize uniqueId=_uniqueId;
@property(readonly, nonatomic) _Bool isAnimated; // @synthesize isAnimated=_isAnimated;
@property(readonly, copy, nonatomic) SOJUGalleryInfoStickerStyle *infoStickerStyle; // @synthesize infoStickerStyle=_infoStickerStyle;
@property(readonly, copy, nonatomic) NSArray *trackingTrajectory; // @synthesize trackingTrajectory=_trackingTrajectory;
@property(readonly, nonatomic) _Bool isTracking; // @synthesize isTracking=_isTracking;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(readonly, nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(readonly, nonatomic) struct CGSize relativeSize; // @synthesize relativeSize=_relativeSize;
@property(readonly, copy, nonatomic) SOJUSticker *chatSticker; // @synthesize chatSticker=_chatSticker;
@property(readonly, copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
@property(readonly, nonatomic) unsigned long long infoStickerType; // @synthesize infoStickerType=_infoStickerType;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setSize:(struct CGSize)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setPoint:(struct CGPoint)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(unsigned long long)arg1 infoStickerType:(unsigned long long)arg2 emoji:(id)arg3 chatSticker:(id)arg4 relativeSize:(struct CGSize)arg5 center:(struct CGPoint)arg6 rotation:(double)arg7 scale:(double)arg8 isTracking:(_Bool)arg9 trackingTrajectory:(id)arg10 infoStickerStyle:(id)arg11 isAnimated:(_Bool)arg12 uniqueId:(long long)arg13 isFlipped:(_Bool)arg14;
- (long long)SCACreativeKitStickertype;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
