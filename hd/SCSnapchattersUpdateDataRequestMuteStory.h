//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCSnapchatter;

@interface SCSnapchattersUpdateDataRequestMuteStory : NSObject <NSCopying>
{
    SCSnapchatter *_aFriend;
}

@property(readonly, copy, nonatomic) SCSnapchatter *aFriend; // @synthesize aFriend=_aFriend;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAFriend:(id)arg1;

@end

