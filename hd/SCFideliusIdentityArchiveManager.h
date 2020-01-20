//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCEllipticCurveCrypto, SCFideliusUserIdentity, SCQueuePerformer;

@interface SCFideliusIdentityArchiveManager : NSObject
{
    SCQueuePerformer *_performer;
    SCFideliusUserIdentity *_archiveIdentity;
    SCEllipticCurveCrypto *_archiveBeta;
    _Bool _isArchiveUnavailable;
}

+ (id)sharedFakePerformer;
+ (id)shared;
- (void).cxx_destruct;
- (_Bool)save:(id)arg1;
- (void)clear;
- (id)iwek;
- (id)archiveBeta;
- (void)_clearInMemoryForTesting;
- (void)_setArchiveIdentity;
- (id)archiveIdentity;
- (id)initWithPerformer:(id)arg1;
- (id)init;

@end
