//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCCameraPreferences : NSObject
{
}

+ (void)persistBatchCaptureRecoveryData:(id)arg1;
+ (id)batchCaptureRecoveryData;
+ (void)removeSnapRecoveryData;
+ (void)persistSnapRecoveryData:(id)arg1;
+ (id)capturedSnapRecoveryData;
+ (id)sharedPerformer;
+ (id)_snapRecoveryDataLock;
+ (id)_batchRecoveryDataLock;
+ (_Bool)isRecoveryDataPreloadingEnabled;

@end

