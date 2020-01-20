//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LSABaseComponent.h"

#import "LSAGeoDataListener.h"

@class LSAGeoDataComponentListenerAnnouncer, NSString;

@interface LSAGeoDataComponent : LSABaseComponent <LSAGeoDataListener>
{
    LSAGeoDataComponentListenerAnnouncer *_geoDataComponentAnnouncer;
    struct shared_ptr<LSAGeoDataDelegateWrapper> _delegateWrapper;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didRequestGeoData;
- (void)setGeoData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)setCoreManager:(shared_ptr_6e078de4)arg1 announcer:(id)arg2 configuration:(id)arg3;
- (id)initWithPerformer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

