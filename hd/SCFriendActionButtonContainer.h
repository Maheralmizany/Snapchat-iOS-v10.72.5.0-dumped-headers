//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCFriendActionButton;

@interface SCFriendActionButtonContainer : UIView
{
    SCFriendActionButton *_button;
}

@property(readonly, nonatomic) SCFriendActionButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (double)_hintLabelTopPaddingForButtonType:(unsigned long long)arg1;
- (id)_hintColorForButtonType:(unsigned long long)arg1;
- (id)_createLabelWithButtonType:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 button:(id)arg2 buttonType:(unsigned long long)arg3 showHintLabel:(_Bool)arg4;

@end

