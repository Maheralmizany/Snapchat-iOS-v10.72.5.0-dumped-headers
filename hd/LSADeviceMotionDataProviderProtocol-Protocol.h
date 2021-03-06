//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMDeviceMotion, LSADeviceMotionParams;

@protocol LSADeviceMotionDataProviderProtocol <NSObject>
- (CMDeviceMotion *)deviceMotion;
- (void)stopDeviceMotionUpdates;
- (void)startDeviceMotionUpdatesWithParams:(LSADeviceMotionParams *)arg1 callback:(void (^)(LSAFusedDeviceMotionData *, _Bool))arg2;
@end

