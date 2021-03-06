//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSearchViewControllerTransitioning.h"

@class NSString;

@interface SCSearchAttachmentsTransitionController : NSObject <SCSearchViewControllerTransitioning>
{
    _Bool _isPresenting;
    CDUnknownBlockType _interactiveDismissalHandler;
}

@property(copy, nonatomic) CDUnknownBlockType interactiveDismissalHandler; // @synthesize interactiveDismissalHandler=_interactiveDismissalHandler;
- (void).cxx_destruct;
- (id)_previewViewControllerForTransitionContext:(id)arg1;
- (id)_searchViewControllerForTransitionContext:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

