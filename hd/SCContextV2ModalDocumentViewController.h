//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCModalContainerViewController.h"

#import "SCComposerViewOwner.h"
#import "SCContextV2ActionsHandlerDelegate.h"
#import "SCPageNameLogging.h"
#import "SCShakeToReportDelegate.h"

@class NSString, SCContextV2ActionsHandler, UIView;

@interface SCContextV2ModalDocumentViewController : SCModalContainerViewController <SCContextV2ActionsHandlerDelegate, SCComposerViewOwner, SCShakeToReportDelegate, SCPageNameLogging>
{
    id <SCContextV2ModalDocumentViewControllerDelegate> _delegate;
    SCContextV2ActionsHandler *_actionsHandler;
    UIView *_viewToPresentPendingNextComposerRender;
}

- (void).cxx_destruct;
- (id)defaultProjectNameV2;
- (void)contextActionsHandlerWantsToDismissCurrentModalOverlay:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)contextActionsHandler:(id)arg1 wantsToOpenReplyCameraWithReplyInfo:(id)arg2 triggerInfo:(id)arg3;
- (void)contextActionsHandlerWantsToOpenChat:(id)arg1 triggerInfo:(id)arg2;
- (void)contextActionsHandlerWantsToPresentDefaultSwipeUpContent:(id)arg1 triggerInfo:(id)arg2;
- (void)contextActionsHandlerWantsToPresentContextCards:(id)arg1 triggerInfo:(id)arg2;
- (void)contextActionsHandler:(id)arg1 wantsToOpenGroupInviteFor:(id)arg2 triggerInfo:(id)arg3;
- (void)contextActionsHandler:(id)arg1 didLeaveAppSuccessfully:(_Bool)arg2;
- (void)contextActionsHandlerWillTryToLeaveApp:(id)arg1;
- (void)contextActionsHandlerDidFinishPresentingMedia:(id)arg1;
- (void)contextActionsHandlerDidBeginPresentingMedia:(id)arg1;
- (void)contextActionsHandlerDidDismissModalContent:(id)arg1 triggerInfo:(id)arg2;
- (void)contextActionsHandlerDidPresentModalContent:(id)arg1 triggerInfo:(id)arg2;
- (void)contextActionsHandler:(id)arg1 wantsToDismissContextCardsWithCompletion:(CDUnknownBlockType)arg2;
- (void)didRenderComposerView:(id)arg1;
- (id)pageViewName;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 backgroundColor:(id)arg2 requestType:(id)arg3 sheetHeight:(double)arg4 requestParams:(id)arg5 delegate:(id)arg6 session:(id)arg7 actionsHandler:(id)arg8 allowSwipeToDismiss:(_Bool)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

