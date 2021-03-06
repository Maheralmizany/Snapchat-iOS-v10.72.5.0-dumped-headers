//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSArray, NSString, SCMiniProfileSectionsView, UIPanGestureRecognizer, UITapGestureRecognizer, UIVisualEffectView;

@interface SCMiniProfileBaseViewController : UIViewController <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate>
{
    _Bool _startingStatusBarHidden;
    long long _startingStatusBarStyle;
    _Bool _shouldDismissImmediatelyOnNextAppearance;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _startPanGestureOffset;
    double _customDismissDuration;
    UIViewController *_viewControllerNeedingAppearanceMethods;
    _Bool _suppressesAppearanceMethods;
    long long _cellViewPosition;
    NSArray *_localSectionControllers;
    UIVisualEffectView *_blurView;
    SCMiniProfileSectionsView *_sectionsView;
    NSArray *_sectionControllers;
}

@property(copy, nonatomic) NSArray *sectionControllers; // @synthesize sectionControllers=_sectionControllers;
@property(nonatomic) __weak SCMiniProfileSectionsView *sectionsView; // @synthesize sectionsView=_sectionsView;
@property(nonatomic) __weak UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(copy, nonatomic) NSArray *localSectionControllers; // @synthesize localSectionControllers=_localSectionControllers;
@property(nonatomic) long long cellViewPosition; // @synthesize cellViewPosition=_cellViewPosition;
@property(nonatomic) _Bool suppressesAppearanceMethods; // @synthesize suppressesAppearanceMethods=_suppressesAppearanceMethods;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_didPan:(id)arg1;
- (void)_didTap:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarUpdateAnimation;
- (void)viewWillLayoutSubviews;
- (void)reloadSections:(id)arg1;
- (void)reload;
- (void)setShouldDismissImmediatelyOnNextAppearance;
- (void)_updateViewSectionControllers;
- (void)replaceSectionController:(id)arg1 withSectionController:(id)arg2;
- (void)_notifyParentViewControllerIfNeededOfAppearanceChange:(_Bool)arg1;
- (_Bool)shouldDismissViewControllerWhenEnterBackground;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

