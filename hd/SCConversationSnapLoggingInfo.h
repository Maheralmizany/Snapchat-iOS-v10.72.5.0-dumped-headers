//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SCConversationSnapLoggingInfo : NSObject <NSCopying>
{
    BOOL _sendSource;
    _Bool _isReply;
    double _sendStartTimeInEpochSecs;
}

@property(readonly, nonatomic) _Bool isReply; // @synthesize isReply=_isReply;
@property(readonly, nonatomic) BOOL sendSource; // @synthesize sendSource=_sendSource;
@property(readonly, nonatomic) double sendStartTimeInEpochSecs; // @synthesize sendStartTimeInEpochSecs=_sendStartTimeInEpochSecs;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSendStartTimeInEpochSecs:(double)arg1 sendSource:(BOOL)arg2 isReply:(_Bool)arg3;

@end

