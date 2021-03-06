//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, SCCloudFS, SCSentinel;

@interface SCCloudFSFile : NSObject
{
    id <SCCloudFSFileEntity> _entity;
    NSString *_UUID;
    NSString *_leaseToken;
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _isAvailableLocally
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _isSynced
    NSURL *_baseURL;
    SCSentinel *_sentinel;
    SCCloudFS *_cloudFS;
}

+ (id)sharedPerformer;
+ (id)fileURLForRepresentation:(id)arg1 baseURL:(id)arg2;
- (void).cxx_destruct;
- (void)invalidate;
- (id)downloadWithMediaScenePath:(CDStruct_bac8f6e9)arg1 progressQueue:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 resultQueue:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (id)fileURLForRepresentation:(id)arg1;
- (void)markAsSynced;
- (_Bool)isSynced;
- (_Bool)isAvailableLocally;
- (void)dealloc;
- (id)initWithCloudFS:(id)arg1 baseURL:(id)arg2 leaseToken:(id)arg3 isAvailableLocally:(_Bool)arg4 isSynced:(_Bool)arg5 entity:(id)arg6;
@property(readonly, copy, nonatomic) NSURL *renderedLowresMediaURL;
@property(readonly, copy, nonatomic) NSURL *mediaOverlayURL;
@property(readonly, copy, nonatomic) NSURL *mediaURL;

@end

