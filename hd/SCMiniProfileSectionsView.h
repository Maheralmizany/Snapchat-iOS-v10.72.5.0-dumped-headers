//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UICollectionView;

@interface SCMiniProfileSectionsView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSMutableArray *_sectionControllers;
    long long _cellStyle;
    _Bool _centersContent;
    _Bool _centerFirstSection;
    UICollectionView *_collectionView;
}

@property(nonatomic) _Bool centerFirstSection; // @synthesize centerFirstSection=_centerFirstSection;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)topInset;
- (double)contentHeight;
- (struct CGRect)contentFrame;
@property(copy, nonatomic) NSArray *sectionControllers;
- (void)replaceSectionController:(id)arg1 withSectionController:(id)arg2;
- (void)reloadSections:(id)arg1 animated:(_Bool)arg2;
- (void)reloadSection:(id)arg1 animated:(_Bool)arg2;
- (void)reloadAllSections;
- (void)_reloadContentInsetAnimated:(_Bool)arg1;
- (void)_reloadData;
- (id)sectionControllerForSection:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 cellStyle:(long long)arg2 centersContent:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

