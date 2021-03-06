//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableIndexSet, SCUserSession;

@interface SCGalleryImportCameraRollAssetItemsImporter : NSObject
{
    SCUserSession *_userSession;
    _Bool _requiresHighQuality;
    unsigned long long _resultingSnapSource;
    _Bool _resultingEntryIsPrivate;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    long long _totalSizeInBytes;
    long long _importedSizeInBytes;
    long long _importedIndex;
    _Bool _cancelled;
    NSMutableIndexSet *_skippedIndices;
    NSMutableIndexSet *_importedIndices;
    _Bool _importing;
    NSArray *_assetItems;
}

@property(readonly, nonatomic) _Bool importing; // @synthesize importing=_importing;
@property(readonly, copy, nonatomic) NSArray *assetItems; // @synthesize assetItems=_assetItems;
- (void).cxx_destruct;
- (void)_importVideoAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_importImageAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_importAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_complete;
- (void)_advance;
- (void)cancel;
- (void)import;
- (id)initWithUserSession:(id)arg1 assetItems:(id)arg2 requiresHighQuality:(_Bool)arg3 resultingSnapSource:(unsigned long long)arg4 resultingEntryIsPrivate:(_Bool)arg5 progressBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;

@end

