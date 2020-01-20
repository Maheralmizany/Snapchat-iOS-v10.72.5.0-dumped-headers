//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface SCFriendsFeedActiveCall : NSObject <NSCopying>
{
    NSString *_callerUsername;
    NSArray *_callParticipantUsernames;
    long long _callMediaType;
}

@property(readonly, nonatomic) long long callMediaType; // @synthesize callMediaType=_callMediaType;
@property(readonly, copy, nonatomic) NSArray *callParticipantUsernames; // @synthesize callParticipantUsernames=_callParticipantUsernames;
@property(readonly, copy, nonatomic) NSString *callerUsername; // @synthesize callerUsername=_callerUsername;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCallerUsername:(id)arg1 callParticipantUsernames:(id)arg2 callMediaType:(long long)arg3;

@end

