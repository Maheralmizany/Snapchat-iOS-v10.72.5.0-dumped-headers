//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCDelegateActionable.h"
#import "SCSnapchatterViewModelConfigurable.h"

@class NSString, SCLazy;

@interface SCSnapchatterAccessoryView : UIView <SCSnapchatterViewModelConfigurable, SCDelegateActionable>
{
    SCLazy *_buttonAccessoryView;
    SCLazy *_friendmojiAccessoryView;
    SCLazy *_buttonGroupAcessoryView;
    UIView *_accessoryView;
    id _viewModel;
    id <SCActionHandlingDelegate> _actionHandlingDelegate;
}

@property(nonatomic) __weak id <SCActionHandlingDelegate> actionHandlingDelegate; // @synthesize actionHandlingDelegate=_actionHandlingDelegate;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_setAccessoryView:(id)arg1;
- (void)_updateButtonGroupAccessoryViewWithButtonAccessoryViewModel:(id)arg1;
- (void)_updateFriendmojiAccessoryViewWithFriendmojiAccessoryViewModel:(id)arg1;
- (void)_updateButtonAccessoryViewWithButtonAccessoryViewModel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
