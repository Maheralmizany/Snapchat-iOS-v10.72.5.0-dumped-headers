//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCUserSession;

@interface SCGalleryUserSettingsManager : NSObject
{
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (_Bool)shouldSaveToMemories;
- (_Bool)shouldSaveToCameraRoll;
@property(nonatomic) _Bool flashbackStories;
@property(nonatomic) _Bool topSecretPrivateGalleryEnabled;
@property(nonatomic) _Bool storyAutoSaving;
@property(nonatomic) unsigned long long snapSaveOption;
@property(nonatomic) _Bool saveToPrivateGalleryByDefault;
@property(nonatomic) _Bool privateGalleryEnabled;
@property(nonatomic) _Bool backupOnCellular;
- (id)initWithUserSession:(id)arg1;

@end

