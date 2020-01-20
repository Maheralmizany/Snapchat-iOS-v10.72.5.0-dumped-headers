//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUAdLensPerformanceMetrics.h"

@class NSNumber, NSString;

@interface SOJUAdLensPerformanceMetrics : NSObject <SOJUAdLensPerformanceMetrics>
{
    NSNumber *_avgFps;
    NSNumber *_lensApplyDelayMillis;
    NSNumber *_frameProcessingTimeAvgMillis;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *frameProcessingTimeAvgMillis; // @synthesize frameProcessingTimeAvgMillis=_frameProcessingTimeAvgMillis;
@property(readonly, copy, nonatomic) NSNumber *lensApplyDelayMillis; // @synthesize lensApplyDelayMillis=_lensApplyDelayMillis;
@property(readonly, copy, nonatomic) NSNumber *avgFps; // @synthesize avgFps=_avgFps;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAvgFps:(id)arg1 lensApplyDelayMillis:(id)arg2 frameProcessingTimeAvgMillis:(id)arg3;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)frameProcessingTimeAvgMillisValue;
- (long long)lensApplyDelayMillisValue;
- (float)avgFpsValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

