//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary;

@interface SCDataHandlerMetadata : NSObject
{
    _Bool _wasLoadedOnce;
    _Bool _needsUpdate;
    NSDate *_lastRefreshDate;
    NSDictionary *_nextPageInfo;
}

@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(nonatomic) _Bool wasLoadedOnce; // @synthesize wasLoadedOnce=_wasLoadedOnce;
@property(retain, nonatomic) NSDictionary *nextPageInfo; // @synthesize nextPageInfo=_nextPageInfo;
@property(retain, nonatomic) NSDate *lastRefreshDate; // @synthesize lastRefreshDate=_lastRefreshDate;
- (void).cxx_destruct;
- (_Bool)updateFromSerializedMetadata:(id)arg1 error:(id *)arg2;
- (id)serializeMetadataWithError:(id *)arg1;
- (id)init;

@end

