//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, SCExperimentManager, SCSessionRequestManager;

@interface SCLensBlobDataFetcher : NSObject
{
    SCSessionRequestManager *_requestManager;
    SCExperimentManager *_experimentManager;
    id <SCPerforming> _performer;
    NSMutableDictionary *_requestsInProgress;
}

+ (id)cacheDirectoryPath;
- (void).cxx_destruct;
- (id)_requestForKey:(id)arg1 blobId:(id)arg2 url:(id)arg3 requestSettings:(id)arg4;
- (void)boostRequest:(id)arg1 setting:(id)arg2;
- (void)reportError:(id)arg1 completionBlocks:(id)arg2;
- (id)fetchBlobWithId:(id)arg1 url:(id)arg2 encryptionKey:(id)arg3 encryptionIv:(id)arg4 requestSettings:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)getAbsolutePathForBlobWithId:(id)arg1;
- (id)initWithRequestManager:(id)arg1 experimentManager:(id)arg2;

@end

