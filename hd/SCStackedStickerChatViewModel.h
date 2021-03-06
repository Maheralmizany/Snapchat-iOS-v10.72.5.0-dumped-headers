//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCStackedChatViewModel.h"

@class NSMutableArray, SCMessageChatViewModelProps;

@interface SCStackedStickerChatViewModel : SCStackedChatViewModel
{
    NSMutableArray *_stackedViewModels;
    SCMessageChatViewModelProps *_props;
}

- (void).cxx_destruct;
- (double)_estimatedStickerCellSideLength;
- (id)_stickerForMessage:(id)arg1;
- (void)addStackedViewModelFromMessage:(id)arg1 messageMetadata:(id)arg2;
- (id)stackedViewModels;
- (struct CGSize)sizeForItemAtIndexPath:(id)arg1;
- (unsigned long long)maxItemCapacityForCollectionView;
- (struct UIEdgeInsets)insetsForCollectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 stackedCollectionCellActionDelegate:(id)arg3 parentVC:(id)arg4;
- (id)collectionViewCellReuseIdentifier;
- (double)insetForCollectionViewCell;
- (Class)collectionViewCellClass;
- (_Bool)canStackMessage:(id)arg1 lastDeletedSequenceNumber:(unsigned long long)arg2;
- (_Bool)_isShowingBitmoji;
- (double)bodyContentWidth;
- (double)payloadHeight;
- (id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)reusableCellIdentifier;
- (id)initWithMessage:(id)arg1 messageMetadata:(id)arg2 props:(id)arg3;

@end

