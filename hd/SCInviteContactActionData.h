//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCSnapchattersContactNonSnapchatter;

@interface SCInviteContactActionData : NSObject <NSCopying>
{
    SCSnapchattersContactNonSnapchatter *_contactNonSnapchatter;
}

@property(readonly, copy, nonatomic) SCSnapchattersContactNonSnapchatter *contactNonSnapchatter; // @synthesize contactNonSnapchatter=_contactNonSnapchatter;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContactNonSnapchatter:(id)arg1;

@end

