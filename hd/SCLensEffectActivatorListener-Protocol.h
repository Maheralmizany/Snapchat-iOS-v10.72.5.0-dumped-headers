//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLens, SCLensEffectActivator;

@protocol SCLensEffectActivatorListener <NSObject>
- (void)lensEffectActivator:(SCLensEffectActivator *)arg1 didFailToApplyLensAtTime:(double)arg2;
- (void)lensEffectActivator:(SCLensEffectActivator *)arg1 didSuccessfullyApplyLensAtTime:(double)arg2;
- (void)lensEffectActivator:(SCLensEffectActivator *)arg1 didStartApplyingLens:(SCLens *)arg2 atTime:(double)arg3;
@end

