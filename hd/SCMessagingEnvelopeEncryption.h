//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEmpty, SCMessagingConversationEnvelopeEncryptionV1, SCMessagingFideliusEncryption;

@interface SCMessagingEnvelopeEncryption : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCMessagingConversationEnvelopeEncryptionV1 *conversationV1; // @dynamic conversationV1;
@property(readonly, nonatomic) int encryptionOneOfCase; // @dynamic encryptionOneOfCase;
@property(retain, nonatomic) SCMessagingFideliusEncryption *fidelius; // @dynamic fidelius;
@property(retain, nonatomic) GPBEmpty *none; // @dynamic none;

@end

