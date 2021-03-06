//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatMediaDownloadableItem.h"

@class NSNumber, NSString;

@interface SCChatStorySnapDownloadableItem : NSObject <SCChatMediaDownloadableItem>
{
    NSString *_storySnapId;
    NSString *_conversationId;
    NSString *_messageId;
    NSString *_senderUsername;
    NSNumber *_sequenceNumber;
}

@property(readonly, copy, nonatomic) NSNumber *sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, copy, nonatomic) NSString *senderUsername; // @synthesize senderUsername=_senderUsername;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(readonly, copy, nonatomic) NSString *storySnapId; // @synthesize storySnapId=_storySnapId;
- (void).cxx_destruct;
- (id)mediaId;
- (id)initWithStorySnapId:(id)arg1 senderUsername:(id)arg2 sequenceNumber:(id)arg3 conversationId:(id)arg4 messageId:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

