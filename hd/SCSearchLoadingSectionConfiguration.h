//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCSectionKitHeaderModel;

@interface SCSearchLoadingSectionConfiguration : NSObject <NSCopying>
{
    SCSectionKitHeaderModel *_sectionHeaderModel;
    long long _cellStyle;
    double _delay;
    double _minimumInteritemSpacing;
}

@property(readonly, nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(readonly, copy, nonatomic) SCSectionKitHeaderModel *sectionHeaderModel; // @synthesize sectionHeaderModel=_sectionHeaderModel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSectionHeaderModel:(id)arg1 cellStyle:(long long)arg2 delay:(double)arg3 minimumInteritemSpacing:(double)arg4;

@end

