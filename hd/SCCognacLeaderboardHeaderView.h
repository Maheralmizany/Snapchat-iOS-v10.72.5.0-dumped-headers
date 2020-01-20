//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UILabel;

@interface SCCognacLeaderboardHeaderView : UIView
{
    UIView *_backgroundView;
    UIButton *_moreButton;
    UIButton *_dismissButton;
    UILabel *_titleLabel;
    id <SCCognacLeaderboardHeaderViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCCognacLeaderboardHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didPressButton:(id)arg1;
@property(nonatomic) double titleAlpha;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) double backgroundAlpha;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

