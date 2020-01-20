//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray;

@interface SCPreviewContextImageClassifierResult : NSObject <NSCopying>
{
    NSArray *_tags;
    NSArray *_confidenceInfos;
}

@property(readonly, copy, nonatomic) NSArray *confidenceInfos; // @synthesize confidenceInfos=_confidenceInfos;
@property(readonly, copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTags:(id)arg1 confidenceInfos:(id)arg2;

@end
