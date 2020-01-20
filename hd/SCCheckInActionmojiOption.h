//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCCheckInActionmojiOption : NSObject <NSCopying>
{
    _Bool _hasShadow;
    NSString *_actionId;
    NSString *_nonClusteredStickerId;
    NSString *_clusteredFacingLeftStickerId;
    NSString *_clusteredFacingRightStickerId;
}

@property(readonly, nonatomic) _Bool hasShadow; // @synthesize hasShadow=_hasShadow;
@property(readonly, copy, nonatomic) NSString *clusteredFacingRightStickerId; // @synthesize clusteredFacingRightStickerId=_clusteredFacingRightStickerId;
@property(readonly, copy, nonatomic) NSString *clusteredFacingLeftStickerId; // @synthesize clusteredFacingLeftStickerId=_clusteredFacingLeftStickerId;
@property(readonly, copy, nonatomic) NSString *nonClusteredStickerId; // @synthesize nonClusteredStickerId=_nonClusteredStickerId;
@property(readonly, copy, nonatomic) NSString *actionId; // @synthesize actionId=_actionId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithActionId:(id)arg1 nonClusteredStickerId:(id)arg2 clusteredFacingLeftStickerId:(id)arg3 clusteredFacingRightStickerId:(id)arg4 hasShadow:(_Bool)arg5;

@end

