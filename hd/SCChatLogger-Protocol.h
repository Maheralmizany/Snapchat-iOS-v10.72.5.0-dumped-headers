//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCChatMessageDataModel, SCChatMetricsEventInfo;

@protocol SCChatLogger <NSObject>
- (void)logMuteStoryWithStoryType:(long long)arg1 isMuted:(_Bool)arg2;
- (void)logChatMediaLoadLifeCycle:(NSString *)arg1 stepName:(NSString *)arg2;
- (void)logChatMediaSendEnd:(NSString *)arg1 success:(_Bool)arg2;
- (void)logSentMessage:(id <SCChatMessage>)arg1 success:(_Bool)arg2;
- (void)logSCAChatScreenshot:(id <SCChatMessage>)arg1;
- (void)logSCAChatEraseModeUpdate:(unsigned long long)arg1;
- (void)logSCADataModelChatUnsave:(SCChatMessageDataModel *)arg1;
- (void)logSCADataModelChatSave:(SCChatMessageDataModel *)arg1;
- (void)logSCADataModelChatErase:(SCChatMessageDataModel *)arg1;
- (void)logSCAChatUnsave:(id <SCChatMessage>)arg1;
- (void)logSCAChatSave:(id <SCChatMessage>)arg1;
- (void)logSCAChatErase:(id <SCChatMessage>)arg1;
- (void)addSCChatMetricsEventInfo:(SCChatMetricsEventInfo *)arg1 forConsistentMessageId:(NSString *)arg2;
- (void)logSCAChatViewForMessage:(id <SCChatMessage>)arg1 withMetricsEventInfo:(SCChatMetricsEventInfo *)arg2;
- (void)logSCAChatSend:(id <SCChatMessage>)arg1 chatPageSource:(long long)arg2;
@end

