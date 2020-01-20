//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCachingMediaRequest.h"
#import "SCProgressReporting.h"

@class NSString, SCCachingMediaItemBuildRequestGroup, SCSentinel;

@interface SCCachingMediaItemBuildRequest : NSObject <SCCachingMediaRequest, SCProgressReporting>
{
    SCSentinel *_sentinel;
    CDUnknownBlockType _resultHandler;
    id <SCProgressReceiving> _progressReceiver;
    SCCachingMediaItemBuildRequestGroup *_requestGroup;
}

@property(nonatomic) __weak SCCachingMediaItemBuildRequestGroup *requestGroup; // @synthesize requestGroup=_requestGroup;
@property(nonatomic) __weak id <SCProgressReceiving> progressReceiver; // @synthesize progressReceiver=_progressReceiver;
- (void).cxx_destruct;
- (void)performWithItem:(id)arg1 count:(long long)arg2 isCancelled:(_Bool)arg3 isFinal:(_Bool)arg4;
- (void)cancel;
- (_Bool)isCancelled;
- (id)initWithResultHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
