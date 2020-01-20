//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCMiniProfileCollectionViewCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSString, UICollectionView;

@interface SCMiniProfileChatOptionsCollectionViewCell : SCMiniProfileCollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <SCMiniProfileChatOptionsCollectionViewCellDelegate> _delegate;
    UICollectionView *_elementCollectionView;
}

@property(retain, nonatomic) UICollectionView *elementCollectionView; // @synthesize elementCollectionView=_elementCollectionView;
@property(nonatomic) __weak id <SCMiniProfileChatOptionsCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)layoutSubviews;
- (void)_setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
