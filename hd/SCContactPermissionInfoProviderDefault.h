//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCContactPermissionInfoProvider.h"

@class NSString, SCBehaviorSubject, SCLazy, SCObservable, SCPreferences, SCUserSession;

@interface SCContactPermissionInfoProviderDefault : NSObject <SCContactPermissionInfoProvider>
{
    SCPreferences *_preferences;
    SCUserSession *_userSession;
    SCLazy *_requestManager;
    _Bool _enabledMigration;
    SCBehaviorSubject *_grantedUserLevelContactAccessSubject;
}

+ (id)errorWithDomain:(id)arg1 description:(id)arg2 code:(unsigned long long)arg3;
@property(retain, nonatomic) SCObservable *grantedUserLevelContactAccessObservable; // @synthesize grantedUserLevelContactAccessObservable=_grantedUserLevelContactAccessSubject;
- (void).cxx_destruct;
- (void)updateSettingWithAction:(id)arg1 parameters:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)_syncContactBookV2StateWithDict:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateSnapchatLevelContactPermission:(_Bool)arg1;
- (id)objectForKeyInStandardUserDefaults:(id)arg1;
- (id)userIdSpecificKeyForKey:(id)arg1;
- (id)legacyUserSpecificKeyForKey:(id)arg1;
@property(nonatomic) _Bool grantedUserLevelContactAccess;
@property(nonatomic) _Bool snapchatContactPermissionSynced;
- (void)syncContactPermission;
- (id)initWithPreferences:(id)arg1 userSession:(id)arg2 requestManager:(id)arg3 enabledMigration:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

