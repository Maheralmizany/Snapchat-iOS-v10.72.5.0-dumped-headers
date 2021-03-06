//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaRemoteVideoPropertiesProvider.h"

@class NSMutableDictionary, NSMutableSet, NSPointerArray, NSString, SCScopedAccess;

@interface SCDiscoverVideoCatalogService : NSObject <SCOperaRemoteVideoPropertiesProvider>
{
    SCScopedAccess *_scopedCircumstanceEngine;
    NSString *_videoServiceEndpoint;
    NSString *_adServiceEndpoint;
    NSPointerArray *_listeners;
    NSMutableSet *_loadingCatalogs;
    NSMutableDictionary *_videoCatalogMap;
}

+ (id)shared;
@property(retain, nonatomic) NSMutableDictionary *videoCatalogMap; // @synthesize videoCatalogMap=_videoCatalogMap;
@property(retain, nonatomic) NSMutableSet *loadingCatalogs; // @synthesize loadingCatalogs=_loadingCatalogs;
@property(retain, nonatomic) NSPointerArray *listeners; // @synthesize listeners=_listeners;
- (void).cxx_destruct;
- (void)fetchUrlsForBitmojiRemoteVideoForContext:(id)arg1 withListener:(id)arg2;
@property(readonly, nonatomic) NSString *adVideoCatalogEndpoint; // @dynamic adVideoCatalogEndpoint;
@property(readonly, nonatomic) NSString *videoCatalogEndpoint; // @dynamic videoCatalogEndpoint;
- (void)fetchPropertiesWithContext:(id)arg1 listener:(id)arg2;
- (id)propertiesForVideoId:(id)arg1;
- (void)requestDidSucceed:(_Bool)arg1;
- (id)catalogForVideoId:(id)arg1;
- (void)fetchCatalogForAdWithVideoId:(id)arg1 withListener:(id)arg2;
- (void)fetchCatalogForEditionId:(id)arg1 withListener:(id)arg2;
- (void)_videoServiceEndpointFromCircumstanceEngine:(id)arg1;
- (void)_setupVideoServiceEndpointFromCircumstanceEnginee:(id)arg1;
- (void)_adServiceEndpointFromCircumstanceEngine:(id)arg1;
- (void)_setupAdServiceEndpointFromCircumstanceEngine:(id)arg1;
- (void)updateEndpointFromCircumstanceEngine;
- (id)init;

@end

