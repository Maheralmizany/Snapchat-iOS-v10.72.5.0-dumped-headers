//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCObserving.h"

@class NSString, SCGalleryLagunaContentDataSource;

@interface SCGalleryLagunaEntryObserveContext : NSObject <SCObserving>
{
    NSString *_observeToken;
    NSString *_entryId;
    SCGalleryLagunaContentDataSource *_lagunaContentDataSource;
}

- (void).cxx_destruct;
- (void)unobserve;
- (void)dealloc;
- (id)initWithObserveToken:(id)arg1 entryId:(id)arg2 lagunaContentDataSource:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

