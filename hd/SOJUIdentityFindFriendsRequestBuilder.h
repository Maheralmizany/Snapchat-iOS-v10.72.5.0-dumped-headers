//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface SOJUIdentityFindFriendsRequestBuilder : NSObject
{
    NSString *_dtoken1i;
    NSString *_dsig;
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_numbers;
    NSString *_countryCode;
    NSArray *_contactsWithMetaData;
    NSNumber *_shouldRecommend;
    NSNumber *_isFullSync;
    NSString *_source;
    NSNumber *_signUpTapTimeStamp;
}

+ (id)withJUIdentityFindFriendsRequest:(id)arg1;
- (void).cxx_destruct;
- (id)setSignUpTapTimeStamp:(id)arg1;
- (id)setSource:(id)arg1;
- (id)setIsFullSync:(id)arg1;
- (id)setShouldRecommend:(id)arg1;
- (id)setContactsWithMetaData:(id)arg1;
- (id)setCountryCode:(id)arg1;
- (id)setNumbers:(id)arg1;
- (id)setUsername:(id)arg1;
- (id)setReqToken:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)setDsig:(id)arg1;
- (id)setDtoken1i:(id)arg1;
- (id)build;
- (id)setSignUpTapTimeStampValue:(long long)arg1;
- (id)setSourceEnum:(long long)arg1;
- (id)setIsFullSyncValue:(_Bool)arg1;
- (id)setShouldRecommendValue:(_Bool)arg1;

@end

