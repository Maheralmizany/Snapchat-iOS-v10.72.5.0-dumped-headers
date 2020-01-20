//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCGroupInviteEditorViewControllerDelegate.h"
#import "SCGroupInviteStickerEditorViewControllerDelegate.h"
#import "SCPreviewFeatureGroupSticker.h"
#import "SCPreviewGestureResponder.h"

@class NSString, SCLazy, SCQueuePerformer, SCUserSession;

@interface SCPreviewFeatureGroupStickerImpl : SCFeature <SCGroupInviteEditorViewControllerDelegate, SCPreviewGestureResponder, SCGroupInviteStickerEditorViewControllerDelegate, SCPreviewFeatureGroupSticker>
{
    id <SCPreviewFeatureStickerContainer> _stickerContainer;
    id <SCPreviewLogging> _previewLogger;
    SCUserSession *_userSession;
    SCLazy *_groupsDataFetching;
    CDUnknownBlockType _inviteEditingCompletion;
    _Bool _stickerEditingEnabled;
    SCQueuePerformer *_performer;
    id <SCPreviewFeatureParentViewControllerAccessing> _delegate;
}

@property(nonatomic) __weak id <SCPreviewFeatureParentViewControllerAccessing> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_editExistingSticker;
- (void)createGroupInviteForRecipientUsernames:(id)arg1 recipientGroupIds:(id)arg2 completionPerformer:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)groupStickerEditor:(id)arg1 wantsToInsertStickerForInvite:(id)arg2 isNewlyCreated:(_Bool)arg3;
- (void)groupInviteStickerEditorViewControllerDidDismissWithoutSelectingInvite:(id)arg1;
- (void)groupInviteStickerEditorViewController:(id)arg1 didSelectInviteWithDetails:(id)arg2;
- (void)_editGroupSticker:(id)arg1 previewStickerView:(id)arg2;
- (void)_presentGroupStickerEditorWithStyle:(long long)arg1 existingStickerOrNil:(id)arg2 inviteEditingCompletion:(CDUnknownBlockType)arg3;
- (id)_groupStickersOnSnap;
- (void)disableExistingGroupStickerEditing;
- (_Bool)hasGroupInviteStickersOnSnap;
- (void)insertEventStickerWithStyle:(long long)arg1 center:(struct CGPoint)arg2 thumbnail:(id)arg3 isFromRecents:(_Bool)arg4;
- (unsigned long long)didTapPreviewContainerView:(id)arg1;
- (id)initWithStickerContainer:(id)arg1 userSession:(id)arg2 previewLogger:(id)arg3 groupsDataFetching:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
