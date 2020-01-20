//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

#import "SIGTextFieldPillScrollViewObserver.h"
#import "UIScrollViewDelegate.h"

@class CAShapeLayer, NSArray, NSString, SIGTextFieldPillScrollView, SIGTextFieldRightView, UIColor;

@interface SIGTextField : UITextField <SIGTextFieldPillScrollViewObserver, UIScrollViewDelegate>
{
    CAShapeLayer *_textBackground;
    SIGTextFieldRightView *_rightView;
    SIGTextFieldPillScrollView *_pillScrollView;
    UIColor *_normalTextBackgroundColor;
    UIColor *_activeTextBackgroundColor;
    id <SIGTextFieldPillDelegate> _pillsDelegate;
}

+ (Class)layerClass;
+ (id)textFieldWithLeadingLabel:(id)arg1;
+ (id)textFieldWithLeadingIcon:(id)arg1;
@property(nonatomic) __weak id <SIGTextFieldPillDelegate> pillsDelegate; // @synthesize pillsDelegate=_pillsDelegate;
@property(copy, nonatomic) UIColor *activeTextBackgroundColor; // @synthesize activeTextBackgroundColor=_activeTextBackgroundColor;
@property(copy, nonatomic) UIColor *normalTextBackgroundColor; // @synthesize normalTextBackgroundColor=_normalTextBackgroundColor;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)textFieldPillScrollView:(id)arg1 pillShouldBeDeleted:(id)arg2;
- (void)textFieldPillScrollView:(id)arg1 textReceived:(id)arg2;
- (void)textFieldPillScrollView:(id)arg1 intrinsicSizeDidChange:(struct CGSize)arg2;
- (void)deleteBackward;
- (void)setPlaceholder:(id)arg1;
- (void)setRightView:(id)arg1;
- (void)setClearButtonMode:(long long)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)borderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (_Bool)becomeFirstResponder;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets)arg1;
- (struct CGRect)_textFrame;
- (struct CGRect)_pillScrollViewFrame;
- (double)_pillScrollViewWidth;
- (double)_inputTextWidth;
- (struct CGRect)_textRegion;
- (struct CGRect)_placeholderTextBounds;
- (struct CGRect)_contentBounds;
- (struct CGRect)_borderBounds;
- (void)_rebuildTextBackgroundLayer;
- (struct CGRect)_normalizeRect:(struct CGRect)arg1 forBounds:(struct CGRect)arg2;
- (double)_textWidth:(id)arg1;
- (void)_textDidChange;
- (void)_clearButtonPressed;
- (void)removePill:(id)arg1;
- (void)addPill:(id)arg1;
@property(readonly, nonatomic) NSArray *pills;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

