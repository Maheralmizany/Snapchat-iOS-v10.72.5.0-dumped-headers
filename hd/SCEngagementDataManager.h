//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCUserSessionScoped.h"

@class NSMutableDictionary, NSString, SCUserSession;

@interface SCEngagementDataManager : NSObject <SCUserSessionScoped>
{
    id <SCPerforming> _performer;
    SCUserSession *_userSession;
    _Bool _invalidated;
    NSMutableDictionary *_nameToBuckets;
}

- (void).cxx_destruct;
- (void)invalidate;
- (id)_toDictionary:(id)arg1;
- (id)toDictionary:(id)arg1;
- (id)_engagementDataPath;
- (void)_loadEngagementData;
- (void)_saveEngagementData;
- (void)onBitmojiClicked:(id)arg1;
- (void)onStoryClicked:(id)arg1;
- (void)_incrementOnPerformer:(id)arg1 type:(unsigned long long)arg2 count:(long long)arg3;
- (void)increment:(id)arg1 type:(unsigned long long)arg2 count:(long long)arg3;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

