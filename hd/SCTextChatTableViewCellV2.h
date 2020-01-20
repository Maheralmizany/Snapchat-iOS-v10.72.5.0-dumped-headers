//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSavableItemChatTableViewCell.h"

#import "SCActionMenuRenderableCell.h"
#import "SCBrowserViewControllerDelegate.h"
#import "TTTAttributedLabelDelegate.h"

@class NSArray, NSMutableArray, NSString, SCChatTextLabel, UIViewController<SCChatCellMessageStateUpdateDelegate><SCChatCellURLLinkGestureDelegate><SKStoreProductViewControllerDelegate><SCActionSheetDelegate><SCPageNameLogging>;

@interface SCTextChatTableViewCellV2 : SCSavableItemChatTableViewCell <SCBrowserViewControllerDelegate, TTTAttributedLabelDelegate, SCActionMenuRenderableCell>
{
    UIViewController<SCChatCellMessageStateUpdateDelegate><SCChatCellURLLinkGestureDelegate><SKStoreProductViewControllerDelegate><SCActionSheetDelegate><SCPageNameLogging> *_parentVC;
    NSMutableArray *_mediaCards;
    SCChatTextLabel *_chatLabel;
    id <SCTextChatTableViewCellV2Delegate> _delegate;
}

@property(retain, nonatomic) NSArray *mediaCards; // @synthesize mediaCards=_mediaCards;
@property(nonatomic) __weak id <SCTextChatTableViewCellV2Delegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCChatTextLabel *chatLabel; // @synthesize chatLabel=_chatLabel;
- (void).cxx_destruct;
- (void)configureWithParentVC:(id)arg1;
- (void)resetWithOriginalContent;
- (id)actionMenuContentViewForIndex:(unsigned long long)arg1;
- (void)configureWithActionMenuVC:(id)arg1;
- (long long)actionMenuIndexForPointInsideCell:(struct CGPoint)arg1;
- (void)browserViewIsClosing;
- (void)_openURL:(id)arg1 linkAttribute:(id)arg2 cachedWebViewController:(id)arg3;
- (id)_copyActionForUrl:(id)arg1;
- (id)_openActionForUrl:(id)arg1 linkAttribute:(id)arg2;
- (_Bool)_isURLforMention:(id)arg1;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)_appendMediaCardView:(id)arg1 withVerticalOffset:(double)arg2;
- (void)renderCreatedMediaCards:(id)arg1;
- (void)renderMediaCards;
- (void)_resetMediaCards;
- (void)_updateMediaCard:(id)arg1 viewModel:(id)arg2 backgroundColor:(id)arg3;
- (id)_createNewMediaCard:(id)arg1 backgroundColor:(id)arg2;
- (void)renderChatLabel;
- (void)layoutSubviews;
- (void)renderPayload;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 parentVC:(id)arg3 userSession:(id)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)textViewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

