//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCCreatorSettingsDataFetcher : NSObject
{
    id <SCDocObjectFetching> _docObjectContext;
}

- (void).cxx_destruct;
- (id)allCreatorSettings;
- (id)hiddenUserSettingsFromSource:(id)arg1;
- (id)hiddenPublisherSettingsFromSource:(id)arg1;
- (id)hiddenCreatorSettings;
- (id)notificationOptedInUserSettings;
- (id)notificationOptedInPublisherSettings;
- (id)notificationOptedInCreatorSettings;
- (id)subscribedUserSettingsFromSource:(id)arg1;
- (id)subscribedPublisherSettingsFromSource:(id)arg1;
- (id)subscribedCreatorSettingsFromSource:(id)arg1;
- (id)creatorSettingsWithIdentifiers:(id)arg1;
- (id)creatorSettingsWithIdentifier:(id)arg1;
- (id)initWithDocObjectContext:(id)arg1;

@end

