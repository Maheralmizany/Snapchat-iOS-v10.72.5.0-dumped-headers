//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensExplorerLensMediaDownloaderProtocol.h"

@class NSOperationQueue, NSString;

@interface SCLensExplorerLensMediaDownloader : NSObject <SCLensExplorerLensMediaDownloaderProtocol>
{
    id <SCRequestManager> _requestManager;
    NSOperationQueue *_downloadingQueue;
}

+ (id)createDownloaderWithRequestManager:(id)arg1;
- (void).cxx_destruct;
- (id)_operationWithURL:(id)arg1;
- (id)_operationWithUnlockableId:(id)arg1;
- (void)cancelAllDownloads;
- (void)cancelDownloadForKeys:(id)arg1;
- (id)downloadImageWithURL:(id)arg1 preferredSize:(struct CGSize)arg2;
- (id)downloadAnimationForLensExplorerItem:(id)arg1 preferredSize:(struct CGSize)arg2;
- (void)dealloc;
- (id)initWithRequestManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
