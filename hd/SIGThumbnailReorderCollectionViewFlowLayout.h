//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@class NSIndexPath;

@interface SIGThumbnailReorderCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    NSIndexPath *_sepeparatorIndex;
    NSIndexPath *_startIndex;
}

- (void).cxx_destruct;
- (id)_layoutAttributesForMyDecoratinoView:(id)arg1 cellFrame:(struct CGRect)arg2;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (struct CGSize)itemSize;
- (void)showSeparatorAtIndexPath:(id)arg1;
- (id)init;

@end
