//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, UIView;

@protocol SCViewControllerPresentationAnimator <NSObject>
@property(readonly, nonatomic) CALayer *dismissalMask;
@property(nonatomic) struct CGRect startingFrame;
@property(readonly, nonatomic) UIView *baseView;
@property(readonly, nonatomic) UIView *darkBackgroundView;
@property(nonatomic) __weak id <SCViewControllerPresentationAnimatorBaseViewDelegate> baseViewDelegate;
@property(nonatomic) __weak id <SCViewControllerPresentationAnimatorDelegate> delegate;
@property(copy, nonatomic) CDUnknownBlockType baseViewSetupForDismissal;
@property(copy, nonatomic) CDUnknownBlockType baseViewPresentationLayoutAnimation;
@property(copy, nonatomic) CDUnknownBlockType baseViewPresentationMainAnimation;
- (void)setupAnimationForBaseView:(UIView *)arg1;
- (void)updateBaseView:(UIView *)arg1;
- (void)animateTransition:(_Bool)arg1;
@end

