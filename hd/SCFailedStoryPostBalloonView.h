//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCExpandedButton, SCPreviewTooltipBalloon, UIButton, UILabel;

@interface SCFailedStoryPostBalloonView : UIView
{
    SCPreviewTooltipBalloon *_toolTipBalloon;
    UIView *_containerView;
    UILabel *_failedToPostLabel;
    SCExpandedButton *_retryButton;
    UIButton *_dismissButton;
    unsigned long long _failedStoryPostCount;
    id <SCFailedStoryPostDelegate> _delegate;
}

@property(nonatomic) __weak id <SCFailedStoryPostDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)contentSize;
- (void)_dismissButtonTapped:(id)arg1;
- (void)_retryTapped:(id)arg1;
- (void)setTrianglePosition:(long long)arg1 withOffset:(double)arg2;
- (void)setFailedStoryPostCount:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

