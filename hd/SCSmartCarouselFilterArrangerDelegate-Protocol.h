//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, SCPreviewFilterItem, SCSmartCarouselFilterArranger;

@protocol SCSmartCarouselFilterArrangerDelegate <NSObject>
- (void)filterArrangerDidChangeVisualFilterNamesProvider:(SCSmartCarouselFilterArranger *)arg1;
- (void)filterArrangerDidReloadSwipeOrder:(SCSmartCarouselFilterArranger *)arg1;
- (void)filterArrangerWillReloadSwipeOrder:(SCSmartCarouselFilterArranger *)arg1;
- (void)filterArranger:(SCSmartCarouselFilterArranger *)arg1 didRemoveFilter:(SCPreviewFilterItem *)arg2 atIndex:(long long)arg3 swipeState:(CDStruct_cb8b52ca)arg4;
- (void)filterArranger:(SCSmartCarouselFilterArranger *)arg1 didInsertFilterAtIndex:(long long)arg2 filterItem:(SCPreviewFilterItem *)arg3 swipeState:(CDStruct_cb8b52ca)arg4;
- (void)filterArranger:(SCSmartCarouselFilterArranger *)arg1 didUpdateFilterName:(NSString *)arg2 config:(NSDictionary *)arg3;
@end

