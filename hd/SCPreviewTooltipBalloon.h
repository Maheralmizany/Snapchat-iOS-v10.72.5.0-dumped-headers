//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSAttributedString, NSString, UIColor, UIFont, UILabel;

@interface SCPreviewTooltipBalloon : UIView
{
    UIView *_triangle;
    UILabel *_textLabel;
    _Bool _triangleHidden;
    UIView *_contentView;
    double _verticalPadding;
    double _horizontalPadding;
}

+ (id)bloopsOnboardingTooltipWithTrianglePosition:(long long)arg1 withTriangleOffset:(double)arg2;
@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
@property(nonatomic) double verticalPadding; // @synthesize verticalPadding=_verticalPadding;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)fadeInAndOutWithDuration:(double)arg1;
- (void)runPopupAnimation;
- (struct CGSize)intrinsicContentSize;
- (void)setShadowOpacity:(double)arg1;
- (void)setTriangleHidden:(_Bool)arg1;
- (void)setTrianglePosition:(long long)arg1 withOffset:(double)arg2;
- (void)setTextAlignment:(long long)arg1;
- (long long)textAlignment;
@property(copy, nonatomic) UIFont *textFont;
@property(copy, nonatomic) UIColor *triangleColor;
@property(copy, nonatomic) UIColor *textColor;
- (void)setBackgroundColor:(id)arg1;
@property(nonatomic) long long textNumberOfLines;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(copy, nonatomic) NSString *text;
- (id)initWithFrame:(struct CGRect)arg1;

@end

