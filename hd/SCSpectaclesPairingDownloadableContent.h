//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCDownloadableContent.h"

#import "SCSpectaclesAssetProvider.h"

@class NSString;

@interface SCSpectaclesPairingDownloadableContent : SCDownloadableContent <SCSpectaclesAssetProvider>
{
    unsigned long long _scale;
    NSString *_folderName;
}

+ (id)shared;
@property(copy, nonatomic) NSString *folderName; // @synthesize folderName=_folderName;
@property(nonatomic) unsigned long long scale; // @synthesize scale=_scale;
- (void).cxx_destruct;
- (id)imagePathsForDirectory:(id)arg1;
- (id)imageNamed:(id)arg1;
- (id)pathForImageNamed:(id)arg1;
- (id)eventUniqueId;
- (id)resourceName;
- (id)fileNames;
- (id)directoryName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

