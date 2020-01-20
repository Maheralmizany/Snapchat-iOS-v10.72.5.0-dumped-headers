//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensRemoteAssetLoggerProtocol.h"

@class NSString;

@interface SCLensRemoteAssetLogger : NSObject <SCLensRemoteAssetLoggerProtocol>
{
    id <SCGraphene> _graphene;
}

+ (unsigned long long)_sizeInKB:(unsigned long long)arg1;
+ (id)_assetTypeToString:(long long)arg1;
- (void).cxx_destruct;
- (void)assetLensResourceLookupFinishedWithDuration:(double)arg1 success:(_Bool)arg2 type:(long long)arg3;
- (void)assetUploadFinishedWithDuration:(double)arg1 assetSize:(unsigned long long)arg2 type:(long long)arg3;
- (void)assetUploadStarted;
- (void)assetDownloadFinishedWithDuration:(double)arg1 assetSize:(unsigned long long)arg2 type:(long long)arg3 source:(unsigned long long)arg4;
- (void)assetDownloadStartedWithType:(long long)arg1;
- (id)initWithGraphene:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

