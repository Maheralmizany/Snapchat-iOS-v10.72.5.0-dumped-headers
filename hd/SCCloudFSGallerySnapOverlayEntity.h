//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCloudFSFileEntity.h"

@class NSString, SCDataObjectContext, SCMediaDownload;

@interface SCCloudFSGallerySnapOverlayEntity : NSObject <SCCloudFSFileEntity>
{
    NSString *_UUID;
    id <SCGallerySnap> _snap;
    SCMediaDownload *_mediaDownload;
    id <SCSyncFileResolver> _fileResolver;
    SCDataObjectContext *_dataObjectContext;
}

- (void).cxx_destruct;
- (double)cacheTTL;
- (id)entityName;
- (id)downloadWithMediaScenePath:(CDStruct_bac8f6e9)arg1 progressHandler:(CDUnknownBlockType)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (id)allRepresentations;
- (id)UUID;
- (id)initWithSnap:(id)arg1 mediaDownload:(id)arg2 fileResolver:(id)arg3 dataObjectContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

