//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCAddFriendsCameraRollCellViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSMutableArray, NSString, PHCachingImageManager, SCSnapScanner, UICollectionView;

@interface SCAddFriendsCameraRollPickerDriver : NSObject <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, SCAddFriendsCameraRollCellViewDelegate>
{
    SCSnapScanner *_snapScanner;
    PHCachingImageManager *_imageManager;
    NSArray *_photoAssets;
    NSMutableArray *_photoScanStates;
    _Bool _isPageSourceFromSettings;
    id <SCAddFriendsCameraRollPickerDriverDelegate> _delegate;
    UICollectionView *_collectionView;
    struct CGSize _itemSize;
}

@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) __weak id <SCAddFriendsCameraRollPickerDriverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addFriendsCameraRollCellView:(id)arg1 updateState:(unsigned long long)arg2;
- (void)scanForImage:(id)arg1 originalImage:(id)arg2 cellImage:(id)arg3 scaleStep:(int)arg4 rotateStep:(int)arg5;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)updateWithPhotoAssets:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionWithFrame:(struct CGRect)arg1;
- (id)initWithIsPageSourceFromSettings:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

