//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSADeviceMotionDataProviderProtocol.h"

@class CMMotionManager, NSString;

@interface LSADeviceMotionDataProvider : NSObject <LSADeviceMotionDataProviderProtocol>
{
    CMMotionManager *_motionManager;
}

@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
- (void).cxx_destruct;
- (id)deviceMotion;
- (void)stopDeviceMotionUpdates;
- (void)startDeviceMotionUpdatesWithParams:(id)arg1 callback:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

