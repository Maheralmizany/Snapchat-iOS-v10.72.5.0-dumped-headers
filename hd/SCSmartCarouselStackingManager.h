//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, SCPreviewFilterItem;

@interface SCSmartCarouselStackingManager : NSObject
{
    NSMutableArray *_stackedOverlayFilters;
    NSMutableArray *_stackedMediaFilters;
    SCPreviewFilterItem *_stackedAutoStackFilterItem;
}

+ (id)sortedPreviewFilterItems:(id)arg1;
@property(readonly, nonatomic) SCPreviewFilterItem *stackedAutoStackFilterItem; // @synthesize stackedAutoStackFilterItem=_stackedAutoStackFilterItem;
@property(retain, nonatomic) NSMutableArray *stackedMediaFilters; // @synthesize stackedMediaFilters=_stackedMediaFilters;
@property(retain, nonatomic) NSMutableArray *stackedOverlayFilters; // @synthesize stackedOverlayFilters=_stackedOverlayFilters;
- (void).cxx_destruct;
- (id)stackedFilterItems;
- (id)stackedFilterNameForType:(long long)arg1;
- (void)clear;
- (_Bool)hasStackedMediaFilter;
- (unsigned long long)stackedFilterCount;
- (void)unstackFilterItem:(id)arg1;
- (void)stackFilterItem:(id)arg1;
- (id)init;

@end

