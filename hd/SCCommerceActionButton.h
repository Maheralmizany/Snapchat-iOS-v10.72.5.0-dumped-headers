//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class SCLoadingIndicatorView, UIButton, UIColor;

@interface SCCommerceActionButton : UIControl
{
    UIButton *_button;
    SCLoadingIndicatorView *_loadingIndicatorView;
    UIColor *_highlightedTextColor;
}

@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(retain, nonatomic) SCLoadingIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)_setButtonUserInteractionEnabledForState:(unsigned long long)arg1;
- (void)_setButtonBackgroundColorForState:(unsigned long long)arg1;
- (void)_setButtonTextColorForState:(unsigned long long)arg1;
- (void)_configButtonForState:(unsigned long long)arg1;
- (void)_setup;
- (void)setTitle:(id)arg1 withState:(unsigned long long)arg2;
- (void)setState:(unsigned long long)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
@property(nonatomic) _Bool isHighlightingEnabled;
- (void)setAccessibilityIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

