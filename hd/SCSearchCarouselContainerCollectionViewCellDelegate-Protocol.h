//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, SCActionModel, SCSearchCarouselContainerCollectionViewCell, UICollectionViewCell, UIView;

@protocol SCSearchCarouselContainerCollectionViewCellDelegate <NSObject>
- (void)searchCarouselContainerCollectionViewCell:(SCSearchCarouselContainerCollectionViewCell *)arg1 didTriggerActionOnItemAtIndexPath:(NSIndexPath *)arg2 withActionModel:(SCActionModel *)arg3 fromSourceView:(UIView *)arg4;
- (void)searchCarouselContainerCollectionViewCell:(SCSearchCarouselContainerCollectionViewCell *)arg1 didTapItemAtIndexPath:(NSIndexPath *)arg2;

@optional
- (void)searchCarouselContainerCollectionViewCellScrollViewDidScroll;
- (void)searchCarouselContainerCollectionViewCell:(UICollectionViewCell *)arg1 willDisplayAtIndexPath:(NSIndexPath *)arg2 scrolled:(_Bool)arg3;
- (void)searchCarouselContainerCollectionViewCell:(SCSearchCarouselContainerCollectionViewCell *)arg1 didLongPressItemAtIndexPath:(NSIndexPath *)arg2;
@end

