//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioSession;

@protocol SCTCKAudioServices <NSObject>
- (void)callKitWillDeactivateAudioSession:(AVAudioSession *)arg1;
- (void)callKitDidActivateAudioSession:(AVAudioSession *)arg1;
- (void)releaseCallKitAudioSession;
- (void)requestCallKitAudioSessionWithProximityEnabled:(_Bool)arg1 speakers:(_Bool)arg2;
@end

