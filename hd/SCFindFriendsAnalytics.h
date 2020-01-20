//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCFindFriendsAnalytics : NSObject
{
    _Bool _serverDataReady;
    _Bool _isRegistration;
    unsigned long long _sizeOfAddressBook;
    double _onContactAccessGrantTime;
    double _onFindFriendsRequest;
    double _onFindFriendsResponse;
    unsigned long long _numOfSnapchatters;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long numOfSnapchatters; // @synthesize numOfSnapchatters=_numOfSnapchatters;
@property(nonatomic) _Bool isRegistration; // @synthesize isRegistration=_isRegistration;
@property(nonatomic) double onFindFriendsResponse; // @synthesize onFindFriendsResponse=_onFindFriendsResponse;
@property(nonatomic) double onFindFriendsRequest; // @synthesize onFindFriendsRequest=_onFindFriendsRequest;
@property(readonly, nonatomic) _Bool serverDataReady; // @synthesize serverDataReady=_serverDataReady;
@property(readonly, nonatomic) double onContactAccessGrantTime; // @synthesize onContactAccessGrantTime=_onContactAccessGrantTime;
@property(nonatomic) unsigned long long sizeOfAddressBook; // @synthesize sizeOfAddressBook=_sizeOfAddressBook;
@property(readonly, nonatomic) double contactsGrantedToFriendsResponseLatencyMs;
- (void)logFindFriendsLatencies;
- (void)setAddressBookAnalytics:(unsigned long long)arg1 numSnapchatters:(unsigned long long)arg2;
- (void)setTimestampOnSentFindFriendsRequestWithAddressBookSize:(unsigned long long)arg1;
- (void)setTimestampOnContactAccessGrant;
- (void)setRegistration:(_Bool)arg1;
- (void)_resetAnalytics;
- (id)init;

@end

