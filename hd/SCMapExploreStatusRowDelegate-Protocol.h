//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCMapExploreStatusRow, SCMapExplorerMapStoryIconView, UIView;

@protocol SCMapExploreStatusRowDelegate <NSObject>
- (void)exploreCarouselStatusRowWantsToPlayMapStory:(SCMapExploreStatusRow *)arg1 withPoiId:(NSString *)arg2 fromSourceView:(SCMapExplorerMapStoryIconView *)arg3;
- (void)exploreCarouselStatusRowDidTapStory:(SCMapExploreStatusRow *)arg1 fromSourceView:(UIView *)arg2;
- (void)exploreCarouselStatusRowDidLongPressProfile:(SCMapExploreStatusRow *)arg1;
- (void)exploreCarouselStatusRowDidTapProfile:(SCMapExploreStatusRow *)arg1;
- (void)exploreCarouselStatusRowDidTapButton:(SCMapExploreStatusRow *)arg1;
@end

