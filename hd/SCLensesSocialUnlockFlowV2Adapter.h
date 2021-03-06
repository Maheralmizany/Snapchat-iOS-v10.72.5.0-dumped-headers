//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCContextV2SocialUnlockFlow.h"
#import "SCLensSocialUnlockV2FlowDelegate.h"

@class NSString;

@interface SCLensesSocialUnlockFlowV2Adapter : NSObject <SCLensSocialUnlockV2FlowDelegate, SCContextV2SocialUnlockFlow>
{
    id <SCLensSocialUnlockV2Flow> _adoptedFlow;
    id <SCContextV2SocialUnlockFlowDelegate> _adoptedDelegate;
    id <SCContextDataProviding> _contextInfoProvider;
}

- (void).cxx_destruct;
- (void)socialUnlockFlow:(id)arg1 willDismissContextCardsWithCompletion:(CDUnknownBlockType)arg2;
- (void)socialUnlockFlowDidDismissModalContent:(id)arg1;
- (void)socialUnlockFlowWillPresentModalContent:(id)arg1;
- (_Bool)startUnlockFlowForURL:(id)arg1 deepLinkUnlockPolicy:(id)arg2 baseViewController:(id)arg3 contextInfoProvider:(id)arg4 replyParameters:(id)arg5 delegate:(id)arg6;
- (id)initWithLensSocialUnlockV2Flow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

