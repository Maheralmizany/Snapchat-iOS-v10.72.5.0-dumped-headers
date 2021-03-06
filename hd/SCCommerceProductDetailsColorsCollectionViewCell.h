//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSString, UICollectionView;

@interface SCCommerceProductDetailsColorsCollectionViewCell : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegate>
{
    id <SCCommerceProductDetailsColorsCollectionViewCellDelegate> _delegate;
    NSArray *_colors;
    long long _selectedColorIndex;
    UICollectionView *_colorsCollectionView;
}

+ (double)height;
@property(retain, nonatomic) UICollectionView *colorsCollectionView; // @synthesize colorsCollectionView=_colorsCollectionView;
@property(nonatomic) long long selectedColorIndex; // @synthesize selectedColorIndex=_selectedColorIndex;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(nonatomic) __weak id <SCCommerceProductDetailsColorsCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setup;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)resetColorScroll:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

