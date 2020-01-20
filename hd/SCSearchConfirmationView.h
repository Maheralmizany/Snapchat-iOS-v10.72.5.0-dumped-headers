//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCViewModelConfigurable.h"

@class NSString, SCSearchActionButton, SCShapeView, UILabel;

@interface SCSearchConfirmationView : UIView <SCViewModelConfigurable>
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    SCSearchActionButton *_positiveButton;
    SCSearchActionButton *_negativeButton;
    SCShapeView *_backgroundView;
    struct CGRect _currentBackgroundRect;
    NSString *_viewModel;
    id <SCSearchConfirmationViewDelegate> _delegate;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(nonatomic) __weak id <SCSearchConfirmationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_handleButtonTap:(id)arg1;
- (void)_layoutBackgroundViewIfNeeded;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
