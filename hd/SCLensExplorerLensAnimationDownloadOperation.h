//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSMutableArray, NSOperationQueue, NSString, SCFuture, SCLensExplorerLensItem, SCPromise;

@interface SCLensExplorerLensAnimationDownloadOperation : NSOperation
{
    id <SCRequestManager> _requestManager;
    SCPromise *_promise;
    NSMutableArray *_images;
    NSOperationQueue *_downloadingQueue;
    NSString *_name;
    struct CGSize _preferredSize;
    SCLensExplorerLensItem *_lensExplorerItem;
    SCFuture *_downloadResult;
}

@property(readonly, nonatomic) SCFuture *downloadResult; // @synthesize downloadResult=_downloadResult;
@property(readonly, nonatomic) SCLensExplorerLensItem *lensExplorerItem; // @synthesize lensExplorerItem=_lensExplorerItem;
- (void).cxx_destruct;
- (_Bool)_isPhantomOperation;
- (id)name;
- (void)cancel;
- (void)completeOperation;
- (void)main;
- (id)initWithRequestManager:(id)arg1 lensExplorerItem:(id)arg2 preferredSize:(struct CGSize)arg3;

@end

