//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCGalleryCellActionMenuDataSource.h"
#import "SCGalleryCellActionMenuDelegate.h"
#import "SCGalleryPreviewControllerDelegate.h"
#import "SCGalleryPrivateGallerySetupFlowDelegate.h"
#import "SCSpectaclesEventListener.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSMutableDictionary, NSString, SCGalleryActivityController, SCGalleryCellActionMenu, SCGalleryPreviewController, SCGalleryPrivateGallerySetupFlow, SCGallerySendController, SCUserSession, UINavigationController, UIView;

@interface SCGalleryCellActionMenuHelper : NSObject <SCGalleryCellActionMenuDelegate, SCGalleryCellActionMenuDataSource, SCGalleryPreviewControllerDelegate, UIViewControllerTransitioningDelegate, SCGalleryPrivateGallerySetupFlowDelegate, SCSpectaclesEventListener>
{
    SCUserSession *_userSession;
    long long _type;
    SCGalleryCellActionMenu *_actionMenu;
    SCGalleryActivityController *_activityController;
    SCGalleryPrivateGallerySetupFlow *_privateGallerySetupFlow;
    SCGallerySendController *_sendController;
    id <SCKeyServiceRequest> _keyServiceRequest;
    SCGalleryPreviewController *_previewController;
    _Bool _previewControllerIsPresented;
    UIView *_previewSourceView;
    id <SCGalleryEntry> _selectedEntry;
    id <SCGalleryItem> _selectedItem;
    UINavigationController *_navigationController;
    _Bool _actionTriggeredByPanGesture;
    NSString *_sourcePageName;
    NSMutableDictionary *_deleteEntryOperations;
    id <SCGalleryCellActionMenuHelperDelegate> _delegate;
    id <SCGalleryCellActionMenuHelperDataSource> _dataSource;
}

@property(nonatomic) __weak id <SCGalleryCellActionMenuHelperDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SCGalleryCellActionMenuHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)spectaclesTransferSession:(id)arg1 onTransferUpdate:(unsigned long long)arg2;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)galleryPreviewController:(id)arg1 didFailToLoadContent:(id)arg2;
- (void)galleryPreviewControllerDidCancel:(id)arg1;
- (void)galleryPreviewControllerDidDismiss:(id)arg1;
- (void)galleryPreviewControllerWillDismiss:(id)arg1;
- (void)galleryPreviewController:(id)arg1 createdEntry:(id)arg2 createdSnap:(id)arg3 updatedEntry:(id)arg4 didDetachSnap:(id)arg5 fromEntry:(id)arg6;
- (void)galleryPreviewController:(id)arg1 updatedEntry:(id)arg2 didDeleteSnap:(id)arg3 fromEntry:(id)arg4;
- (id)galleryCellActionMenu:(id)arg1 viewModelForItem:(id)arg2;
- (id)galleryCellActionMenu:(id)arg1 transferSessionForItem:(id)arg2;
- (void)galleryCellActionMenu:(id)arg1 handleBoombox:(id)arg2 snap:(id)arg3;
- (void)galleryCellActionMenu:(id)arg1 handleHideStory:(id)arg2;
- (void)galleryCellActionMenu:(id)arg1 handleSaveToStories:(id)arg2;
- (void)galleryCellActionMenu:(id)arg1 handleEditStory:(id)arg2;
- (void)galleryCellActionMenuDidDismiss:(id)arg1;
- (void)galleryCellActionMenuWillDismiss:(id)arg1;
- (void)galleryCellActionMenu:(id)arg1 handleRetryBackup:(id)arg2;
- (void)galleryCellActionMenu:(id)arg1 handleBackupNow:(id)arg2;
- (void)galleryCellActionMenu:(id)arg1 handleHighlight:(id)arg2 snap:(id)arg3;
- (void)galleryCellActionMenu:(id)arg1 handleAddSnaps:(id)arg2;
- (void)galleryCellActionMenu:(id)arg1 handleSend:(id)arg2 snap:(id)arg3;
- (void)_deleteSnap:(id)arg1 entry:(id)arg2;
- (void)galleryCellActionMenu:(id)arg1 handleDelete:(id)arg2 snap:(id)arg3;
- (void)_makePHAssetPrivate:(id)arg1;
- (void)_makeItemPrivate:(id)arg1;
- (void)_makeItemPublic:(id)arg1;
- (id)_createSessionUserContext;
- (void)galleryCellActionMenu:(id)arg1 actionIsFromPanGesture:(_Bool)arg2;
- (void)_toggleItem:(id)arg1;
- (void)galleryCellActionMenu:(id)arg1 handleTogglePrivate:(id)arg2;
- (void)galleryCellActionMenu:(id)arg1 handleRenameStory:(id)arg2 snap:(id)arg3;
- (void)galleryCellActionMenu:(id)arg1 handleExport:(id)arg2 snap:(id)arg3;
- (void)_handleEditItem:(id)arg1 snap:(id)arg2 lens:(id)arg3 editedImage:(id)arg4;
- (void)galleryCellActionMenu:(id)arg1 handleEdit:(id)arg2 snap:(id)arg3;
- (void)privateGallerySetupFlowDidFinish:(id)arg1;
- (void)privateGallerySetupFlowDidCancel:(id)arg1;
- (void)presentActionMenuForItem:(id)arg1 snap:(id)arg2 sourcePageName:(id)arg3 sourceView:(id)arg4 sourceImage:(id)arg5 navigationController:(id)arg6 topInset:(double)arg7;
- (void)handleLongPress:(id)arg1 item:(id)arg2 snap:(id)arg3 sourcePageName:(id)arg4 sourceView:(id)arg5 sourceImage:(id)arg6 navigationController:(id)arg7 topInset:(double)arg8;
- (void)_setupActionMenuForItem:(id)arg1 snap:(id)arg2 sourceView:(id)arg3 sourceImage:(id)arg4;
- (id)initWithType:(long long)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

