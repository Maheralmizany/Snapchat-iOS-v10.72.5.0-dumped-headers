//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SCMediaSendTaskDelegate <NSObject>
- (id <SCLensRemoteAssetsUploadFileManager>)sendTaskRemoteAssetUploadFileManager:(id <SCMediaSendTask>)arg1;
- (id <SCLensRemoteAssetsUploader>)sendTaskRemoteAssetsUploader:(id <SCMediaSendTask>)arg1;
- (void)sendTaskNeedsDiskPersistence:(id <SCMediaSendTask>)arg1;
- (void)sendTaskDidFailToSend:(id <SCMediaSendTask>)arg1;
- (void)sendTaskDidSendSuccessfully:(id <SCMediaSendTask>)arg1;
@end

