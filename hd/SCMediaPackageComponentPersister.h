//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCMediaPackageComponentPersisting.h"

@class NSString;

@interface SCMediaPackageComponentPersister : NSObject <SCMediaPackageComponentPersisting>
{
    id <SCKeyValuePersisting> _keyValueStore;
}

- (void).cxx_destruct;
- (void)removeMediaPackageForId:(id)arg1;
- (id)internalInfoForMediaPackageId:(id)arg1;
- (id)overlayForMediaPackageId:(id)arg1;
- (id)editForMediaPackageId:(id)arg1;
- (id)mediaInfoForMediaPackageId:(id)arg1;
- (id)mediaDataForMediaPackageId:(id)arg1;
- (_Bool)setInternalInfo:(id)arg1 forMediaPackageId:(id)arg2;
- (_Bool)addMediaPackageWithMediaData:(id)arg1 mediaInfo:(id)arg2 edit:(id)arg3 overlay:(id)arg4 internalInfo:(id)arg5;
- (id)allMediaPackageIds;
- (id)initWithKeyValueStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

