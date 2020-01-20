//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSSet, SCCognacMessageParsingData;

@interface SCChatUIBatchMessageParsingData : NSObject <NSCopying>
{
    NSSet *_messagesBelowTheFold;
    NSSet *_messagesWithDateHeaders;
    NSSet *_messagesWithTimestamps;
    NSDictionary *_messageCornerMasks;
    NSDictionary *_messageHeaderIdentifierMap;
    SCCognacMessageParsingData *_cognacMessageParsingData;
    NSDictionary *_messageGroupMaps;
}

@property(readonly, copy, nonatomic) NSDictionary *messageGroupMaps; // @synthesize messageGroupMaps=_messageGroupMaps;
@property(readonly, copy, nonatomic) SCCognacMessageParsingData *cognacMessageParsingData; // @synthesize cognacMessageParsingData=_cognacMessageParsingData;
@property(readonly, copy, nonatomic) NSDictionary *messageHeaderIdentifierMap; // @synthesize messageHeaderIdentifierMap=_messageHeaderIdentifierMap;
@property(readonly, copy, nonatomic) NSDictionary *messageCornerMasks; // @synthesize messageCornerMasks=_messageCornerMasks;
@property(readonly, copy, nonatomic) NSSet *messagesWithTimestamps; // @synthesize messagesWithTimestamps=_messagesWithTimestamps;
@property(readonly, copy, nonatomic) NSSet *messagesWithDateHeaders; // @synthesize messagesWithDateHeaders=_messagesWithDateHeaders;
@property(readonly, copy, nonatomic) NSSet *messagesBelowTheFold; // @synthesize messagesBelowTheFold=_messagesBelowTheFold;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMessagesBelowTheFold:(id)arg1 messagesWithDateHeaders:(id)arg2 messagesWithTimestamps:(id)arg3 messageCornerMasks:(id)arg4 messageHeaderIdentifierMap:(id)arg5 cognacMessageParsingData:(id)arg6 messageGroupMaps:(id)arg7;

@end

