//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

@interface IGListCollectionView : UICollectionView
{
}

- (void)_didModifyIndexPaths:(id)arg1;
- (void)_didModifySection:(unsigned long long)arg1;
- (void)_didModifySections:(id)arg1;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)insertSections:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)deleteSections:(id)arg1;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)reloadSections:(id)arg1;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (id)_listLayout;
- (id)initWithFrame:(struct CGRect)arg1 listCollectionViewLayout:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

