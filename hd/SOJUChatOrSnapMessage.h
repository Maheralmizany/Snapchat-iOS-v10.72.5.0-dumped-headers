//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUChatOrSnapMessage.h"

@class NSString, SOJUCashTransaction, SOJUChatMessage, SOJUGenericSnap;

@interface SOJUChatOrSnapMessage : NSObject <SOJUChatOrSnapMessage>
{
    SOJUGenericSnap *_snap;
    SOJUChatMessage *_chatMessage;
    SOJUCashTransaction *_cashTransaction;
    NSString *_iterToken;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *iterToken; // @synthesize iterToken=_iterToken;
@property(readonly, copy, nonatomic) SOJUCashTransaction *cashTransaction; // @synthesize cashTransaction=_cashTransaction;
@property(readonly, copy, nonatomic) SOJUChatMessage *chatMessage; // @synthesize chatMessage=_chatMessage;
@property(readonly, copy, nonatomic) SOJUGenericSnap *snap; // @synthesize snap=_snap;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnap:(id)arg1 chatMessage:(id)arg2 cashTransaction:(id)arg3 iterToken:(id)arg4;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

