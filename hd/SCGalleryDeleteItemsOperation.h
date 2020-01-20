//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, SCAlertView, SCUserSession;

@interface SCGalleryDeleteItemsOperation : NSObject
{
    SCUserSession *_userSession;
    NSArray *_galleryItems;
    _Bool _running;
    CDUnknownBlockType _completionBlock;
    NSArray *_failedEntries;
    NSArray *_galleryEntries;
    NSArray *_gallerySnaps;
    NSArray *_photoAssets;
    _Bool _deletedFailedEntries;
    _Bool _deletedGalleryEntries;
    _Bool _deletedPhotoAssets;
    _Bool _deletedGallerySnaps;
    NSString *_callerContext;
    SCAlertView *_alertView;
}

- (void).cxx_destruct;
- (void)_complete;
- (void)_deletePhotoAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_deleteGallerySnaps:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_deleteGallerySnapsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_deleteGalleryEntriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_deleteFailedGalleryEntriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)runWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithGalleryItems:(id)arg1 gallerySnaps:(id)arg2 context:(id)arg3 userSession:(id)arg4;

@end

