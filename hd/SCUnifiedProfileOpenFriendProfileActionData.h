//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SCFriendUnifiedProfileConfiguration, SCSnapchatter;

@interface SCUnifiedProfileOpenFriendProfileActionData : NSObject <NSCopying>
{
    SCSnapchatter *_snapchatter;
    SCFriendUnifiedProfileConfiguration *_configuration;
    NSString *_sourcePageType;
}

@property(readonly, copy, nonatomic) NSString *sourcePageType; // @synthesize sourcePageType=_sourcePageType;
@property(readonly, copy, nonatomic) SCFriendUnifiedProfileConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy, nonatomic) SCSnapchatter *snapchatter; // @synthesize snapchatter=_snapchatter;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapchatter:(id)arg1 configuration:(id)arg2 sourcePageType:(id)arg3;

@end

