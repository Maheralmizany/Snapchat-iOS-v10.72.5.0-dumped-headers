//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@protocol SCSendFlowLogging <NSObject>
- (void)logDiscreteStepWithMessageId:(NSString *)arg1 stepType:(long long)arg2 timestamp:(double)arg3;
- (void)logStepEndWithMediaId:(NSString *)arg1 stepType:(long long)arg2 timestamp:(double)arg3 result:(unsigned long long)arg4;
- (void)logStepEndWithMessageId:(NSString *)arg1 stepType:(long long)arg2 timestamp:(double)arg3 result:(unsigned long long)arg4;
- (void)logStepStartWithMediaId:(NSString *)arg1 stepType:(long long)arg2 timestamp:(double)arg3;
- (void)logStepStartWithMessageId:(NSString *)arg1 stepType:(long long)arg2 timestamp:(double)arg3;
- (void)addStoryPostWithAsyncFailForClientId:(NSString *)arg1;
- (void)updateStoryMetadataWithClientId:(NSString *)arg1 storyTypeToCountDict:(NSDictionary *)arg2;
- (void)updateStoryMetadataWithClientId:(NSString *)arg1 storyPostContext:(long long)arg2;
- (void)updateMetadataWithMessageId:(NSString *)arg1 sendToFriendCount:(long long)arg2 sendToGroupCount:(long long)arg3 sendToStoryCount:(long long)arg4;
- (void)clearTemporaryMediaIds:(NSArray *)arg1;
- (void)setMediaType:(long long)arg1 forMediaId:(NSString *)arg2 messageId:(NSString *)arg3;
- (void)updateMetadataWithMessageId:(NSString *)arg1 captureId:(NSString *)arg2 messageBodyType:(long long)arg3 mediaType:(long long)arg4;
@end
