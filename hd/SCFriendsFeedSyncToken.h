//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSData;

@interface SCFriendsFeedSyncToken : NSObject <NSCopying>
{
    long long _requestFeedType;
    NSData *_token;
}

@property(readonly, copy, nonatomic) NSData *token; // @synthesize token=_token;
@property(readonly, nonatomic) long long requestFeedType; // @synthesize requestFeedType=_requestFeedType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestFeedType:(long long)arg1 token:(id)arg2;

@end

