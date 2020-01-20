//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSearchSectionCreating.h"

@class NSString, SCSettingsOptInEntityDataStore, SCSettingsStoryNotificationsActionHandler, SCUserSession;

@interface SCSettingsStoryNotificationsSectionCreator : NSObject <SCSearchSectionCreating>
{
    SCUserSession *_userSession;
    SCSettingsStoryNotificationsActionHandler *_actionHandler;
    SCSettingsOptInEntityDataStore *_dataStore;
    id <SCSearchBarDelegate> _searchBarDelegate;
}

- (void).cxx_destruct;
- (id)sectionForDescriptor:(id)arg1;
- (id)initWithUserSession:(id)arg1 actionHandler:(id)arg2 dataStore:(id)arg3 searchBarDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
