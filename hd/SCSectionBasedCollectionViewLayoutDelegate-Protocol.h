//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSIndexPath, NSString, SCSectionBasedCollectionViewLayout, UICollectionViewLayoutAttributes;

@protocol SCSectionBasedCollectionViewLayoutDelegate
- (UICollectionViewLayoutAttributes *)layoutAttributesForSupplementaryViewOfKind:(NSString *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (UICollectionViewLayoutAttributes *)layoutAttributesForItemAtIndexPath:(NSIndexPath *)arg1;
- (NSArray *)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout:(SCSectionBasedCollectionViewLayout *)arg1;
@end

