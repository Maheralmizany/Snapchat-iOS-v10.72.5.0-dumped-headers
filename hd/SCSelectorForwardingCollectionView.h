//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSString;

@interface SCSelectorForwardingCollectionView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    id <UICollectionViewDataSource> _externalDataSource;
    id <UICollectionViewDelegate> _externalDelegate;
}

@property(nonatomic) __weak id <UICollectionViewDelegate> externalDelegate; // @synthesize externalDelegate=_externalDelegate;
@property(nonatomic) __weak id <UICollectionViewDataSource> externalDataSource; // @synthesize externalDataSource=_externalDataSource;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

