//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensCaptureWorkflowProvider.h"

@class NSString, SCScopedAccess, SCUserSession;

@interface SCLensCaptureWorkflowProviderImpl : NSObject <SCLensCaptureWorkflowProvider>
{
    SCScopedAccess *_captureLauncher;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)lensCaptureWorkflowWithReplyParameters:(id)arg1 lensDataProvider:(id)arg2 fromViewController:(id)arg3;
- (id)initWithCaptureLauncher:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
