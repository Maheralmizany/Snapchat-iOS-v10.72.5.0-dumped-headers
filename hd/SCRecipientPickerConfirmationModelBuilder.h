//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCRecipientPickerConfirmationModelBuilder : NSObject
{
    NSString *_title;
    _Bool _isEnabled;
    _Bool _isValid;
    NSString *_violation;
}

+ (id)recipientPickerConfirmationModelFromExistingRecipientPickerConfirmationModel:(id)arg1;
+ (id)recipientPickerConfirmationModel;
- (void).cxx_destruct;
- (id)withViolation:(id)arg1;
- (id)withIsValid:(_Bool)arg1;
- (id)withIsEnabled:(_Bool)arg1;
- (id)withTitle:(id)arg1;
- (id)build;

@end

