//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensEffectActivatorListener.h"

@class NSString;

@interface SCCameraLensReadyLogger : NSObject <SCLensEffectActivatorListener>
{
    id <SCLensReadyLoggerProtocol> _lensReadyLogger;
}

- (void).cxx_destruct;
- (void)lensEffectActivator:(id)arg1 didFailToApplyLensAtTime:(double)arg2;
- (void)lensEffectActivator:(id)arg1 didSuccessfullyApplyLensAtTime:(double)arg2;
- (void)lensEffectActivator:(id)arg1 didStartApplyingLens:(id)arg2 atTime:(double)arg3;
- (id)initWithLensReadyLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
