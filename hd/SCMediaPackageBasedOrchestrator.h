//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCMediaOrchestrating.h"

@class NSMutableDictionary, NSString;

@interface SCMediaPackageBasedOrchestrator : NSObject <SCMediaOrchestrating>
{
    id <SCPerforming> _performer;
    id <SCUploadMediaManaging> _uploadMediaManager;
    NSMutableDictionary *_mediaOrchestrationIdToState;
}

- (void).cxx_destruct;
- (void)resumeWithId:(id)arg1 callbackPerformer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)registerNewMediaOrchestration;
- (void)uploadMediaPackage:(id)arg1 mediaOrchestrationId:(id)arg2 key:(id)arg3 iv:(id)arg4;
- (id)initWithUploadMediaManager:(id)arg1 performer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

