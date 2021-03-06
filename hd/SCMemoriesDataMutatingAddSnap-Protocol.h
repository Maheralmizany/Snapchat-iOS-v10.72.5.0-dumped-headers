//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSArray, NSDate, NSString, SCCloudSyncTriggerUserContext, SCLensSnap3DAssetMetadata, SCOverlayFormat, SCPreviewEncryptedMediaFile, SOJUGallerySnapOverlay, UIImage;

@protocol SCMemoriesDataMutatingAddSnap <NSObject>
- (void)addPhoto:(UIImage *)arg1 sojuMediaType:(int)arg2 servletMediaFormat:(NSString *)arg3 source:(unsigned long long)arg4 cameraRollId:(NSString *)arg5 attribution:(NSArray *)arg6 captureTimeUtc:(NSDate *)arg7 createTimeUtc:(NSDate *)arg8 orientation:(long long)arg9 duration:(double)arg10 overlayFormat:(SCOverlayFormat *)arg11 overlay:(SOJUGallerySnapOverlay *)arg12 location:(CLLocation *)arg13 isPrivate:(_Bool)arg14 saveSource:(unsigned long long)arg15 isInfiniteDuration:(_Bool)arg16 isFromSavedMetadata:(_Bool)arg17 cameraFrontFacing:(_Bool)arg18 snap3DAssetMetadata:(SCLensSnap3DAssetMetadata *)arg19 userContext:(SCCloudSyncTriggerUserContext *)arg20 completionHandler:(void (^)(id <SCGallerySnap>, NSString *, _Bool, NSError *))arg21;
- (void)addVideoProvider:(id <SCPreviewVideoProvider>)arg1 metadataItems:(NSArray *)arg2 sojuMediaType:(int)arg3 source:(unsigned long long)arg4 cameraRollId:(NSString *)arg5 attribution:(NSArray *)arg6 captureTimeUtc:(NSDate *)arg7 createTimeUtc:(NSDate *)arg8 orientation:(long long)arg9 overlayFormat:(SCOverlayFormat *)arg10 overlay:(SOJUGallerySnapOverlay *)arg11 location:(CLLocation *)arg12 isPrivate:(_Bool)arg13 saveSource:(unsigned long long)arg14 isInfiniteDuration:(_Bool)arg15 isFromSavedMetadata:(_Bool)arg16 cameraFrontFacing:(_Bool)arg17 encryptedMediaFile:(SCPreviewEncryptedMediaFile *)arg18 deviceFirmwareInfo:(NSString *)arg19 deviceId:(NSString *)arg20 userContext:(SCCloudSyncTriggerUserContext *)arg21 completionHandler:(void (^)(id <SCGallerySnap>, NSString *, _Bool, NSError *))arg22;
- (void)addVideoProvider:(id <SCPreviewVideoProvider>)arg1 metadataItems:(NSArray *)arg2 sojuMediaType:(int)arg3 source:(unsigned long long)arg4 cameraRollId:(NSString *)arg5 attribution:(NSArray *)arg6 captureTimeUtc:(NSDate *)arg7 createTimeUtc:(NSDate *)arg8 orientation:(long long)arg9 overlayFormat:(SCOverlayFormat *)arg10 overlay:(SOJUGallerySnapOverlay *)arg11 location:(CLLocation *)arg12 isPrivate:(_Bool)arg13 saveSource:(unsigned long long)arg14 isInfiniteDuration:(_Bool)arg15 isFromSavedMetadata:(_Bool)arg16 cameraFrontFacing:(_Bool)arg17 userContext:(SCCloudSyncTriggerUserContext *)arg18 completionHandler:(void (^)(id <SCGallerySnap>, NSString *, _Bool, NSError *))arg19;
@end

