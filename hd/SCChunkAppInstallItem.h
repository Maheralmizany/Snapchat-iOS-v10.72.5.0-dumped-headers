//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCChunkItem.h"

#import "MediaDataSource.h"

@class Media, NSData, NSDictionary, NSNumber, NSString;

@interface SCChunkAppInstallItem : SCChunkItem <MediaDataSource>
{
    NSData *_appIconImageDataToSave;
    _Bool _includesVideo;
    _Bool _isAppIconImageOptional;
    NSNumber *_appId;
    NSDictionary *_storeParams;
    NSString *_appTitle;
    Media *_appIconImageMedia;
}

@property(readonly, nonatomic) _Bool isAppIconImageOptional; // @synthesize isAppIconImageOptional=_isAppIconImageOptional;
@property(readonly, nonatomic) Media *appIconImageMedia; // @synthesize appIconImageMedia=_appIconImageMedia;
@property(readonly, copy, nonatomic) NSString *appTitle; // @synthesize appTitle=_appTitle;
@property(readonly, nonatomic) _Bool includesVideo; // @synthesize includesVideo=_includesVideo;
@property(readonly, copy, nonatomic) NSDictionary *storeParams; // @synthesize storeParams=_storeParams;
@property(readonly, nonatomic) NSNumber *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (_Bool)imageMediaExistsInCache;
- (void)saveMediaToCache;
- (id)cacheMediaIds;
- (id)requestContexts;
- (_Bool)needsAuthToFetch;
- (_Bool)encrypt;
- (_Bool)persist;
- (id)encryptionDictionaryForMedia:(id)arg1;
- (id)decryptData:(id)arg1 forMedia:(id)arg2;
- (id)mediaIdForMedia:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)ensureNonNilMediaObjects;
- (id)extractImageDataForMediaKey:(id)arg1 appInstallProperties:(id)arg2 chunkDictionary:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1 chunkDictionary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

