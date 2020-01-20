//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCQueuePerformer, SCSnapAdsApplicationInfo, SCSnapAdsUser;

@interface SCUnlockableTrackerBase : NSObject
{
    SCQueuePerformer *_performer;
    id <SCUnlockablesAuthProvider> _authProvider;
    SCSnapAdsApplicationInfo *_appInfoProvider;
    id <SCSnapAdsDeviceAdapter> _deviceProvider;
    SCSnapAdsUser *_snapAdsUser;
    id <SCUnlockablesAdRequestProvider> _adRequestProvider;
}

- (void).cxx_destruct;
- (id)constructLogDictionaryWithSOJURequest:(id)arg1 unlockableSnapInfo:(id)arg2;
- (void)_fireTrackViaGtqProxy:(id)arg1 protoViewTrackPayload:(id)arg2 protoCreationTrackPayload:(id)arg3 gtqNetworkController:(id)arg4 unlockablesSnapInfo:(id)arg5 trackType:(unsigned long long)arg6 userSession:(id)arg7;
- (id)init;

@end

