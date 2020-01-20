//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCanceling.h"
#import "SCProgressReporting.h"

@class NSString, SCCloudFSFileDownloadRequestGroup, SCSentinel;

@interface SCCloudFSFileDownloadRequest : NSObject <SCProgressReporting, SCCanceling>
{
    id <SCPerforming> _performer;
    CDUnknownBlockType _resultHandler;
    SCSentinel *_sentinel;
    id <SCProgressReceiving> _progressReceiver;
    SCCloudFSFileDownloadRequestGroup *_requestGroup;
    id <SCProgressReporting><SCCanceling> _upstreamRequest;
}

@property(retain, nonatomic) id <SCProgressReporting><SCCanceling> upstreamRequest; // @synthesize upstreamRequest=_upstreamRequest;
@property(nonatomic) __weak SCCloudFSFileDownloadRequestGroup *requestGroup; // @synthesize requestGroup=_requestGroup;
@property(nonatomic) __weak id <SCProgressReceiving> progressReceiver; // @synthesize progressReceiver=_progressReceiver;
- (void).cxx_destruct;
- (void)performWithStatus:(unsigned long long)arg1 error:(id)arg2;
- (void)cancel;
@property(readonly, nonatomic) _Bool isCancelled;
- (id)initWithPerformer:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

