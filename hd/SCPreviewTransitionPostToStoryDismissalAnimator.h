//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class NSString, UIView;

@interface SCPreviewTransitionPostToStoryDismissalAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    UIView *_profileIconView;
    id <SCPreviewTransitioningDelegate> _previewTransitioningDelegate;
}

- (void).cxx_destruct;
- (void)_circleCloseAnimationOnProfileIconView:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)initWithPreviewTransitioningDelegate:(id)arg1 profileIconView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
