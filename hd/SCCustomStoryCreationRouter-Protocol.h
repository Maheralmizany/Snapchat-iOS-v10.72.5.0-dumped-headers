//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SCCustomStoryCreationRouter <NSObject>
- (void)beginStoryNameErrorDialogWithResponseCode:(long long)arg1 delegate:(id <SCCustomStoryCreationErrorAlertDelegate>)arg2;
- (void)beginStoryNameSelectionWithStoryType:(unsigned long long)arg1 delegate:(id <SCCustomStoryCreationNamingAlertDelegate>)arg2;
- (void)dismissMemberSelection;
- (void)completeMemberSelection;
- (void)beginCustomStoryMemberSelectionWithDelegate:(id <SCRecipientPickerDelegate>)arg1;
- (void)beginPrivateStoryMemberSelectionWithDelegate:(id <SCRecipientPickerDelegate>)arg1;
- (void)endCustomStoryTypeSelection;
- (void)beginCustomStoryTypeSelectionWithDelegate:(id <SCCustomStoryCreationActionMenuDelegate>)arg1;
@end

