//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SOJUFriendsResponse;

@interface SCSnapchattersFetchDataRequestHandleSoJuFriendsResponse : NSObject <NSCopying>
{
    SOJUFriendsResponse *_response;
    unsigned long long _source;
    long long _triggerType;
}

@property(readonly, nonatomic) long long triggerType; // @synthesize triggerType=_triggerType;
@property(readonly, nonatomic) unsigned long long source; // @synthesize source=_source;
@property(readonly, copy, nonatomic) SOJUFriendsResponse *response; // @synthesize response=_response;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResponse:(id)arg1 source:(unsigned long long)arg2 triggerType:(long long)arg3;

@end

