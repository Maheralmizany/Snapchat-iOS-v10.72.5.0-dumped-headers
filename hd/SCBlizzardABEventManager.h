//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMPExperimentProvider, NSMutableDictionary;

@interface SCBlizzardABEventManager : NSObject
{
    AMPExperimentProvider *_experimentProvider;
    NSMutableDictionary *_eventsData;
}

@property(retain, nonatomic) NSMutableDictionary *eventsData; // @synthesize eventsData=_eventsData;
@property(readonly, nonatomic) AMPExperimentProvider *experimentProvider; // @synthesize experimentProvider=_experimentProvider;
- (void).cxx_destruct;
- (_Bool)_validateEvent:(id)arg1;
- (void)_loadCache;
- (void)storeCache;
- (void)resetCacheWithUserId:(id)arg1;
- (void)resetCache;
- (_Bool)shouldLogEvent:(id)arg1;
- (id)initWithExperimentProvider:(id)arg1;

@end

