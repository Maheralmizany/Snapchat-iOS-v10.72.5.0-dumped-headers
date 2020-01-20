//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AVDepthData.h"

@interface AVDepthData (DepthTrackingData)
- (id)_croppedToAspectRatioOfImage:(const struct ImageObjC *)arg1;
- (struct TrackerData)_buildMissingDepthTrackingDataWithCameraInfo:(const struct CameraInfo *)arg1 image:(const struct ImageObjC *)arg2 trackingParams:(const struct TrackerParams *)arg3;
- (id)depthContainer;
- (void)setDepthContainer:(id)arg1;
- (void)clearCachedDepthTrackingData;
- (_Bool)fillDepthTrackingData:(struct TrackerData *)arg1 cameraInfo:(const struct CameraInfo *)arg2 image:(const struct ImageObjC *)arg3 trackingParams:(const struct TrackerParams *)arg4;
- (struct TrackerData)buildDepthTrackingDataWithCameraInfo:(const struct CameraInfo *)arg1 image:(const struct ImageObjC *)arg2 trackingParams:(const struct TrackerParams *)arg3;
@end

