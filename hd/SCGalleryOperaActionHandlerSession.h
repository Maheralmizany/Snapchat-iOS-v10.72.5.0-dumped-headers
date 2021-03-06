//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCGalleryPreviewControllerDelegate.h"
#import "SCGalleryPrivateGallerySetupFlowDelegate.h"
#import "SCOperaEventListener.h"
#import "SCSpectaclesBoomboxViewControllerDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSDictionary, NSString, SCGalleryActivityController, SCGalleryOperaConfiguration, SCGalleryPreviewController, SCGalleryPrivateGallerySetupFlow, SCGallerySelectionController, SCGallerySendController, SCOperaEventListenerAnnouncer, SCOperaViewController, SCQueuePerformer, SCUserSession;

@interface SCGalleryOperaActionHandlerSession : NSObject <SCOperaEventListener, UIViewControllerTransitioningDelegate, SCGalleryPrivateGallerySetupFlowDelegate, SCSpectaclesBoomboxViewControllerDelegate, SCGalleryPreviewControllerDelegate>
{
    SCGalleryOperaConfiguration *_configuration;
    SCUserSession *_userSession;
    SCQueuePerformer *_performer;
    SCGallerySendController *_sendController;
    SCGalleryActivityController *_activityController;
    SCGalleryPreviewController *_previewController;
    SCGalleryPrivateGallerySetupFlow *_privateGallerySetupFlow;
    SCGallerySelectionController *_selectionController;
    NSDictionary *_lastSelectedMEOContext;
    id <SCKeyServiceRequest> _masterKeyRequest;
    SCOperaViewController *_operaVC;
    SCOperaEventListenerAnnouncer *_eventAnnouncer;
    id <SCGalleryOperaSnapResolving> _operaSnapResolver;
    id <SCStartChatDelegate> _startChatDelegate;
    id <SCGalleryOperaActionHandlerSessionDelegate> _delegate;
}

@property(nonatomic) __weak id <SCGalleryOperaActionHandlerSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
- (void).cxx_destruct;
- (void)galleryPreviewControllerDidSaveAsCopy:(id)arg1;
- (void)galleryPreviewController:(id)arg1 didFailToLoadContent:(id)arg2;
- (void)galleryPreviewControllerDidCancel:(id)arg1;
- (void)galleryPreviewControllerDidDismiss:(id)arg1;
- (void)galleryPreviewControllerWillDismiss:(id)arg1;
- (void)galleryPreviewController:(id)arg1 createdEntry:(id)arg2 createdSnap:(id)arg3 updatedEntry:(id)arg4 didDetachSnap:(id)arg5 fromEntry:(id)arg6;
- (void)galleryPreviewController:(id)arg1 updatedEntry:(id)arg2 didDeleteSnap:(id)arg3 fromEntry:(id)arg4;
- (void)_presentBoomboxViewController:(id)arg1;
- (void)boomboxViewControllerDidTapBackButton:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)_createSessionUserContext:(_Bool)arg1 presentingViewController:(id)arg2;
- (void)privateGallerySetupFlowDidFinish:(id)arg1;
- (void)privateGallerySetupFlowDidCancel:(id)arg1;
- (void)_makePHAssetPrivate:(id)arg1;
- (void)_makeEntryPrivate:(id)arg1;
- (void)_makeEntryPublic:(id)arg1;
- (void)_toggleMEOForContext:(id)arg1;
- (void)_handleToggleMEOForContext:(id)arg1;
- (void)_handleDismissForContext:(id)arg1;
- (void)_handlePopsPrintForContext:(id)arg1;
- (void)_handleBoomboxForContext:(id)arg1;
- (void)_handleMagicMomentStateChangedWithContext:(id)arg1 params:(id)arg2;
- (void)_handleActionMenuSendForContext:(id)arg1 fromActionMenu:(_Bool)arg2;
- (void)_handlRemoveSnapFromStoryAction:(long long)arg1 entry:(id)arg2 snap:(id)arg3;
- (void)_handleDeleteForGalleryEntry:(id)arg1 snap:(id)arg2;
- (void)_handleActionMenuDeleteForContext:(id)arg1;
- (void)_asyncFetchSnapsWithEntry:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_prepareAndPresentPreviewControllerWithGallerySnaps:(id)arg1 entry:(id)arg2 fromActionMenu:(_Bool)arg3;
- (void)_handleEditForGalleryEntry:(id)arg1 snap:(id)arg2 fromActionMenu:(_Bool)arg3;
- (void)_handleActionMenuEditForContext:(id)arg1 fromActionMenu:(_Bool)arg2;
- (void)_handleActionMenuExportForItem:(id)arg1 snap:(id)arg2 shouldPauseVideo:(_Bool)arg3;
- (void)_handleActionMenuExportForContext:(id)arg1;
- (void)_asyncFetchEntryBasedOnSnap:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleActionMenuHighlightForContext:(id)arg1;
- (void)_handleActionMenuRetryBackupForContext:(id)arg1;
- (void)_handleActionMenuBackupNow;
- (id)_registeredEventsForOperaSession;
- (id)previewController;
- (id)activityController;
- (id)sendController;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)initWithEventAnnouncer:(id)arg1 operaVC:(id)arg2 operaSnapResolver:(id)arg3 configuration:(id)arg4 userSession:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

