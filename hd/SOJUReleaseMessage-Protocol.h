//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"
#import "SOJUConversationMessage.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUHeader;

@protocol SOJUReleaseMessage <NSObject, NSCoding, NSCopying, SOJUConversationMessage>
@property(readonly, copy, nonatomic) NSArray *snapIds;
@property(readonly, copy, nonatomic) NSDictionary *knownReceivedSnapsTs;
@property(readonly, copy, nonatomic) NSString *releaseType;
@property(readonly, copy, nonatomic) NSString *appEngineTarget;
@property(readonly, copy, nonatomic) NSString *idValue;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) NSNumber *timestamp;
@property(readonly, copy, nonatomic) NSNumber *seqNum;
@property(readonly, copy, nonatomic) NSNumber *mischiefVersion;
@property(readonly, copy, nonatomic) NSDictionary *knownChatSequenceNumbers;
@property(readonly, copy, nonatomic) NSNumber *retried;
@property(readonly, copy, nonatomic) SOJUHeader *header;
@end

