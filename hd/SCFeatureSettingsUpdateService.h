//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCFeatureSettingsUpdateService.h"

@class NSString, SCSessionRequestManager;

@interface SCFeatureSettingsUpdateService : NSObject <SCFeatureSettingsUpdateService>
{
    SCSessionRequestManager *_requestManager;
}

- (void).cxx_destruct;
- (void)updateFeatureSettingsToServer:(id)arg1 successQueue:(id)arg2 failureQueue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)initWithRequestManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

