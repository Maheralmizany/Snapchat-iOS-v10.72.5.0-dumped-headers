//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCBlockedExceptionAlertDelegate.h"

@class SCLazy;

@interface SCBlockedExceptionAlertViewController : NSObject <SCBlockedExceptionAlertDelegate>
{
    SCLazy *_blockedExceptionAlertView;
    SCLazy *_blockedExceptionSendToAlertView;
    SCLazy *_leaveGroupAlertViewController;
    SCLazy *_groupsDataFetcher;
    SCLazy *_arroyoConversationIdsManager;
    id <SCBlockedExceptionAlertControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCBlockedExceptionAlertControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didPressLeaveChatForGroupId:(id)arg1 inAlertFlow:(id)arg2;
- (void)didPressGrantExceptionForGroupId:(id)arg1 blockedParticipantExceptions:(id)arg2;
- (void)_showBlockedExceptionSendToAlertForGroup:(id)arg1;
- (void)_showBlockedExceptionAlertForGroup:(id)arg1;
- (void)presentBlockedExceptionSendToAlertViewForGroupId:(id)arg1;
- (void)presentBlockedExceptionAlertViewForGroupId:(id)arg1;
- (id)init;

@end

