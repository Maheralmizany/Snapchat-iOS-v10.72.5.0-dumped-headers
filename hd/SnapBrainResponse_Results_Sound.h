//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SnapBrainResponse_Results_Sound_RMSE;

@interface SnapBrainResponse_Results_Sound : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float duration; // @dynamic duration;
@property(nonatomic) _Bool hasRmse; // @dynamic hasRmse;
@property(retain, nonatomic) SnapBrainResponse_Results_Sound_RMSE *rmse; // @dynamic rmse;
@property(nonatomic) unsigned int sampleCount; // @dynamic sampleCount;
@property(nonatomic) unsigned int sampleRate; // @dynamic sampleRate;
@property(retain, nonatomic) NSMutableArray *segmentsArray; // @dynamic segmentsArray;
@property(readonly, nonatomic) unsigned long long segmentsArray_Count; // @dynamic segmentsArray_Count;

@end
