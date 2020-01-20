//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCTempSnapchatter;

@interface SCAddTempSnapchatterActionData : NSObject <NSCopying>
{
    SCTempSnapchatter *_tempSnapchatter;
    long long _placement;
    long long _addSource;
}

@property(readonly, nonatomic) long long addSource; // @synthesize addSource=_addSource;
@property(readonly, nonatomic) long long placement; // @synthesize placement=_placement;
@property(readonly, copy, nonatomic) SCTempSnapchatter *tempSnapchatter; // @synthesize tempSnapchatter=_tempSnapchatter;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTempSnapchatter:(id)arg1 placement:(long long)arg2 addSource:(long long)arg3;

@end
