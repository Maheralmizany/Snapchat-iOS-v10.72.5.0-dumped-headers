//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@class SCComposerTextFieldDelegate;

@interface SCComposerTextField : UITextField
{
    SCComposerTextFieldDelegate *_composerTextFieldDelegate;
    id <SCComposerFunction> _onEditBegin;
    id <SCComposerFunction> _onChange;
    id <SCComposerFunction> _onEditEnd;
}

+ (id)_composerPlaceholderComponents;
+ (id)measurePlaceholderView;
+ (void)bindAttributes:(id)arg1;
- (void).cxx_destruct;
- (id)_textFieldDelegate;
- (_Bool)composer_setValue:(id)arg1;
- (_Bool)composer_setPlaceholder:(id)arg1 color:(id)arg2;
- (void)composer_setOnEditEnd:(id)arg1;
- (void)composer_setOnChange:(id)arg1;
- (void)composer_setOnEditBegin:(id)arg1;
- (_Bool)composer_setSelectTextOnFocus:(_Bool)arg1;
- (_Bool)composer_setImmutablePrefix:(id)arg1;
- (_Bool)composer_setTintColor:(id)arg1;
- (_Bool)composer_setTextColor:(id)arg1;
- (_Bool)composer_setFont:(id)arg1;
- (_Bool)composer_setFocused:(_Bool)arg1;
- (_Bool)composer_setClosesWhenReturnKeyPressed:(_Bool)arg1;
- (_Bool)composer_setCharacterLimit:(long long)arg1;
- (_Bool)composer_setAdjustsFontSizeToFitWidth:(_Bool)arg1;
- (void)onEditEnd;
- (void)onChange;
- (void)onEditBegin;
- (_Bool)willEnqueueIntoComposerPool;
- (id)initWithFrame:(struct CGRect)arg1;

@end

