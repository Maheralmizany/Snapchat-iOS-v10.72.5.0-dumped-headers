//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SCChatMessageMetadata, SCChatMessageV3;

@protocol SCChatMediaPrefetching <NSObject>
- (_Bool)shouldPrefetchExpensiveContent;
- (void)prefetchMessageContent:(SCChatMessageV3 *)arg1 messageMetadata:(SCChatMessageMetadata *)arg2;
- (void)performPrefetchIfNecessaryForConversationIds:(NSArray *)arg1;
@end
