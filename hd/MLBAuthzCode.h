//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface MLBAuthzCode : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *authzCode; // @dynamic authzCode;
@property(copy, nonatomic) NSString *codeVerifier; // @dynamic codeVerifier;
@property(nonatomic) _Bool hasAuthzCode; // @dynamic hasAuthzCode;
@property(nonatomic) _Bool hasCodeVerifier; // @dynamic hasCodeVerifier;
@property(nonatomic) _Bool hasRedirectUri; // @dynamic hasRedirectUri;
@property(copy, nonatomic) NSString *redirectUri; // @dynamic redirectUri;

@end
