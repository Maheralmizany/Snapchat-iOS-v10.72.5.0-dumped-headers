//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAdInfoPageViewController.h"

#import "SCReportPageViewControllerDelegate.h"

@class NSString, SCUnlockableTracker;

@interface SCReportableAdInfoPageViewController : SCAdInfoPageViewController <SCReportPageViewControllerDelegate>
{
    SCUnlockableTracker *_unlockableTracker;
    id <SCReportPageViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCReportPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_populateAdditionalAdData:(id)arg1;
- (_Bool)_shouldDisplayReportAction;
- (_Bool)_shouldHandleReportEvent;
- (void)reportPageViewControllerDidCancelAtLevel:(unsigned long long)arg1 additionalData:(id)arg2;
- (void)reportPageViewControllerDidSubmitReport:(id)arg1 reasonId:(id)arg2 additionalData:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)presentReportAd;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 unlockableId:(id)arg2 unlockableTracker:(id)arg3 dismissalCompletionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

