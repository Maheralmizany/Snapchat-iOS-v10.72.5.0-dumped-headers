//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCGroupLastMessageMetadata : NSObject <NSCopying>
{
    NSString *_senderUsername;
    unsigned long long _messageSequence;
    double _sentTimestampInEpochSecs;
}

@property(readonly, nonatomic) double sentTimestampInEpochSecs; // @synthesize sentTimestampInEpochSecs=_sentTimestampInEpochSecs;
@property(readonly, nonatomic) unsigned long long messageSequence; // @synthesize messageSequence=_messageSequence;
@property(readonly, copy, nonatomic) NSString *senderUsername; // @synthesize senderUsername=_senderUsername;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSenderUsername:(id)arg1 messageSequence:(unsigned long long)arg2 sentTimestampInEpochSecs:(double)arg3;

@end

