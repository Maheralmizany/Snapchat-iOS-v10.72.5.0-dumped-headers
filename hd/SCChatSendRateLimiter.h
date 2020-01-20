//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCChatSendRateLimiter : NSObject
{
    id <SCPerforming> _performer;
    double _messageRateLimitStartTime;
    long long _attemptedMessages;
    NSString *_loggingMessageType;
    CDUnknownBlockType _messageTypeCheckBlock;
    _Bool _isRateLimitEnabled;
    long long _messagesLimit;
}

+ (unsigned long long)rateLimitMessagesLimit;
+ (_Bool)isRateLimitEnabled;
- (void).cxx_destruct;
- (_Bool)shouldRateLimitMessage:(id)arg1;
- (void)_resetState;
- (id)initWithPerformer:(id)arg1 loggingMessageType:(id)arg2 messageTypeCheckBlock:(CDUnknownBlockType)arg3;

@end

