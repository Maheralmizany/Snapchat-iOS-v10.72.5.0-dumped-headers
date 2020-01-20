//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFloatLabeledTextField.h"

#import "UITextFieldDelegate.h"

@class BTUICardType, NSMutableString, NSString, UITextPosition;

@interface SCPaymentsCardNumberTextViewV2 : SCFloatLabeledTextField <UITextFieldDelegate>
{
    BTUICardType *_defaultCardType;
    NSMutableString *_hiddenText;
    _Bool _isSecureEntry;
    _Bool _needsToUpdateCardType;
    BTUICardType *_cardType;
    struct _NSRange _mostRecentChangeRange;
    UITextPosition *_previousTextPosition;
    _Bool _shouldResignFirstResponderWhenComplete;
    id <SCPaymentsCardNumberTextViewV2Delegate> _textFieldDelegate;
}

@property(nonatomic) _Bool shouldResignFirstResponderWhenComplete; // @synthesize shouldResignFirstResponderWhenComplete=_shouldResignFirstResponderWhenComplete;
@property(nonatomic) __weak id <SCPaymentsCardNumberTextViewV2Delegate> textFieldDelegate; // @synthesize textFieldDelegate=_textFieldDelegate;
- (void).cxx_destruct;
- (unsigned long long)cardNumberMaxLength;
- (id)cardType;
- (void)formatTextField;
- (_Bool)isSecureTextEntry;
- (id)text;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
- (unsigned long long)status;
- (unsigned long long)status:(_Bool)arg1;
- (long long)cardNetwork;
- (void)setText:(id)arg1;
- (void)setSecureTextEntry:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

