//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCTextView.h"

@interface SCPaymentsCardExpiryDateTextView : SCTextView
{
    _Bool _isInserting;
    _Bool _shouldResignFirstResponderWhenComplete;
}

@property(nonatomic) _Bool shouldResignFirstResponderWhenComplete; // @synthesize shouldResignFirstResponderWhenComplete=_shouldResignFirstResponderWhenComplete;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)isValidDate;
- (id)expirationYear;
- (id)expirationMonth;
- (_Bool)isComplete;

@end

