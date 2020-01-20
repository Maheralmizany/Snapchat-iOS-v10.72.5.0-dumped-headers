//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCSnapchatter;

@interface SCSnapchattersUpdateDataRequestAdd : NSObject <NSCopying>
{
    SCSnapchatter *_snapchatter;
    long long _addSource;
    long long _placement;
    long long _cellIndex;
}

@property(readonly, nonatomic) long long cellIndex; // @synthesize cellIndex=_cellIndex;
@property(readonly, nonatomic) long long placement; // @synthesize placement=_placement;
@property(readonly, nonatomic) long long addSource; // @synthesize addSource=_addSource;
@property(readonly, copy, nonatomic) SCSnapchatter *snapchatter; // @synthesize snapchatter=_snapchatter;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapchatter:(id)arg1 addSource:(long long)arg2 placement:(long long)arg3 cellIndex:(long long)arg4;

@end

