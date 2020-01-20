//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCKeyServiceRequest.h"

@class NSString, SCKeyService, SCSentinel;

@interface SCKeyServiceMasterKeyRequest : NSObject <SCKeyServiceRequest>
{
    NSString *_UUID;
    SCKeyService *_keyService;
    SCSentinel *_sentinel;
}

- (void).cxx_destruct;
- (void)cancel;
- (_Bool)isCancelled;
- (void)dealloc;
- (id)initWithUUID:(id)arg1 keyService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
