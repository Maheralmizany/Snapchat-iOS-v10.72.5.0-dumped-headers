//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel, UIVisualEffectView;

@interface SCOperaWSVideoEndView : UIView
{
    UIVisualEffectView *_blurredEffectView;
    UIImageView *_logoView;
    UILabel *_descriptionLabel;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
    UIButton *_cancelButtonWithBorder;
    _Bool _hasConfirmButton;
    id <SCOperaWSVideoEndViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCOperaWSVideoEndViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTap:(id)arg1;
- (void)_didTapCancelButton:(id)arg1;
- (void)_didTapConfirmButton:(id)arg1;
- (void)setImageURL:(id)arg1 description:(id)arg2 confirmButtonText:(id)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

