//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface SCGroupInviteEditorFooterViewButton : UIView
{
    UILabel *_title;
    UIImageView *_icon;
    CDUnknownBlockType _tapBlock;
}

- (void).cxx_destruct;
- (void)_tapped;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 tapBlock:(CDUnknownBlockType)arg3;

@end

