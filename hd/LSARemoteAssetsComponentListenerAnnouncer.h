//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSARemoteAssetsComponentListener.h"

@class NSString;

@interface LSARemoteAssetsComponentListenerAnnouncer : NSObject <LSARemoteAssetsComponentListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<LSARemoteAssetsComponentListener>, std::__1::allocator<__weak id<LSARemoteAssetsComponentListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)remoteAssetsComponent:(id)arg1 didRequestAssetUploadWithId:(id)arg2 assetPath:(id)arg3 encryptionKey:(id)arg4 encryptionIv:(id)arg5 assetBatchId:(id)arg6 effectId:(id)arg7 deleteAfterUploading:(_Bool)arg8;
- (void)remoteAssetsComponent:(id)arg1 didRequestAssetUploadWithId:(id)arg2 assetPath:(id)arg3 effectId:(id)arg4 deleteAfterUploading:(_Bool)arg5;
- (void)remoteAssetsComponent:(id)arg1 didRequestAsset:(id)arg2 effectId:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

