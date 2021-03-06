//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLens, SCLensEffectActivatorConfigurationLoader;

@protocol SCLensEffectActivationManager <NSObject>
- (void)resetCurrentApplyingLens;
- (void)clearCurrentLens;
- (void)activateLens:(SCLens *)arg1 configuration:(SCLensEffectActivatorConfigurationLoader *)arg2 completion:(void (^)(unsigned long long, NSError *))arg3;
- (void)activateLens:(SCLens *)arg1 configuration:(SCLensEffectActivatorConfigurationLoader *)arg2 setLensCompletion:(void (^)(long long, NSError *))arg3 imageOverlayCompletion:(void (^)(_Bool, NSError *))arg4 completion:(void (^)(unsigned long long, NSError *))arg5;
@end

