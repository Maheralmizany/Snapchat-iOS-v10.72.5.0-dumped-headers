//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCDiscoverFeedLabelPrefixIconViewModel, UIImageView, UILabel;

@interface SCDiscoverFeedLabelPrefixIconView : UIView
{
    UIImageView *_prefixIconImageView;
    UILabel *_prefixIconEmojiLabel;
    SCDiscoverFeedLabelPrefixIconViewModel *_viewModel;
}

@property(copy, nonatomic) SCDiscoverFeedLabelPrefixIconViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

