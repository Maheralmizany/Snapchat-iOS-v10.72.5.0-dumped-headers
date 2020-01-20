//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCFindFriendsCache;

@interface SCFindFriendsManager : NSObject
{
    SCFindFriendsCache *_cache;
}

- (void).cxx_destruct;
- (id)updateFindFriendsTimestampsWithRequestDate:(id)arg1 recentTimestamps:(id)arg2;
- (id)updateFindFriendsResults:(id)arg1 localNumbersDict:(id)arg2 numbersExpired:(id)arg3;
- (id)getIncrementalNumbersDict:(_Bool)arg1 localNumbersDict:(id)arg2 numbersToResend:(id)arg3 newContactsWithTimestampCheck:(id)arg4;
- (id)newContactsFromLocalAddressBook:(id)arg1;
- (id)selectExpiredNumbersFromCache:(id)arg1 localNumbersDict:(id)arg2;
- (void)removePhoneNumbersNoLongerInAddressBook:(id)arg1;
- (id)initWithCache:(id)arg1;

@end
