//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCArroyoChatLogging.h"

@class SCLazy;

@interface SCArroyoChatLogger : NSObject <SCArroyoChatLogging>
{
    SCLazy *_logger;
}

- (void).cxx_destruct;
- (long long)_mediaTypeWithMetricsMessageMediaType:(long long)arg1;
- (long long)_messageTypeWithMetricsMessageType:(long long)arg1;
- (void)logChatChatSendWithPlatformAnalytics:(id)arg1;
- (void)didSendComplete:(id)arg1;
- (void)didConversationUpdateForConversationId:(id)arg1 conversation:(id)arg2 updatedMessages:(id)arg3 removedMessages:(id)arg4;
- (void)didRemoveConversation:(id)arg1;
- (void)didCreateConversation:(id)arg1;
- (id)initWithUserTrackedLogger:(id)arg1;

@end
