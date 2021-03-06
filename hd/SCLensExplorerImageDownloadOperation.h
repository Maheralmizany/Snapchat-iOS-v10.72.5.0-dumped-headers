//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSObject<OS_dispatch_semaphore>, NSURL, SCFuture, SCPromise;

@interface SCLensExplorerImageDownloadOperation : NSOperation
{
    id <SCRequestManager> _requestManager;
    SCPromise *_promise;
    id <SCPerforming> _performer;
    struct CGSize _preferredSize;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSURL *_imageURL;
    SCFuture *_downloadResult;
}

@property(readonly, nonatomic) SCFuture *downloadResult; // @synthesize downloadResult=_downloadResult;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
- (_Bool)_isPhantomOperation;
- (void)cancel;
- (void)main;
- (id)initWithRequestManager:(id)arg1 imageURL:(id)arg2 preferredSize:(struct CGSize)arg3;

@end

