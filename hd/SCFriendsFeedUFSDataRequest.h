//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, SCFriendsFeedFetchContext, SOJUFeedResponseInfo;

@interface SCFriendsFeedUFSDataRequest : NSObject <NSCopying>
{
    _Bool _isFullSync;
    SOJUFeedResponseInfo *_feedResponse;
    NSArray *_mischiefResponse;
    NSArray *_conversationsResponse;
    long long _fetchType;
    SCFriendsFeedFetchContext *_fetchContext;
}

@property(readonly, nonatomic) _Bool isFullSync; // @synthesize isFullSync=_isFullSync;
@property(readonly, copy, nonatomic) SCFriendsFeedFetchContext *fetchContext; // @synthesize fetchContext=_fetchContext;
@property(readonly, nonatomic) long long fetchType; // @synthesize fetchType=_fetchType;
@property(readonly, copy, nonatomic) NSArray *conversationsResponse; // @synthesize conversationsResponse=_conversationsResponse;
@property(readonly, copy, nonatomic) NSArray *mischiefResponse; // @synthesize mischiefResponse=_mischiefResponse;
@property(readonly, copy, nonatomic) SOJUFeedResponseInfo *feedResponse; // @synthesize feedResponse=_feedResponse;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFeedResponse:(id)arg1 mischiefResponse:(id)arg2 conversationsResponse:(id)arg3 fetchType:(long long)arg4 fetchContext:(id)arg5 isFullSync:(_Bool)arg6;

@end
