//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCLensEffectActivationListening.h"
#import "SCLensEffectActivationStateManager.h"
#import "SCLensProcessingCoreActivationManager.h"
#import "SCManagedCapturerListener.h"

@class LSAComponentManager, NSArray, NSString, SCLens, SCManagedCaptureDevice, UIImage;

@protocol SCManagedCapturerLensAPI <SCManagedCapturerListener, SCLensEffectActivationListening, SCLensEffectActivationStateManager, SCLensProcessingCoreActivationManager>
@property(readonly, nonatomic) id <SCManagedAudioDataSourceListener><SCManagedVideoDataSourceListener> capturerListener;
@property(readonly, nonatomic) _Bool isLensApplied;
@property(retain, nonatomic) NSString *activeLensId;
@property(readonly, nonatomic) LSAComponentManager *componentManager;
- (long long)maxPixelSize;
- (void)setShouldProcessARFrames:(_Bool)arg1;
- (UIImage *)processImage:(UIImage *)arg1 maxPixelSize:(long long)arg2 devicePosition:(long long)arg3 fieldOfView:(float)arg4;
- (void)setShouldMuteAllSounds:(_Bool)arg1;
- (void)detectLensCategoryOnNextFrame:(struct CGPoint)arg1 videoOrientation:(long long)arg2 lenses:(NSArray *)arg3 completion:(void (^)(NSString *, long long, long long))arg4;
- (void)setLensesActive:(_Bool)arg1 videoOrientation:(long long)arg2;
- (void)setModifySource:(_Bool)arg1;
- (void)removeFieldOfViewListener;
- (void)setAsFieldOfViewListenerForARDataSource:(id <SCManagedVideoARDataSource>)arg1;
- (void)setAsFieldOfViewListenerForDevice:(SCManagedCaptureDevice *)arg1;
- (void)setFieldOfView:(float)arg1;
- (SCLens *)appliedLens;
- (void)setAspectRatio:(_Bool)arg1;
@end

