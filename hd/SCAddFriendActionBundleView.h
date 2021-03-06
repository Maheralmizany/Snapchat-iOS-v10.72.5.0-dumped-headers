//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCAddFriendButtonV2, SCFriendActionButtonsGroup, SCFriendActionButtonsGroupConfiguration;

@interface SCAddFriendActionBundleView : UIView
{
    SCAddFriendButtonV2 *_addFriendButton;
    SCFriendActionButtonsGroupConfiguration *_friendActionButtonsGroupConfiguration;
    SCFriendActionButtonsGroup *_friendActionButtonsGroup;
    long long _state;
    id <SCAddFriendButtonV2Delegate> _delegate;
}

- (void).cxx_destruct;
- (void)_setContainerWidth:(double)arg1 height:(double)arg2;
- (id)friendActionButtonsGroup;
- (id)getTitleTextWithConfiguration:(id)arg1;
- (id)addFriendButton;
- (_Bool)shouldHideImageForAddButton:(id)arg1;
- (_Bool)updateWithAddButtonState:(long long)arg1 addButtonStyle:(long long)arg2 friendActionButtonsGroupConfiguration:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

@end

