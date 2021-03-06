//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCArchiveObjectManager.h"
#import "SCTraceEnabled.h"

@class NSString, SCArchiveLoader, SCDiscoverChannels;

@interface SCDiscoverChannelsManager : NSObject <SCTraceEnabled, SCArchiveObjectManager>
{
    _Bool _fetchingChannelsFromServer;
    _Bool _allowUnloadedDiscoverChannelsAccess;
    SCArchiveLoader *_loader;
    SCDiscoverChannels *_discoverChannels;
}

+ (id)path;
+ (id)shared;
@property(retain, nonatomic) SCDiscoverChannels *discoverChannels; // @synthesize discoverChannels=_discoverChannels;
- (void).cxx_destruct;
- (void)waitUntilDiscoverChannelsLoadsWithCallback:(CDUnknownBlockType)arg1;
- (void)accessPotentiallyUnloadedDiscoverChannelsWithBlock:(CDUnknownBlockType)arg1;
- (id)currentChannelHashes;
- (_Bool)shouldLoadFromDiskImmediately;
- (void)clear;
- (void)markAsLoadedWithoutLoadingFromDisk;
- (void)loadFromDiskAsync:(_Bool)arg1;
- (CDUnknownBlockType)_loadedBlock;
- (_Bool)saveState;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

