//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSIndexPath, NSMutableDictionary, NSString, UICollectionView, UICollectionViewLayout, UIView;

@interface SCStickerPickerV2IconsController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSIndexPath *_selectedCategoryIndex;
    UIView *_highlightedSuperCategoryIndicatorView;
    UICollectionViewLayout *_superIconsCollectionViewLayout;
    long long _lastSelectedSubCategoryIndex;
    NSMutableDictionary *_iconsForSuperCategory;
    UICollectionView *_superIconsCollectionView;
    id <SCStickerPickerV2IconsControllerDelegate> _delegate;
    id <SCStickerPickerV2IconsDataSource> _dataSource;
}

@property(nonatomic) __weak id <SCStickerPickerV2IconsDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SCStickerPickerV2IconsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) UICollectionView *superIconsCollectionView; // @synthesize superIconsCollectionView=_superIconsCollectionView;
- (void).cxx_destruct;
- (void)_scrollItemAtIndexToVisible:(long long)arg1;
- (id)_categoryIconCellAccessibilityIdentifierFromIndexPath:(long long)arg1;
- (id)_getHighlightedIndicatorProperties:(id)arg1 withHighlightedItemIndex:(double)arg2;
- (struct CGRect)_frameForItemInCollectionView:(id)arg1 atIndex:(long long)arg2;
- (void)setSuperCategoryHighlightedItemIndex:(double)arg1;
- (void)_handleSuperIconTap:(id)arg1;
- (void)setSelectedIndex:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)_lineSpacingForWidth:(double)arg1 numberOfItems:(long long)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

