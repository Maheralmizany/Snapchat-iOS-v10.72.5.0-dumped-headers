//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNMessagingUploadDelegate.h"

@class SCLazy, SCQueuePerformer;

@interface SCNativeUploadDelegateImpl : NSObject <SCNMessagingUploadDelegate>
{
    SCLazy *_mediaOrchestratorLazy;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)uploadMedia:(id)arg1 callback:(id)arg2;
- (id)initWithMediaOrchestratorLazy:(id)arg1;

@end
