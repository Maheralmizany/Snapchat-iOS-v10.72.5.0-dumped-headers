//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLegacyUserMigrationTracker.h"

@class NSString, SCLazy;

@interface SCLegacyUserMigrationTrackerImpl : NSObject <SCLegacyUserMigrationTracker>
{
    SCLazy *_userPreferences;
}

- (void).cxx_destruct;
- (void)setDidMigrateForProvider:(id)arg1;
- (_Bool)didMigrateForProvider:(id)arg1;
- (id)initWithUserPreferences:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

