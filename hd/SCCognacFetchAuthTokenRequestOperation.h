//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCCognacWVJBRequestOperation.h"

@class NSString;

@interface SCCognacFetchAuthTokenRequestOperation : SCCognacWVJBRequestOperation
{
    id <SCCognacAppInstanceAuthTokenProviding> _authTokenProvider;
    NSString *_sessionId;
}

@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) id <SCCognacAppInstanceAuthTokenProviding> authTokenProvider; // @synthesize authTokenProvider=_authTokenProvider;
- (void).cxx_destruct;
- (_Bool)_validateState;
- (void)run;

@end

