//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

#import "SCTraceEnabled.h"

@class NSString, UIColor, UIFont;

@interface SCChatInputTextView : UITextView <SCTraceEnabled>
{
    UIFont *_originalFont;
    UIFont *_boldFont;
    id <SCChatInputTextViewPasteDelegate> _textViewPasteDelegate;
}

@property(nonatomic) __weak id <SCChatInputTextViewPasteDelegate> textViewPasteDelegate; // @synthesize textViewPasteDelegate=_textViewPasteDelegate;
@property(retain, nonatomic) UIFont *boldFont; // @synthesize boldFont=_boldFont;
- (void).cxx_destruct;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)setFont:(id)arg1;
- (struct CGRect)_menuFrame;
- (void)_showMenu;
- (void)hideMenu;
- (id)_toggledBoldFont:(id)arg1;
- (void)_toggleBoldfaceForRange:(struct _NSRange)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (_Bool)_canPasteFromPasteboard;
- (_Bool)_canPasteVideo;
- (_Bool)_canPasteText;
- (_Bool)_canPasteImage;
- (void)paste:(id)arg1;
- (void)setKeyboardAppearance:(long long)arg1;
- (void)resetTypingAttributes;
- (void)clearText;
- (id)cleansedText;
@property(nonatomic) long long cursorPosition;
@property(copy, nonatomic) UIColor *cursorColor;
- (void)setTintColor:(id)arg1;
- (void)layoutSubviews;
- (void)_setupView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

