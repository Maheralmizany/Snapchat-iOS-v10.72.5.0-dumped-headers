//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTraceEnabled.h"

@class NSString, SCQueuePerformer;

@interface SCCaptureDeviceAuthorizationChecker : NSObject <SCTraceEnabled>
{
    SCQueuePerformer *_performer;
    _Bool _videoCaptureAuthorizationCachedValue;
}

- (void).cxx_destruct;
- (_Bool)authorizedForMediaType:(id)arg1;
- (_Bool)authorizedForVideoCapture;
- (void)preloadCaptureHardware:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
