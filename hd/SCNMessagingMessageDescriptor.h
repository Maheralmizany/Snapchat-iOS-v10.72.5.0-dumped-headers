//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, SCNMessagingUUID;

@interface SCNMessagingMessageDescriptor : NSObject
{
    SCNMessagingUUID *_conversationId;
    NSNumber *_messageId;
    NSNumber *_clientResolutionId;
}

+ (id)MessageDescriptorWithConversationId:(id)arg1 messageId:(id)arg2 clientResolutionId:(id)arg3;
@property(readonly, nonatomic) NSNumber *clientResolutionId; // @synthesize clientResolutionId=_clientResolutionId;
@property(readonly, nonatomic) NSNumber *messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) SCNMessagingUUID *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (id)description;
- (id)initWithConversationId:(id)arg1 messageId:(id)arg2 clientResolutionId:(id)arg3;

@end
