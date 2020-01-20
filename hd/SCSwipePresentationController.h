//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPresentationController.h"

@class NSArray, SCSwipeTransitionContainerView, UIBlurEffect, UIView, UIViewController;

@interface SCSwipePresentationController : UIPresentationController
{
    SCSwipeTransitionContainerView *_transitionOverlay;
    NSArray *_gradientColors;
    UIBlurEffect *_blurEffect;
    double _transitionOverlayIntroPoint;
    _Bool _showsTopCorners;
    long long _presentationStyle;
    UIView *_presentingView;
    UIView *_belowSubview;
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
- (id)transitionOverlay;
- (void)containerViewWillLayoutSubviews;
- (long long)presentationStyle;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (id)initWithGradientColors:(id)arg1 blurEffect:(id)arg2 transitionOverlayIntroPoint:(double)arg3 showsTopCorners:(_Bool)arg4 presentedViewController:(id)arg5 presentingViewController:(id)arg6 presentationStyle:(long long)arg7 presentingView:(id)arg8 belowSubview:(id)arg9;

@end

