//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSARemoteAssetsComponentListener.h"
#import "SCLensRemoteAssetsUploadOperationDelegate.h"
#import "SCLensRemoteAssetsUploadOperationListener.h"

@class LSARemoteAssetsComponent, NSString, SCExperimentManager, SCLens, SCLensRemoteAssetsBlobUploadOperation, SCLensRemoteAssetsInGalleryHandler, SCLensRemoteAssetsUploadWithGalleryFileManager, SCPromise;

@interface SCPreviewSnap3DRemoteAssetsProvider : NSObject <SCLensRemoteAssetsUploadOperationListener, SCLensRemoteAssetsUploadOperationDelegate, LSARemoteAssetsComponentListener>
{
    LSARemoteAssetsComponent *_remoteAssetsComponent;
    id <SCLensDataFetcher> _dataFetcher;
    id <SCLensRemoteAssetsUploader> _assetsUploader;
    SCLensRemoteAssetsInGalleryHandler *_galleryAssetHandler;
    id <SCPerforming> _performer;
    SCLensRemoteAssetsUploadWithGalleryFileManager *_assetsUploadFileManager;
    NSString *_currentAssetBatchId;
    SCPromise *_serializedLensAssetPromise;
    _Bool _serializedLensAssetPromiseCompleted;
    id <SCLensRemoteAssetLoggerProtocol> _lensRemoteAssetLogger;
    id <SCLensLoggerConsumptionTrackingProviding> _consumptionLensLogger;
    SCExperimentManager *_experimentManager;
    SCLens *_activeLens;
    SCLensRemoteAssetsBlobUploadOperation *_currentUploadOperation;
    unsigned long long _assetFetchOrigin;
}

+ (id)_snap3DRemoteAssetProviderErrorWithCode:(long long)arg1;
@property(nonatomic) unsigned long long assetFetchOrigin; // @synthesize assetFetchOrigin=_assetFetchOrigin;
@property(retain, nonatomic) SCLensRemoteAssetsBlobUploadOperation *currentUploadOperation; // @synthesize currentUploadOperation=_currentUploadOperation;
@property(retain, nonatomic) SCLens *activeLens; // @synthesize activeLens=_activeLens;
- (void).cxx_destruct;
- (void)cleanUpAssetResources;
- (void)_getAssetForLensId:(id)arg1 assetId:(id)arg2 assetType:(long long)arg3 avatarId:(id)arg4 encryptionKey:(id)arg5 encryptionIv:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)getAssetForLensId:(id)arg1 assetId:(id)arg2 assetType:(long long)arg3 avatarId:(id)arg4 encryptionKey:(id)arg5 encryptionIv:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)_operationForBatchId:(id)arg1;
- (id)fileManagerForUploadOperation:(id)arg1;
- (id)assetsUploaderForUploadOperation:(id)arg1;
- (void)lensRemoteAssetsUploadOperationDidFail:(id)arg1 withError:(id)arg2;
- (void)lensRemoteAssetsUploadOperationDidSucceed:(id)arg1;
- (void)lensRemoteAssetsUploadOperation:(id)arg1 didSucceedUploadingAssetWithId:(id)arg2 effectId:(id)arg3;
- (void)lensRemoteAssetsUploadOperation:(id)arg1 didFailUploadingAssetWithId:(id)arg2 effectId:(id)arg3 error:(id)arg4;
- (void)remoteAssetsComponent:(id)arg1 didRequestAssetUploadWithId:(id)arg2 assetPath:(id)arg3 encryptionKey:(id)arg4 encryptionIv:(id)arg5 assetBatchId:(id)arg6 effectId:(id)arg7 deleteAfterUploading:(_Bool)arg8;
- (void)remoteAssetsComponent:(id)arg1 didRequestAssetUploadWithId:(id)arg2 assetPath:(id)arg3 effectId:(id)arg4 deleteAfterUploading:(_Bool)arg5;
- (void)remoteAssetsComponent:(id)arg1 didRequestAsset:(id)arg2 effectId:(id)arg3;
- (id)serializedLensAssetsFuture;
- (id)initWithDataFetcher:(id)arg1 assetsUploader:(id)arg2 assetsUploadFileManager:(id)arg3 galleryAssetHandler:(id)arg4 lensRemoteAssetLogger:(id)arg5 consumptionLensLogger:(id)arg6 experimentManager:(id)arg7 performer:(id)arg8;
- (id)initWithDataFetcher:(id)arg1 assetsUploader:(id)arg2 assetsUploadFileManager:(id)arg3 galleryAssetHandler:(id)arg4 lensRemoteAssetLogger:(id)arg5 consumptionLensLogger:(id)arg6 experimentManager:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

