//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@class UIColor, UIFont, UILabel;

@interface SCFloatLabeledTextField : UITextField
{
    _Bool _isFloatingLabelFontDefault;
    _Bool _animateEvenIfNotFirstResponder;
    _Bool _adjustsClearButtonRect;
    _Bool _keepBaseline;
    _Bool _alwaysShowFloatingLabel;
    UILabel *_floatingLabel;
    double _floatingLabelYPadding;
    double _floatingLabelXPadding;
    double _floatingLabelReductionRatio;
    double _placeholderYPadding;
    UIFont *_floatingLabelFont;
    UIColor *_floatingLabelTextColor;
    UIColor *_floatingLabelActiveTextColor;
    double _floatingLabelShowAnimationDuration;
    double _floatingLabelHideAnimationDuration;
    UIColor *_placeholderColor;
    struct UIEdgeInsets _edgeInsets;
}

@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(nonatomic) _Bool alwaysShowFloatingLabel; // @synthesize alwaysShowFloatingLabel=_alwaysShowFloatingLabel;
@property(nonatomic) _Bool keepBaseline; // @synthesize keepBaseline=_keepBaseline;
@property(nonatomic) _Bool adjustsClearButtonRect; // @synthesize adjustsClearButtonRect=_adjustsClearButtonRect;
@property(nonatomic) double floatingLabelHideAnimationDuration; // @synthesize floatingLabelHideAnimationDuration=_floatingLabelHideAnimationDuration;
@property(nonatomic) double floatingLabelShowAnimationDuration; // @synthesize floatingLabelShowAnimationDuration=_floatingLabelShowAnimationDuration;
@property(nonatomic) _Bool animateEvenIfNotFirstResponder; // @synthesize animateEvenIfNotFirstResponder=_animateEvenIfNotFirstResponder;
@property(retain, nonatomic) UIColor *floatingLabelActiveTextColor; // @synthesize floatingLabelActiveTextColor=_floatingLabelActiveTextColor;
@property(retain, nonatomic) UIColor *floatingLabelTextColor; // @synthesize floatingLabelTextColor=_floatingLabelTextColor;
@property(retain, nonatomic) UIFont *floatingLabelFont; // @synthesize floatingLabelFont=_floatingLabelFont;
@property(nonatomic) double placeholderYPadding; // @synthesize placeholderYPadding=_placeholderYPadding;
@property(nonatomic) double floatingLabelReductionRatio; // @synthesize floatingLabelReductionRatio=_floatingLabelReductionRatio;
@property(nonatomic) double floatingLabelXPadding; // @synthesize floatingLabelXPadding=_floatingLabelXPadding;
@property(nonatomic) double floatingLabelYPadding; // @synthesize floatingLabelYPadding=_floatingLabelYPadding;
@property(readonly, nonatomic) UILabel *floatingLabel; // @synthesize floatingLabel=_floatingLabel;
- (void).cxx_destruct;
- (double)maxTopInset;
- (void)setFloatingLabelText:(id)arg1;
- (struct CGRect)insetRectForBounds:(struct CGRect)arg1;
- (void)setLabelOriginForTextAlignment;
- (void)setCorrectPlaceholder:(id)arg1;
- (id)labelActiveColor;
- (void)updateDefaultFloatingLabelFont;
- (id)defaultFloatingLabelFont;
- (void)hideFloatingLabel:(_Bool)arg1;
- (void)showFloatingLabel:(_Bool)arg1;
- (void)setAttributedPlaceholder:(id)arg1 floatingTitle:(id)arg2;
- (void)setPlaceholder:(id)arg1 floatingTitle:(id)arg2;
- (void)layoutSubviews;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (void)setTextAlignment:(long long)arg1;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (void)setAttributedPlaceholder:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setAttributedText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

