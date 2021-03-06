//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSArray<SCOperaPlaylistItemExtraPropertiesProvider>, NSDictionary;

@interface SCOperaPlaylistPluginsManager : NSObject
{
    NSArray *_featurePlugins;
    NSArray *_eventTrackerPlugins;
    NSDictionary *_mediaTypeConfigurations;
    NSArray<SCOperaPlaylistItemExtraPropertiesProvider> *_extraPropertiesProviders;
}

@property(readonly, copy, nonatomic) NSArray<SCOperaPlaylistItemExtraPropertiesProvider> *extraPropertiesProviders; // @synthesize extraPropertiesProviders=_extraPropertiesProviders;
@property(readonly, copy, nonatomic) NSDictionary *mediaTypeConfigurations; // @synthesize mediaTypeConfigurations=_mediaTypeConfigurations;
- (void).cxx_destruct;
- (void)teardown;
- (void)setOperaViewController:(id)arg1;
- (void)setPlaylistItemController:(id)arg1;
- (void)addEventListenersWithEventAnnouncer:(id)arg1;
- (void)updateOperaConfiguration:(id)arg1;
- (void)_setUpExtraPropertiesProviders;
- (void)_setUpMediaTypeConfigurations;
- (void)_setUpPlugins:(id)arg1;
- (id)_flattenPluginsWithDependentPlugins:(id)arg1;
- (id)initWithPlaylistPlugins:(id)arg1;

@end

