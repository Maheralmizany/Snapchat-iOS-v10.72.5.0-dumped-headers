//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCMTGetPoiSharePlaylistResponse;

@interface SCMapPoiShareMetadataBuilder : NSObject
{
    NSString *_poiId;
    SCMTGetPoiSharePlaylistResponse *_playlistResponse;
}

+ (id)withMapPoiShareMetadata:(id)arg1;
- (void).cxx_destruct;
- (id)setPlaylistResponse:(id)arg1;
- (id)setPoiId:(id)arg1;
- (id)build;

@end

