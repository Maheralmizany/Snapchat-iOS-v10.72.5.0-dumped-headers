//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SCRecipientPickerConfirmationModel, SIGHeader;

@protocol SCRecipientPickerDelegate <NSObject>
- (void)didDismissWithSelectedItems:(NSArray *)arg1 header:(SIGHeader *)arg2;
- (void)didConfirmWithSelectedItems:(NSArray *)arg1 header:(SIGHeader *)arg2;

@optional
- (void)didPressTopRightButtonWithHeader:(SIGHeader *)arg1 uiContainer:(id <SCUIContainer>)arg2;
- (void)didViolateWithSelectedItems:(NSArray *)arg1 header:(SIGHeader *)arg2 confirmationModel:(SCRecipientPickerConfirmationModel *)arg3 uiConainer:(id <SCUIContainer>)arg4;
@end

