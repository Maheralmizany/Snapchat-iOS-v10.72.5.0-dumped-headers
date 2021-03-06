//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface SCReceiveMessageBridgedTimestamp : NSObject <NSCopying, NSCoding>
{
    NSString *_conversationId;
    long long _step;
    double _startTimestampSeconds;
    double _endTimestampSeconds;
    long long _result;
}

@property(readonly, nonatomic) long long result; // @synthesize result=_result;
@property(readonly, nonatomic) double endTimestampSeconds; // @synthesize endTimestampSeconds=_endTimestampSeconds;
@property(readonly, nonatomic) double startTimestampSeconds; // @synthesize startTimestampSeconds=_startTimestampSeconds;
@property(readonly, nonatomic) long long step; // @synthesize step=_step;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConversationId:(id)arg1 step:(long long)arg2 startTimestampSeconds:(double)arg3 endTimestampSeconds:(double)arg4 result:(long long)arg5;
- (id)initWithCoder:(id)arg1;

@end

