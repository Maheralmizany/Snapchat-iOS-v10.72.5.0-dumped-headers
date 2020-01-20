//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCCameraCardTableViewCellDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, SCLens, UIPanGestureRecognizer, UITableView, UIView;

@interface SCCameraCardViewController : UIViewController <SCCameraCardTableViewCellDelegate, UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_cardArray;
    UIView *_backgroundView;
    UITableView *_tableView;
    _Bool _firstAppearanceComplete;
    struct UIEdgeInsets _defaultContentInset;
    _Bool _initializedPanGesture;
    _Bool _shouldOverrideTableViewPanningGesture;
    UIPanGestureRecognizer *_panGestureRecognizer;
    _Bool _delegateInformedOfDismissal;
    _Bool _updatingCards;
    id <SCCameraCardViewControllerDelegate> _cameraCardDelegate;
    SCLens *_lensUnlocked;
    long long _peekState;
}

@property(nonatomic) long long peekState; // @synthesize peekState=_peekState;
@property(retain, nonatomic) SCLens *lensUnlocked; // @synthesize lensUnlocked=_lensUnlocked;
@property(nonatomic) __weak id <SCCameraCardViewControllerDelegate> cameraCardDelegate; // @synthesize cameraCardDelegate=_cameraCardDelegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)cameraCardTableViewCellDidEndDragging:(id)arg1;
- (void)cameraCardTableViewCellDidStartDragging:(id)arg1;
- (void)cameraCardTableViewCell:(id)arg1 willAnimateHeightWithAnimations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cameraCardTableViewCell:(id)arg1 willAnimateOffScreenWithAnimations:(CDUnknownBlockType)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)cameraCardTableViewCell:(id)arg1 didDismissViewController:(id)arg2;
- (void)cameraCardTableViewCell:(id)arg1 didPresentViewController:(id)arg2;
- (void)cameraCardTableViewCellShowProfile:(id)arg1 suggestedFriendUsername:(id)arg2;
- (void)cameraCardTableViewCellDidUnlockLens:(id)arg1 lens:(id)arg2;
- (void)cameraCardTableViewCellDidFinish:(id)arg1 dismissType:(unsigned long long)arg2;
- (void)cameraCardTableViewCellDidFinish:(id)arg1;
- (void)_updateCardStyles;
- (void)_delegateDismissalWithDismissType:(unsigned long long)arg1;
- (void)_dismissCardsAnimated:(_Bool)arg1 additionalAnimations:(CDUnknownBlockType)arg2 duration:(double)arg3 dismissType:(unsigned long long)arg4;
- (void)_positionCardsBelowBottom;
- (void)_didPerformPanGesture:(id)arg1;
- (void)_cardDidRemoveWillAnimateChanges;
- (void)_dismissCardsWithDismissType:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_adjustCardsOffset;
- (void)_insertCards:(id)arg1 animated:(_Bool)arg2;
- (_Bool)shouldPopToRootViewControllerLater;
- (_Bool)shouldPopToRootViewController;
- (_Bool)shouldDisplayStatusBar;
- (void)didReceiveMemoryWarning;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

