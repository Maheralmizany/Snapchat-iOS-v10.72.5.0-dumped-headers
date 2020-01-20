//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerContextTransitioning.h"

@class NSString, SCSearchNavigationInfo, SCSearchViewController, UIView;

@interface SCSearchNavigationTransitionContext : NSObject <UIViewControllerContextTransitioning>
{
    id <UIViewControllerInteractiveTransitioning> _interactionController;
    CDUnknownBlockType _completionBlock;
    _Bool _transitionWasCancelled;
    _Bool _animated;
    _Bool _interactive;
    _Bool _shouldForwardAppearanceMethods;
    _Bool _isPresenting;
    long long _presentationStyle;
    SCSearchNavigationInfo *_fromNavigationInfo;
    SCSearchNavigationInfo *_toNavigationInfo;
    SCSearchViewController *_containerViewController;
    id <UIViewControllerAnimatedTransitioning> _animationController;
    struct CGAffineTransform _targetTransform;
}

@property(readonly, nonatomic) _Bool isPresenting; // @synthesize isPresenting=_isPresenting;
@property(readonly, nonatomic) id <UIViewControllerAnimatedTransitioning> animationController; // @synthesize animationController=_animationController;
@property(readonly, nonatomic) _Bool shouldForwardAppearanceMethods; // @synthesize shouldForwardAppearanceMethods=_shouldForwardAppearanceMethods;
@property(readonly, nonatomic) SCSearchViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(readonly, nonatomic) SCSearchNavigationInfo *toNavigationInfo; // @synthesize toNavigationInfo=_toNavigationInfo;
@property(readonly, nonatomic) SCSearchNavigationInfo *fromNavigationInfo; // @synthesize fromNavigationInfo=_fromNavigationInfo;
@property(readonly, nonatomic) struct CGAffineTransform targetTransform; // @synthesize targetTransform=_targetTransform;
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive; // @synthesize interactive=_interactive;
@property(readonly, nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
@property(readonly, nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(readonly, nonatomic) _Bool transitionWasCancelled; // @synthesize transitionWasCancelled=_transitionWasCancelled;
- (void).cxx_destruct;
- (void)completeTransition:(_Bool)arg1;
- (void)finishInteractiveTransition;
- (void)pauseInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (void)cancelInteractiveTransition;
- (struct CGRect)finalFrameForViewController:(id)arg1;
- (struct CGRect)initialFrameForViewController:(id)arg1;
@property(readonly, nonatomic) UIView *containerView;
- (id)viewForKey:(id)arg1;
- (id)viewControllerForKey:(id)arg1;
- (id)initWithFromNavigationInfo:(id)arg1 toNavigationInfo:(id)arg2 containerViewController:(id)arg3 animationController:(id)arg4 interactionController:(id)arg5 shouldForwardAppearanceMethods:(_Bool)arg6 isPresenting:(_Bool)arg7 isInteractive:(_Bool)arg8 animated:(_Bool)arg9 completionBlock:(CDUnknownBlockType)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

