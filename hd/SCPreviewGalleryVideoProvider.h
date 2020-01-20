//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCreateTimeUtcProvider.h"
#import "SCPreviewVideoProvider.h"

@class NSNumber, NSString, NSURL, SCCloudFSFile, SCEncryptedContentManager;

@interface SCPreviewGalleryVideoProvider : NSObject <SCPreviewVideoProvider, SCCreateTimeUtcProvider>
{
    id <SCGallerySnap> _snap;
    SCCloudFSFile *_cloudFile;
    id <SCEncryptedContentManagerDataProviding> _contentDataProvider;
    SCEncryptedContentManager *_encryptedContentManager;
    NSURL *_writableURL;
    NSNumber *_codecType;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnap:(id)arg1 cloudFile:(id)arg2 contentDataProvider:(id)arg3;
- (id)createTimeUtc;
- (id)exportVideoData;
- (void)exportVideoForURL:(id)arg1;
- (void)removeBackingTemporaryVideo;
- (id)cachedWritableURL;
- (id)writableURL;
- (_Bool)checkIsVideoReachable;
- (_Bool)shouldIncludeURLInActiveVideoPaths;
- (long long)codecType;
- (double)videoDuration;
- (void)newVideoAssetForQueue:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)newVideoAsset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

