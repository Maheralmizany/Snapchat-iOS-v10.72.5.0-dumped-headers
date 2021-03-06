//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCScopedAccess;

@interface SCEditGroupAlertView : NSObject
{
    SCScopedAccess *_friendsFeedDataAccess;
    SCScopedAccess *_clearConversationDataAccess;
    id <SCEditGroupAlertViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCEditGroupAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_clearFriendsFeedItem:(id)arg1;
- (id)formattedGroupParticipantNamesForGroup:(id)arg1 actions:(id)arg2;
- (void)presentEditGroupAlertViewForGroup:(id)arg1 showParticipants:(_Bool)arg2;
- (id)init;

@end

