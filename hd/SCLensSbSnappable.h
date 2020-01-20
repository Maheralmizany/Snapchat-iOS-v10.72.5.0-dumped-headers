//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCLensSbEncryptionData, SCLensSbSessionData;

@interface SCLensSbSnappable : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long createdTime; // @dynamic createdTime;
@property(retain, nonatomic) SCLensSbEncryptionData *encryptionData; // @dynamic encryptionData;
@property(nonatomic) long long expireTime; // @dynamic expireTime;
@property(nonatomic) _Bool hasEncryptionData; // @dynamic hasEncryptionData;
@property(nonatomic) _Bool hasSessionData; // @dynamic hasSessionData;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *playerId; // @dynamic playerId;
@property(retain, nonatomic) SCLensSbSessionData *sessionData; // @dynamic sessionData;
@property(nonatomic) int sessionDepth; // @dynamic sessionDepth;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) int version; // @dynamic version;

@end

