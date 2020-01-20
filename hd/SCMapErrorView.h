//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface SCMapErrorView : UIView
{
    id <SCMapErrorViewDelegate> _delegate;
    UIButton *_backButton;
    UILabel *_headerLabel;
    UILabel *_subtextLabel;
}

@property(readonly, nonatomic) UILabel *subtextLabel; // @synthesize subtextLabel=_subtextLabel;
@property(readonly, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(readonly, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak id <SCMapErrorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapBackButton;
- (void)_setupView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

