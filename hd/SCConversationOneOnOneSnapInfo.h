//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SCConversationBroadcastSnapInfo;

@interface SCConversationOneOnOneSnapInfo : NSObject <NSCopying>
{
    _Bool _isPending;
    NSString *_snapServerId;
    SCConversationBroadcastSnapInfo *_broadcastInfo;
}

@property(readonly, copy, nonatomic) SCConversationBroadcastSnapInfo *broadcastInfo; // @synthesize broadcastInfo=_broadcastInfo;
@property(readonly, nonatomic) _Bool isPending; // @synthesize isPending=_isPending;
@property(readonly, copy, nonatomic) NSString *snapServerId; // @synthesize snapServerId=_snapServerId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapServerId:(id)arg1 isPending:(_Bool)arg2 broadcastInfo:(id)arg3;

@end

