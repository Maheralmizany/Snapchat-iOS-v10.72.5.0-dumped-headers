//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCMiniProfileOptionViewModel, UIImageView, UILabel;

@interface SCMiniProfileOptionView : UIView
{
    UILabel *_label;
    UIImageView *_imageView;
    SCMiniProfileOptionViewModel *_optionViewModel;
    id <SCMiniProfileOptionViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCMiniProfileOptionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCMiniProfileOptionViewModel *optionViewModel; // @synthesize optionViewModel=_optionViewModel;
- (void).cxx_destruct;
- (void)_didSelectOptionView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

