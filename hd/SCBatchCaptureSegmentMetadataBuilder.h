//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSDate;

@interface SCBatchCaptureSegmentMetadataBuilder : NSObject
{
    long long _mediaOrientation;
    NSDate *_createTime;
    NSDate *_captureTime;
    CLLocation *_location;
    _Bool _fromFrontFacingCamera;
    _Bool _lensesActive;
}

+ (id)withBatchCaptureSegmentMetadata:(id)arg1;
- (void).cxx_destruct;
- (id)setLensesActive:(_Bool)arg1;
- (id)setFromFrontFacingCamera:(_Bool)arg1;
- (id)setLocation:(id)arg1;
- (id)setCaptureTime:(id)arg1;
- (id)setCreateTime:(id)arg1;
- (id)setMediaOrientation:(long long)arg1;
- (id)build;

@end
