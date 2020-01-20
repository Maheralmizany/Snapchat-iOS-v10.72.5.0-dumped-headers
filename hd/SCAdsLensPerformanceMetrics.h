//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBFloatValue, GPBInt64Value;

@interface SCAdsLensPerformanceMetrics : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBFloatValue *avgFps; // @dynamic avgFps;
@property(retain, nonatomic) GPBInt64Value *frameProcessingTimeAvgMillis; // @dynamic frameProcessingTimeAvgMillis;
@property(nonatomic) _Bool hasAvgFps; // @dynamic hasAvgFps;
@property(nonatomic) _Bool hasFrameProcessingTimeAvgMillis; // @dynamic hasFrameProcessingTimeAvgMillis;
@property(nonatomic) _Bool hasLensApplyDelayMillis; // @dynamic hasLensApplyDelayMillis;
@property(retain, nonatomic) GPBInt64Value *lensApplyDelayMillis; // @dynamic lensApplyDelayMillis;

@end
