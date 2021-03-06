//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MGLOfflineStorageDelegate.h"

@class NSHashTable, NSString, SCMapAuthValues, SCMapFSNService, SCMapboxURLSession, SCQueuePerformer;

@interface SCMapboxStyleLoader : NSObject <MGLOfflineStorageDelegate>
{
    NSString *_userId;
    SCMapFSNService *_mapFSNService;
    SCMapboxURLSession *_mapboxURLSession;
    SCQueuePerformer *_performer;
    _Bool _didUnarchiveAuthValues;
    SCMapAuthValues *_authValues;
    NSHashTable *_listeners;
}

- (void).cxx_destruct;
- (id)offlineStorage:(id)arg1 URLForResourceOfKind:(unsigned long long)arg2 withURL:(id)arg3;
- (void)_archiveAuthValues:(id)arg1;
- (void)_unarchiveAuthValues;
- (_Bool)_setAccessToken:(id)arg1;
- (_Bool)_cacheStyleJsonFromResponse:(id)arg1 forMapStyle:(int)arg2;
- (id)accessToken;
@property(retain, nonatomic) SCMapAuthValues *authValues;
- (void)_handleStyleResponse:(id)arg1 error:(id)arg2 forStyle:(int)arg3;
- (void)_fetchStyleFromSource:(int)arg1;
- (void)_notifyListenersOfError:(id)arg1 forStyle:(int)arg2;
- (void)_notifyListenersForStyle:(int)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)warmupForStyle:(int)arg1;
- (id)_generateStyleURLForStyle:(int)arg1;
- (id)styleURLForStyle:(int)arg1;
- (void)_ensureMapboxStorageSetup;
- (void)_ensureMapboxAccessToken;
- (id)initWithUserId:(id)arg1 mapFSNService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

