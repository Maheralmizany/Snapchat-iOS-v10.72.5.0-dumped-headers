//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class SCFuture, SCImageProcessLensCommand, SCImageProcessSnap3DLensCommand, SCLens, SnapVideoFilter;

@protocol SCPreviewFeatureSnap3D
@property(nonatomic) _Bool isTransitioningBetweenFilters;
@property(nonatomic) _Bool enabled;
@property(readonly, nonatomic) id <SCLensRemoteAssetsUploadOperation> assetUploadOperation;
@property(readonly, nonatomic) SCFuture *serializedLensAssetsFuture;
@property(readonly, nonatomic) SCFuture *serializedDepthMetadataFuture;
@property(readonly, nonatomic) SCFuture *lensMetadataFuture;
@property(readonly, nonatomic) SCImageProcessSnap3DLensCommand *snap3DLensCommand;
@property(nonatomic) __weak id <SCPreviewFeatureSnap3DDelegate> delegate;
- (void)clearResources;
- (void)hideTooltip;
- (void)activateLensFromCurrentFilter;
- (SCImageProcessLensCommand *)lensCommandWithCurrentLens;
- (void)configureVideoFilter:(SnapVideoFilter *)arg1;
- (void)activateLens:(SCLens *)arg1 withLensCommandListener:(id <SCImageProcessLensCommandListener>)arg2;
- (void)setSwipeFilters:(id <SCFeatureSwipeFilters>)arg1;
@end

