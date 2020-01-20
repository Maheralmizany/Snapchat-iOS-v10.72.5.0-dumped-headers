//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber, NSString;

@interface TCV3ChatMessage : NSObject
{
    NSString *_remoteUsername;
    NSString *_conversationId;
    long long _timestampMs;
    NSDictionary *_legacyPresences;
    NSDictionary *_extendedPresences;
    NSDictionary *_presencesMetadata;
    NSNumber *_sequenceNumber;
}

+ (id)ChatMessageWithRemoteUsername:(id)arg1 conversationId:(id)arg2 timestampMs:(long long)arg3 legacyPresences:(id)arg4 extendedPresences:(id)arg5 presencesMetadata:(id)arg6 sequenceNumber:(id)arg7;
@property(readonly, nonatomic) NSNumber *sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic) NSDictionary *presencesMetadata; // @synthesize presencesMetadata=_presencesMetadata;
@property(readonly, nonatomic) NSDictionary *extendedPresences; // @synthesize extendedPresences=_extendedPresences;
@property(readonly, nonatomic) NSDictionary *legacyPresences; // @synthesize legacyPresences=_legacyPresences;
@property(readonly, nonatomic) long long timestampMs; // @synthesize timestampMs=_timestampMs;
@property(readonly, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(readonly, nonatomic) NSString *remoteUsername; // @synthesize remoteUsername=_remoteUsername;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRemoteUsername:(id)arg1 conversationId:(id)arg2 timestampMs:(long long)arg3 legacyPresences:(id)arg4 extendedPresences:(id)arg5 presencesMetadata:(id)arg6 sequenceNumber:(id)arg7;

@end

