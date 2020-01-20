//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, SCGalleryUserDefaultsManager, SCKeyServiceAuthorizationAttempt, SCKeyServiceEncryption, SCKeyServiceListenerAnnouncer, SCKeyServicePassphrasePromptCoordinator, SCKeyServicePersistedKey, SCQueuePerformer;

@interface SCKeyService : NSObject
{
    id <SCGalleryProfile> _profile;
    id <SCNetworker> _networker;
    SCQueuePerformer *_performer;
    SCKeyServiceEncryption *_masterKey;
    SCKeyServicePersistedKey *_persistedKey;
    SCKeyServiceAuthorizationAttempt *_authorizationAttempt;
    _Bool _startOnce;
    SCKeyServiceListenerAnnouncer *_announcer;
    SCKeyServicePassphrasePromptCoordinator *_promptCoordinator;
    _Bool _isRetrievingMasterKey;
    NSMutableDictionary *_masterKeyRequestHandlers;
    NSMutableSet *_masterKeyRequestHandlerUUIDsForRetrievingFeedback;
    NSMutableSet *_masterKeyRequestHandlerUUIDsForBlocking;
    NSMutableDictionary *_authorizationRequestHandlers;
    NSMutableArray *_authorizationRequestHandlerQueue;
    SCGalleryUserDefaultsManager *_userDefaultManager;
}

- (void).cxx_destruct;
- (void)_setAuthorizationAttemptIntoKeychain;
- (void)_removeAuthorizationAttemptFromKeychain;
- (void)_retrieveAuthorizationAttemptFromKeychain;
- (void)_setPersistedKeyIntoKeychain;
- (void)_removePersistedKeyFromKeychain;
- (_Bool)_retrievePersistedKeyFromKeychain;
- (void)_startFromKeychainOnce;
- (void)resetRateLimit;
- (void)_trackFailedAuthorizationAttemptWithAllowedFutureDate:(id)arg1;
- (void)_announceEmptyAllowedFutureAuthorizationDate;
- (_Bool)_isAuthorizationAttemptAllowed;
- (id)_allowedFutureDateFromServer:(id)arg1;
- (void)_requestAssertionForPurpose:(long long)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)_registerMasterKeyWithKeyService:(id)arg1 passprhase:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_retrieveMasterKeyWithKeyService:(id)arg1 passprhase:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_retrieveMasterKeyFromRemoteWithPassprhase:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_deliverErrorForPassphraseAuth:(id)arg1;
- (void)_deliverWhenMasterKeyAvailable;
- (void)cancelPromptForMasterKeyRequestUUIDs:(id)arg1;
- (void)removeAuthorizationRequestForUUID:(id)arg1;
- (void)removeMasterKeyRequestForUUID:(id)arg1;
- (void)isPersistedKeyPresent:(CDUnknownBlockType)arg1;
- (void)setMasterKeyWithPassphrase:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)requestMasterKeyWithOptions:(unsigned long long)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startFromKeychain;
- (id)allowedFutureAuthorizationDate;
- (id)masterKey;
- (void)_requestWithAuthorizationRequestHandlerWithPassphrase:(id)arg1;
- (void)_requestWithAuthorizationRequestHandler:(id)arg1;
- (id)requestAuthorizationWithPassphrase:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithProfile:(id)arg1 networker:(id)arg2 userSettingManager:(id)arg3 userDefaultManager:(id)arg4;

@end

