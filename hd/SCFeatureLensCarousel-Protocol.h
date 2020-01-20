//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLens, SCLensesUIAppearanceConfiguration, SCLensesUIControllerState, SCObservable, SCReplyParameters;

@protocol SCFeatureLensCarousel <NSObject>
@property(readonly, nonatomic) SCObservable *selectedLensObservable;
@property(readonly, nonatomic) SCObservable *willLensCarouselOpenObservable;
@property(readonly, nonatomic) SCObservable *lensCarouselActivationStateObservable;
@property(nonatomic) __weak id <SCCameraViewControllerLensDelegate> lensDelegate;
- (void)setReplyParameters:(SCReplyParameters *)arg1;
- (void)clearLensState;
- (void)turnLensesOff;
- (void)turnLensesOnAndSelectLens:(SCLens *)arg1 withAppearanceConfiguration:(SCLensesUIAppearanceConfiguration *)arg2;
- (SCLens *)turnLensesOnAndSelectFirstApplicableLens;
- (void)turnLensesOnWithActivationState:(SCLensesUIControllerState *)arg1;
- (void)setCameraPositionForLens:(SCLens *)arg1 completion:(void (^)(void))arg2;
- (void)selectOriginalLens;
- (void)selectLens:(SCLens *)arg1 switchCameraIfNeeded:(_Bool)arg2;
- (void)selectLens:(SCLens *)arg1;
- (void)didSelectLens:(SCLens *)arg1;
@end

