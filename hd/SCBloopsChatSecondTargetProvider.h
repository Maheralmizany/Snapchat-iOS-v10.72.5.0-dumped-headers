//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCBloopsAPIListener.h"

@class NSArray, NSString, SCLazy, SCUserSession;

@interface SCBloopsChatSecondTargetProvider : NSObject <SCBloopsAPIListener>
{
    SCLazy *_targetsService;
    SCUserSession *_userSession;
    SCLazy *_bloopsAPI;
    id <SCBloopsUserIdsProviding> _userIdsProvider;
    NSArray *_lastFriendIds;
    id <SCBloopsChatSecondTargetProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <SCBloopsChatSecondTargetProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)bloopsAPIDidResetPersonsSource:(id)arg1;
- (void)updateSecondTargetIfNecessary;
- (id)initWithTargetsService:(id)arg1 userIdsProvider:(id)arg2 userSession:(id)arg3 bloopsAPI:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

