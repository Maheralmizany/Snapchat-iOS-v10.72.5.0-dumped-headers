//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCSessionRequestManager;

@interface SCLensStudioPairManager : NSObject
{
    SCSessionRequestManager *_requestManager;
}

- (void).cxx_destruct;
- (void)unpairStudioWithLensUserProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerStudioPairingWithTokenUUID:(id)arg1 lensUserProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithRequestManager:(id)arg1;

@end

