//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UICollectionView, UIView;

@protocol SCLensExplorerContentProtocol <NSObject>
@property(nonatomic) struct UIEdgeInsets contentInsets;
@property(readonly, nonatomic) UIView *backgroundRoundedView;
@property(readonly, nonatomic) UICollectionView *collectionView;
- (void)hideLoadingIndicator;
- (void)showLoadingIndicator;
@end
