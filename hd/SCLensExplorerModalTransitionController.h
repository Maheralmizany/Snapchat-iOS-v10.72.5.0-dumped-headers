//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class NSString, SCLensExplorerInteractiveTransition;

@interface SCLensExplorerModalTransitionController : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _isPresenting;
    SCLensExplorerInteractiveTransition *_interactiveTransition;
}

@property(nonatomic) _Bool isPresenting; // @synthesize isPresenting=_isPresenting;
@property(retain, nonatomic) SCLensExplorerInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
- (void).cxx_destruct;
- (struct CGRect)_offscreenFrameForViewController:(id)arg1;
- (void)_animateHeaderView:(id)arg1 visible:(_Bool)arg2;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

