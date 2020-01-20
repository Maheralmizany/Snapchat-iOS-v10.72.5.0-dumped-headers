//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCSnapchattersDataRequestListener.h"

@class NSDictionary, NSString, SCSearchActionButton, SCSnapchatter;

@interface SCComposerAddFriendButton : UIView <SCSnapchattersDataRequestListener>
{
    SCSnapchatter *_snapchatter;
    SCSearchActionButton *_actionButton;
    id <SCComposerAction> _onFriendAdded;
    id <SCComposerAction> _onFriendRemoved;
    _Bool _pendingFriendRemoval;
    NSDictionary *_userInfo;
}

+ (id)measurePlaceholderView;
+ (void)bindAttributes:(id)arg1;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)_onActionButtonTap;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateModelForSnapchatterWithIsLoading:(_Bool)arg1;
- (long long)_addSourceTypeForMention;
- (void)_updateForSnapchatter:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

