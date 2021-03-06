//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, SCGradientView, UIButton, UILabel;

@interface SCGroupInviteSubscreenHeaderView : UIView
{
    UILabel *_headerLabel;
    UIButton *_dismissArrow;
    SCGradientView *_bottomGradient;
    _Bool _respectsTopOfScreenSafeAreaInsets;
    id <SCGroupInviteSubscreenHeaderViewDelegate> _delegate;
    double _bottomShadowAlpha;
}

@property(nonatomic) double bottomShadowAlpha; // @synthesize bottomShadowAlpha=_bottomShadowAlpha;
@property(nonatomic) _Bool respectsTopOfScreenSafeAreaInsets; // @synthesize respectsTopOfScreenSafeAreaInsets=_respectsTopOfScreenSafeAreaInsets;
@property(nonatomic) __weak id <SCGroupInviteSubscreenHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setBottomShadowAlphaBasedOnScrollOffset:(double)arg1;
- (void)tintColorDidChange;
@property(copy, nonatomic) NSString *title;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (double)_itemsVerticalSpacing;
- (void)_dismissButtonPressed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

