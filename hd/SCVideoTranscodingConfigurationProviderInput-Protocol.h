//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@protocol SCVideoTranscodingConfigurationProviderInput <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) long long overlaySizeInBits;
@property(readonly, nonatomic) _Bool shouldMuteAudio;
@property(readonly, nonatomic) _Bool hasOverlayToBlend;
@property(readonly, nonatomic) double videoPlaybackRate;
@property(readonly, nonatomic) double videoTargetAspectRatio;
@property(readonly, nonatomic) double videoSourceDuration;
@property(readonly, nonatomic) double videoTargetBitrate;
@property(readonly, nonatomic) double videoSourceBitrate;
@property(readonly, nonatomic) struct CGSize videoTargetSize;
@property(readonly, nonatomic) struct CGSize videoSourceSize;
@end

