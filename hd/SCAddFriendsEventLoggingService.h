//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCSessionRequestManager;

@interface SCAddFriendsEventLoggingService : NSObject
{
    SCSessionRequestManager *_sessionRequestManager;
}

- (void).cxx_destruct;
- (void)sendSeenEventRequestForSuggestedSnapchatters:(id)arg1 addedSuggestedSnapchatters:(id)arg2 seenAddedMeSnapchatters:(id)arg3 addedAddedMeSnapchatters:(id)arg4 placement:(id)arg5 impressionId:(id)arg6 impressionTimeMs:(id)arg7;
- (id)initWithSessionRequestManager:(id)arg1;

@end
