//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCUnifiedActionMenuDataProvider.h"

@class NSString;

@interface SCUnifiedProfileMyStorySettingsActionMenuDataProvider : NSObject <SCUnifiedActionMenuDataProvider>
{
    id <SCStoryPrivacySettingManaging> _storyPrivacySettingManager;
    long long _storyType;
    NSString *_storyIdentifier;
    long long _displayedMyStoriesSetting;
    _Bool _hasSnapProProfile;
    id <SCUnifiedActionMenuDataProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <SCUnifiedActionMenuDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setStoryPrivacyAndReload:(long long)arg1;
- (void)updateViewModelWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithStoryPrivacySettingManager:(id)arg1 storyType:(long long)arg2 storyIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

