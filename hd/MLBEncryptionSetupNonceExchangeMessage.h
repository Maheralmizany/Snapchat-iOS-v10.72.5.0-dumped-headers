//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData;

@interface MLBEncryptionSetupNonceExchangeMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNonce; // @dynamic hasNonce;
@property(copy, nonatomic) NSData *nonce; // @dynamic nonce;

@end

