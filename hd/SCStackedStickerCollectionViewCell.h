//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCStackedCollectionViewCell.h"

#import "SCChatStickerViewDelegate.h"

@class SCChatStickerManager, SCChatStickerView, SCStackedStickerCollectionViewModel;

@interface SCStackedStickerCollectionViewCell : SCStackedCollectionViewCell <SCChatStickerViewDelegate>
{
    SCChatStickerView *_stickerView;
    SCStackedStickerCollectionViewModel *_viewModel;
    SCChatStickerManager *_chatStickerManager;
    id <SCChatCellMessageStateUpdateDelegate> _delegate;
}

+ (double)defaultStickerCellSideLength;
+ (id)cellReuseIdentifier;
@property(nonatomic) __weak id <SCChatCellMessageStateUpdateDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stickerViewDidFinishLoadingForSticker:(id)arg1;
- (void)stickerViewDidStartLoadingForSticker:(id)arg1;
- (void)setChatStickerManager:(id)arg1;
- (void)configureWithViewModel:(id)arg1 contexts:(id)arg2 allowLowResolution:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
