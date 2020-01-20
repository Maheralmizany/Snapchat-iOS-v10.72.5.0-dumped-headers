//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@interface VLKIMUMetaData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int firstFrameEncodedReadyTs; // @dynamic firstFrameEncodedReadyTs;
@property(nonatomic) unsigned int firstFrameRawDataReadyTs; // @dynamic firstFrameRawDataReadyTs;
@property(nonatomic) int frameTagChangeIndex; // @dynamic frameTagChangeIndex;
@property(nonatomic) _Bool hasFirstFrameEncodedReadyTs; // @dynamic hasFirstFrameEncodedReadyTs;
@property(nonatomic) _Bool hasFirstFrameRawDataReadyTs; // @dynamic hasFirstFrameRawDataReadyTs;
@property(nonatomic) _Bool hasFrameTagChangeIndex; // @dynamic hasFrameTagChangeIndex;
@property(nonatomic) _Bool hasImuSampleFreq; // @dynamic hasImuSampleFreq;
@property(nonatomic) _Bool hasImuVersion; // @dynamic hasImuVersion;
@property(nonatomic) int imuSampleFreq; // @dynamic imuSampleFreq;
@property(nonatomic) unsigned int imuVersion; // @dynamic imuVersion;

@end

