//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCGroupInviteVenueSearchProvider.h"

@class NSString, SCSessionRequestManager;

@interface SCGroupInviteVenueSearchProviderImpl : NSObject <SCGroupInviteVenueSearchProvider>
{
    SCSessionRequestManager *_requestManager;
    id <SCLocationProvider> _userLocationProvider;
}

- (void).cxx_destruct;
- (void)autocompleteVenuesForString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithRequestManager:(id)arg1 userLocationProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

