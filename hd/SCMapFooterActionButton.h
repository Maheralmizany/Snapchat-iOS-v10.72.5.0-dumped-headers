//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCGrowingButton, SCMapFooterActionCalloutView, UIColor, UILabel;

@interface SCMapFooterActionButton : UIView
{
    SCGrowingButton *_button;
    UILabel *_label;
    long long _calloutArrowPosition;
    SCMapFooterActionCalloutView *_calloutView;
    UIView *_innerView;
    UIColor *_badgeColor;
    UIColor *_badgeTextColor;
}

+ (id)_calloutTextFont;
@property(copy, nonatomic) UIColor *badgeTextColor; // @synthesize badgeTextColor=_badgeTextColor;
@property(copy, nonatomic) UIColor *badgeColor; // @synthesize badgeColor=_badgeColor;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)isPressed;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (long long)calloutState;
@property(readonly, nonatomic) SCMapFooterActionCalloutView *calloutView;
- (_Bool)textFitsInsideCallout:(id)arg1;
- (void)setBadgeAndCalloutState:(long long)arg1 animated:(_Bool)arg2;
- (void)setBadgeText:(id)arg1;
- (void)setCalloutText:(id)arg1 subtitle:(id)arg2 emoji:(id)arg3 textColor:(id)arg4 backgroundColor:(id)arg5;
- (void)_commonInitWithLabel:(id)arg1 calloutArrowPosition:(long long)arg2;
- (id)initWithView:(id)arg1 label:(id)arg2 calloutArrowPosition:(long long)arg3;
- (id)initWithImage:(id)arg1 label:(id)arg2 calloutArrowPosition:(long long)arg3;

@end
