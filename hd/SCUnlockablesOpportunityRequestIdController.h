//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "SCGtqUnlockablesDataSourceListener.h"

@class NSString, SCUserSession;

@interface SCUnlockablesOpportunityRequestIdController : NSObject <NSCoding, SCGtqUnlockablesDataSourceListener>
{
    NSString *_filterOpportunityRequestId;
    NSString *_lensOpportunityRequestId;
    SCUserSession *_userSession;
}

+ (void)_removeSavedState;
+ (id)path;
@property(readonly, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (void)_saveState;
- (void)didFetchUnlockables:(id)arg1 withContext:(id)arg2 forRequest:(id)arg3;
- (id)getLensOpportunityRequestId;
- (id)getFilterOpportunityRequestId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_updateOpportunityRequestId:(id)arg1;
- (void)_setUserSession:(id)arg1;
- (void)_subscribeForNotifications;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

