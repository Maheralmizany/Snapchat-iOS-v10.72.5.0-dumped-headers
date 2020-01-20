//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCPostRegistrationRouter.h"

@class NSString, SCScopeExposer;

@interface SCPostRegistrationNavRouter : NSObject <SCPostRegistrationRouter>
{
    id <SCUIContainer> _uiContainer;
    SCScopeExposer *_contactPermissionRequestScopeExposer;
    SCScopeExposer *_addFriendsScopeExposer;
    id <SCPostRegistrationLogging> _postRegistrationLogger;
}

- (void).cxx_destruct;
- (void)endPostRegAddFriendsWorkflow;
- (void)startPostRegAddFriendsWorkflow:(id)arg1;
- (void)endContactPermissionRequestWorkflow;
- (void)startContactPermissionRequestWorkflow:(id)arg1;
- (id)initWithUIContainer:(id)arg1 contactPermissionRequestScopeExposer:(id)arg2 addFriendsScopeExposer:(id)arg3 postRegistrationLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
