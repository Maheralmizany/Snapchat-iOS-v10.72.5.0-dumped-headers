//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCChatSnapCountDownAnimationData : NSObject <NSCopying>
{
    unsigned long long _timerCountDownValue;
    NSString *_messageId;
    NSString *_conversationId;
}

@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) unsigned long long timerCountDownValue; // @synthesize timerCountDownValue=_timerCountDownValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTimerCountDownValue:(unsigned long long)arg1 messageId:(id)arg2 conversationId:(id)arg3;

@end
