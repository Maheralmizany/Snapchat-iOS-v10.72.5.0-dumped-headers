//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LCVCameraData, LCVImage, NSMutableArray;

@interface LCVDepthFrameData : NSObject
{
    int frameIndex;
    double timeStamp;
    long long depthQuality;
    LCVCameraData *depthCamera;
    LCVCameraData *rgbCamera;
    LCVImage *depth;
    LCVImage *rgb;
    LCVImage *rgbThumbnail;
    LCVImage *disparity;
    LCVImage *confidence;
    NSMutableArray *alignmentComp;
    NSMutableArray *imuAlignmentComp;
    long long _primaryCamera;
}

@property(nonatomic) long long primaryCamera; // @synthesize primaryCamera=_primaryCamera;
@property(retain, nonatomic) NSMutableArray *imuAlignmentComp; // @synthesize imuAlignmentComp;
@property(retain, nonatomic) NSMutableArray *alignmentComp; // @synthesize alignmentComp;
@property(retain, nonatomic) LCVImage *confidence; // @synthesize confidence;
@property(retain, nonatomic) LCVImage *disparity; // @synthesize disparity;
@property(retain, nonatomic) LCVImage *rgbThumbnail; // @synthesize rgbThumbnail;
@property(retain, nonatomic) LCVImage *rgb; // @synthesize rgb;
@property(retain, nonatomic) LCVImage *depth; // @synthesize depth;
@property(retain, nonatomic) LCVCameraData *rgbCamera; // @synthesize rgbCamera;
@property(retain, nonatomic) LCVCameraData *depthCamera; // @synthesize depthCamera;
@property(nonatomic) long long depthQuality; // @synthesize depthQuality;
@property(nonatomic) int frameIndex; // @synthesize frameIndex;
@property(nonatomic) double timeStamp; // @synthesize timeStamp;
- (void).cxx_destruct;
- (id)init;

@end

