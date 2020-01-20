//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, NSString;

@interface SCChatLoadHistoryPaginationRequest : NSObject <NSCopying>
{
    NSString *_conversationId;
    NSNumber *_sinceMessageId;
}

@property(readonly, copy, nonatomic) NSNumber *sinceMessageId; // @synthesize sinceMessageId=_sinceMessageId;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConversationId:(id)arg1 sinceMessageId:(id)arg2;

@end

